#include"handler.h"
#include"Item.h"


Handler::Handler() {}

void Handler::Menu_Main(void)
{
	system("cls");
	cout << endl;
	cout << "=====[Main]=====" << endl;
	cout << endl;
	cout << "1. BOM" << endl;
	cout << "2. �����ȹ" << endl;
	cout << "3. ����" << endl;
	cout << "4. �ҷ�����Ȯ��" << endl;
	cout << "5. ���α׷� ����" << endl << endl;
}

void Handler::Init_Sample_ItemInfo(void)
{
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

	Case case1("case1", "case001", "20220330-case1-001");
	Case case2("case2", "case002", "20220330-case2-001");
	Case case3("case3", "case003", "20220330-case3-001");

	Software os1("os1", "os001", "20220330-os1-001");
	Software os2("os2", "os002", "20220330-os2-001");
	Software os3("os3", "os003", "20220330-os3-001");

	product2* stub[100];
	//product2 stub1[100];

	stub[0] = new product2("PC02", cpu1, mb2, ram1, hdd3, ssd1, pow3, case2, os1);
	//stub1[0] = product2("PC02", cpu1, mb2, ram1, hdd3, ssd1, pow3, case2, os1);
	// stub[0]->Print_produt();
}

void Handler::Menu_BOM(void)
{
	int Select_BOM;

	while (1)
	{
		system("cls");
		cout << endl;
		cout << "=====[BOM]=====" << endl;
		cout << endl;
		cout << "1. BOM �߰�" << endl;
		cout << "2. BOM ��ȸ" << endl;
		cout << "3. BOM ����" << endl;
		cout << "4. �ڷΰ���" << endl;
		cout << "���� : ";
		cin >> Select_BOM;

		if (Select_BOM == 1)
		{
			Add_BOM();
		}
		else if (Select_BOM == 2)
		{
			Show_BOM();
		}

		else if (Select_BOM == 3)
		{
			Delete_BOM();
		}

		else if (Select_BOM == 4)
		{
			break;
		}

		else
		{
			while (getchar() != '\n');
			cout << "�߸��� �Է°��Դϴ�." << endl;
		}
	}
}

void Handler::Add_BOM()
{
	cout << endl << "�̱���" << endl << endl;
}

void Handler::Delete_BOM()
{
	cout << endl << "�̱���" << endl << endl;
}

void Handler::Show_BOM()
{
	cout << endl << "�̱���" << endl << endl;
}


void Handler::Show_NGInfo()
{
	cout << endl << "�̱���" << endl << endl;
}

void Handler::manufature()
{
	cout << endl << "CPU ������...OK" << endl << endl;
	cout << endl << "CPU ������...OK" << endl << endl;
	cout << endl << "CPU ������...OK" << endl << endl;
	cout << endl << "POWER ������...NG" << endl << endl;
	cout << endl << "!!! �����߻� !!!" << endl << endl;
}

void Handler::Menu_ManufacturePlanning() {
	int choice;

	while (1) {
		system("cls");
		cout << endl;
		cout << "=====[�����ȹ]=====" << endl;
		cout << endl;
		cout << "1. �����ȹ �߰�" << endl;
		cout << "2. �����ȹ ����" << endl;
		cout << "3. �����ȹ ��ȸ" << endl;
		cout << "4. �ڷΰ���" << endl << endl;
		cout << "�Է� : "; cin >> choice;

		if (choice == 1)
			Add_ManufacturePlanning();
		else if (choice == 2)
			Delete_ManufacturePlanning();
		else if (choice == 3)
			Show_ManufacturePlanning();
		else if (choice == 4)
			break;
		else cout << "�߸��� �Է��Դϴ�." << endl;
	}
}

void Handler::Add_ManufacturePlanning() {
	cout << "�̱���" << endl;
}

void Handler::Delete_ManufacturePlanning() {
	cout << "�̱���" << endl;
}

void Handler::Show_ManufacturePlanning() {
	cout << "�̱���" << endl;
}