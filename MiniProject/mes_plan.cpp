//
//#include"handler.h"
//#include"Item.h"
//
//
//	void Handler::Menu_ManufacturePlanning()
//	{
//		
//		int option;
//		while (1)
//		{
//			cout << "==============�����ȹ==============" << endl;
//			cout << "(1) �����ȹ �߰�" << endl;
//			cout << "(2)���� ��ȹ ����" << endl;
//			cout << "(3)���� ��ȹ ��ȸ" << endl;
//			cout << "(4)�� �� �� ��" << endl;
//
//			cin >> option;
//			if (option == 1)
//				Add_ManufacturePlanning();
//			else if (option == 2)
//				Delete_ManufacturePlanning();
//			else if (option == 3)
//				Show_ManufacturePlanning();
//			else
//			{
//				cout << "�߸��Է�" << endl;
//				break;
//			}
//		}
//	}
//
//	void Handler:: Add_ManufacturePlanning()				//(BOM���� �ø����ȣ �޾ƿ�)
//	{
//		string sirial;
//		int date;
//		int amount;
//		string model;
//
//		//��ǰ �޾ƿͼ� ����
//		cout << "===========================�����ȹ=============================" << endl;
//		///BOM���� �޾ƿ� ��ǰ ����Ʈ ���
//
//		cout << "������ Srial��ȣ�� �Է��ϼ��� : "; cin >> sirial;
//		//������ ��¥, ���� �Է�
//		cout << "������ ��¥�� �Է��ϼ��� : "; cin >> date;
//		cout << "������ ������ �Է��ϼ��� : "; cin >> amount;
//		cout << "������ ���� �������ּ��� : "; cin >> model;
//
//		stub[Num_Memproduct++] = new Plan(sirial, date, amount);
//		stub[0]->Print_Plan();
//
//		//handler�� �Ѱ��� �����ȹ �迭 ����
//	}
//
//	void Handler::Show_ManufacturePlanning()              //��� ��ȹ ���
//	{
//		cout << "-------------------------" << endl;
//		for (int i = 0; i < Num_Memproduct; i++)
//			stub[i]->Print_Plan();
//		cout << "-------------------------" << endl;
//	}
//
//	void Handler::Delete_ManufacturePlanning()
//	{
//		string sirial;
//		cout << "�ø����� �Է��ϼ���" << endl;
//		cin >> sirial;
//
//		for (int i = 0; i < Num_Memproduct; i++)
//		{
//			if (sirial == stub[i]->getMemSrial())
//			{
//				delete stub[i];						//�����ȹ �ø��� �˻��Ͽ� ����
//				for (int j = i; j < Num_Memproduct; j++)
//				{
//					stub[j] = stub[j + 1];			//������ �迭 �ڿ� �ִ� �迭�� ��ĭ ������ ����
//				}
//				Num_Memproduct--;
//				cout << "��ȹ�� �����߽��ϴ�." << endl;
//				return;
//			}
//		}
//		cout << "�ش� ��ȹ�� �����ϴ�." << endl;
//	}
//
//	///////////////////////////////////////////////////////////bom�ڵ�, �����ȹ�ڵ�, ���� ����
//
//
