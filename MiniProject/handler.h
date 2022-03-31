#ifndef __HANDLER_H__
#define __HANDLER_H__

#include"Item.h"

class Plan
{
private:
	string Plan_sirial;
	int Plan_date;
	int Amount;

public:
	Plan(const string plan_sirial, int plan_date, int Amount) : Plan_date(plan_date), Amount(Amount)
	{
		Plan_sirial = plan_sirial;
	}
	//handler�� �Ѱ��� �����ȹ �迭�� ���������ϴ� �Լ�
	int getAmount() { return Amount; }
	string getMemSrial() { return Plan_sirial; }

	virtual void Print_Plan() const
	{
		cout << "Plan Sirial : " << Plan_sirial << endl;
		cout << "Plan date : " << Plan_date << endl;
		cout << " Plan amount : " << Amount << endl;

	}
};


class Handler
{
private:
	int recent_work;

	int Num_Memproduct = 0;
	Plan* stub[100];
public:
	Handler(void);
	// ���õ������Է�
	void Init_Sample_ItemInfo(void);

	// ���θ޴�
	void Menu_Main(void);

	// BOM
	//void Menu_BOM();
	//void Add_BOM();
	//void Delete_BOM();
	//void Show_BOM();
	//
	//// �����ȹ

	void Menu_ManufacturePlanning()
	{

		int option;
		while (1)
		{
			cout << "==============�����ȹ==============" << endl;
			cout << "(1) �����ȹ �߰�" << endl;
			cout << "(2)���� ��ȹ ����" << endl;
			cout << "(3)���� ��ȹ ��ȸ" << endl;
			cout << "(4)�� �� �� ��" << endl;

			cin >> option;
			if (option == 1)
				Add_ManufacturePlanning();
			else if (option == 2)
				Delete_ManufacturePlanning();
			else if (option == 3)
				Show_ManufacturePlanning();
			else
			{
				cout << "�߸��Է�" << endl;
				break;
			}
		}
	}

	void Add_ManufacturePlanning()				//(BOM���� �ø����ȣ �޾ƿ�)
	{
		string sirial;
		int date;
		int amount;
		string model;

		//��ǰ �޾ƿͼ� ����
		cout << "===========================�����ȹ=============================" << endl;
		///BOM���� �޾ƿ� ��ǰ ����Ʈ ���

		cout << "������ Srial��ȣ�� �Է��ϼ��� : "; cin >> sirial;
		//������ ��¥, ���� �Է�
		cout << "������ ��¥�� �Է��ϼ��� : "; cin >> date;
		cout << "������ ������ �Է��ϼ��� : "; cin >> amount;
		cout << "������ ���� �������ּ��� : "; cin >> model;

		stub[Num_Memproduct++] = new Plan(sirial, date, amount);
		stub[0]->Print_Plan();

		//handler�� �Ѱ��� �����ȹ �迭 ����
	}

	void Show_ManufacturePlanning() const               //��� ��ȹ ���
	{
		cout << "-------------------------" << endl;
		for (int i = 0; i < Num_Memproduct; i++)
			stub[i]->Print_Plan();
		cout << "-------------------------" << endl;
	}

	void Delete_ManufacturePlanning()
	{
		string sirial;
		cout << "�ø����� �Է��ϼ���" << endl;
		cin >> sirial;

		for (int i = 0; i < Num_Memproduct; i++)
		{
			if (sirial == stub[i]->getMemSrial())
			{
				delete stub[i];						//�����ȹ �ø��� �˻��Ͽ� ����
				for (int j = i; j < Num_Memproduct; j++)
				{
					stub[j] = stub[j + 1];			//������ �迭 �ڿ� �ִ� �迭�� ��ĭ ������ ����
				}
				Num_Memproduct--;
				cout << "��ȹ�� �����߽��ϴ�." << endl;
				return;
			}
		}
		cout << "�ش� ��ȹ�� �����ϴ�." << endl;
	}


	//
	//// �ҷ�����
	//void Show_NG_List();

};

#endif 
