#include"Item.h"
#include"handler.h"
#include "mes_plan.h"

static int Num_product = 0;

int main(void)
{

	int Select_main = 0;
	Handler manager;
	// product2* stub[100];

	
	// ���õ����� ����
	manager.Init_Sample_ItemInfo();
	
	
	while (1)
	{
		manager.Menu_Main();
		cout << "���� : ";
		cin >> Select_main;
		cout << endl;

		if (Select_main == 1)		// 1.1 BOM
		{
		}

		else if (Select_main == 2)	// 1.2 �����ȹ
		{
			manager.Menu_ManufacturePlanning();
		}

		else if (Select_main == 3)	// 1.3 ����
		{
		}

		else if (Select_main == 4)	// 1.4 �ҷ�Ȯ��
		{

		}

		else if (Select_main == 5)	// 1.5 ����
		{
			exit(1);
		}

		else
		{
			while (getchar() != '\n');
			cout << "�߸��� �Է°��Դϴ�." << endl;
		}
		

	}

	return 0;
}


