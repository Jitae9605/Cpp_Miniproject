
/*

#ifndef __MES_PLAN_H__
#define __MES_PLAN_H__
#include<iostream>
#include<cstring>
#include<vector>
#include<Windows.h>
#pragma warning(disable:4996)

#include"Item.h"

class Err
{
private:
	string Err_sirial;
	int Plan_date;
	int Amount;

public:
	Err(const string plan_sirial, int plan_date, int Amount) : Plan_date(plan_date), Amount(Amount)
	{
		Err_sirial = plan_sirial;
	}
	//handler�� �Ѱ��� �����ȹ �迭�� ���������ϴ� �Լ�
	int getAmount() { return Amount; }
	string getMemSrial() { return Err_sirial; }

	virtual void Print_Plan() const
	{
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "Plan date : " << Plan_date << endl;
		cout << " Plan amount : " << Amount << endl;
	}
};

class MES_Plan
{
private:
	int recent_work;

	int Num_Memproduct = 0;
	Err* stub[100];

public:
	//��ǰ ���õ�����
	void Sampledata()
	{
		// ���õ�����
		CPU cpu1("CPU1", "CPU001", "20220330-CP1-001");
		CPU cpu2("CPU2", "CPU002", "20220330-CP2-001");
		CPU cpu3("CPU3", "CPU003", "20220330-CP3-001");

		MB mb1("MB1", "MB001", "20220330-MB1-001");
		MB mb2("MB2", "MB002", "20220330-MB2-001");
		MB mb3("MB3", "MB003", "20220330-MB3-001");

		Memorry ram1("ram1", "ram001", "20220330-ram1-001");
		Memorry ram2("ram2", "ram002", "20220330-ram2-001");
		Memorry ram3("ram3", "ram003", "20220330-ram3-001");

		HDD hdd1("hdd1", "hdd001", "20220330-hdd1-001");
		HDD hdd2("hdd2", "hdd002", "20220330-hdd2-001");
		HDD hdd3("hdd3", "hdd003", "20220330-hdd3-001");

		SSD ssd1("ssd1", "ssd001", "20220330-ssd1-001");
		SSD ssd2("ssd2", "ssd002", "20220330-ssd2-001");
		SSD ssd3("ssd3", "ssd003", "20220330-ssd3-001");

		Power pow1("pow1", "pow001", "20220330-pow1-001");
		Power pow2("pow2", "pow002", "20220330-pow2-001");
		Power pow3("pow3", "pow003", "20220330-pow3-001");

		Case case1("case1", "case1001", "20220330-case1-001");
		Case case2("case2", "case1002", "20220330-case2-001");
		Case case3("case3", "case1003", "20220330-case3-001");

		Software os1("os1", "os1001", "20220330-os1-001");
		Software os2("os2", "os1002", "20220330-os2-001");
		Software os3("os3", "os1003", "20220330-os3-001");

	}

	//�ϼ�ǰ ���õ�����
	void Wansungdata()
	{
		// ���õ�����
		CPU cpu1("CPU1", "CPU001", "20220330-CP1-001");
		CPU cpu2("CPU2", "CPU002", "20220330-CP2-001");
		CPU cpu3("CPU3", "CPU003", "20220330-CP3-001");

		MB mb1("MB1", "MB001", "20220330-MB1-001");
		MB mb2("MB2", "MB002", "20220330-MB2-001");
		MB mb3("MB3", "MB003", "20220330-MB3-001");

		Memorry ram1("ram1", "ram001", "20220330-ram1-001");
		Memorry ram2("ram2", "ram002", "20220330-ram2-001");
		Memorry ram3("ram3", "ram003", "20220330-ram3-001");

		HDD hdd1("hdd1", "hdd001", "20220330-hdd1-001");
		HDD hdd2("hdd2", "hdd002", "20220330-hdd2-001");
		HDD hdd3("hdd3", "hdd003", "20220330-hdd3-001");

		SSD ssd1("ssd1", "ssd001", "20220330-ssd1-001");
		SSD ssd2("ssd2", "ssd002", "20220330-ssd2-001");
		SSD ssd3("ssd3", "ssd003", "20220330-ssd3-001");

		Power pow1("pow1", "pow001", "20220330-pow1-001");
		Power pow2("pow2", "pow002", "20220330-pow2-001");
		Power pow3("pow3", "pow003", "20220330-pow3-001");

		Case case1("case1", "case1001", "20220330-case1-001");
		Case case2("case2", "case1002", "20220330-case2-001");
		Case case3("case3", "case1003", "20220330-case3-001");

		Software os1("os1", "os1001", "20220330-os1-001");
		Software os2("os2", "os1002", "20220330-os2-001");
		Software os3("os3", "os1003", "20220330-os3-001");

		int Num_product = 0;
		product2* stub[100];

		stub[Num_product++] = new product2("PC02", cpu1, mb2, ram1, hdd3, ssd1, pow3, case2, os1);
		stub[0]->Print_produt();
	}

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
		Sampledata();

		cout << "������ Srial��ȣ�� �Է��ϼ��� : "; cin >> sirial;
		//������ ��¥, ���� �Է�
		cout << "������ ��¥�� �Է��ϼ��� : "; cin >> date;
		cout << "������ ������ �Է��ϼ��� : "; cin >> amount;
		cout << "������ ���� �������ּ��� : "; cin >> model;

		stub[Num_Memproduct++] = new Err(sirial, date, amount);
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

	///////////////////////////////////////////////////////////bom�ڵ�, �����ȹ�ڵ�, ���� ����
	~MES_Plan()                                   //�Ҹ���
	{
		for (int i = 0; i < Num_Memproduct; i++)
			delete stub[i];
	}
};


#endif

*/