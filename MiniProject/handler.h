#ifndef __HANDLER_H__
#define __HANDLER_H__

#include"Item.h"

class Plan
{
private:
	string Err_sirial;
	int Plan_date;
	int Amount;


public:
	Plan(const string plan_sirial, int plan_date, int Amount) : Plan_date(plan_date), Amount(Amount)
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


class Handler
{
private:
	int Num_Memproduct = 0;
	Plan* stub[100];


public:
	Handler(void);
	// ���õ������Է�
	void Init_Sample_ItemInfo(void);

	// ���θ޴�
	void Menu_Main(void);

	// BOM
	void Menu_BOM();
	void Add_BOM();
	void Delete_BOM();
	void Show_BOM();
	
	// �����ȹ
	void Menu_ManufacturePlanning();
	void Add_ManufacturePlanning();
	void Delete_ManufacturePlanning();
	void Show_ManufacturePlanning();
	
	// ����
	void manufature();

	// �ҷ�����
	void Show_NGInfo();

};

#endif 
