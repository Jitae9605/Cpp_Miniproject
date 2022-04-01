
#pragma once
#include"handler.h"
#include"Item.h"

Handler::Handler() {}

template <typename T>
void print_product_for(T product, int count)
{
	for (int i = 0; i < count; i++)
	{
		product[i].print_Info();
	}
}

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
	cpu[cpu_count++] = CPU("CPU1", "CPU001", "20220330-CP1-001");
	cpu[cpu_count++] = CPU("CPU2", "CPU002", "20220330-CP2-001");
	cpu[cpu_count++] = CPU("CPU3", "CPU003", "20220330-CP3-001");

	mb[mb_count++] = MB("MB1", "MB001", "20220330-MB1-001");
	mb[mb_count++] = MB("MB2", "MB002", "20220330-MB2-001");
	mb[mb_count++] = MB("MB3", "MB003", "20220330-MB3-001");

	ram[ram_count++] = Memorry("ram1", "ram001", "20220330-ram1-001");
	ram[ram_count++] = Memorry("ram2", "ram002", "20220330-ram2-001");
	ram[ram_count++] = Memorry("ram3", "ram003", "20220330-ram3-001");

	hdd[hdd_count++] = HDD("hdd1", "hdd001", "20220330-hdd1-001");
	hdd[hdd_count++] = HDD("hdd2", "hdd002", "20220330-hdd2-001");
	hdd[hdd_count++] = HDD("hdd3", "hdd003", "20220330-hdd3-001");

	ssd[ssd_count++] = SSD("ssd1", "ssd001", "20220330-ssd1-001");
	ssd[ssd_count++] = SSD("ssd2", "ssd002", "20220330-ssd2-001");
	ssd[ssd_count++] = SSD("ssd3", "ssd003", "20220330-ssd3-001");

	pow[pow_count++] = Power("pow1", "pow001", "20220330-pow1-001");
	pow[pow_count++] = Power("pow2", "pow002", "20220330-pow2-001");
	pow[pow_count++] = Power("pow3", "pow003", "20220330-pow3-001");

	case1[case1_count++] = Case("case1", "case1001", "20220330-case1-001");
	case1[case1_count++] = Case("case2", "case1002", "20220330-case2-001");
	case1[case1_count++] = Case("case3", "case1003", "20220330-case3-001");

	os[os_count++] = Software("os1", "os1001", "20220330-os1-001");
	os[os_count++] = Software("os2", "os1002", "20220330-os2-001");
	os[os_count++] = Software("os3", "os1003", "20220330-os3-001");
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
	string name, serial_num;
	int cpu_sel, mb_sel, ram_sel, hdd_sel, ssd_sel, pow_sel, case1_sel, os_sel;
	cout << "����� ��ǰ �̸��� �Է����ּ���: ";
	cin >> name;
	cout << "�ø����ȣ�� �Է����ּ���: ";
	cin >> serial_num;

	print_product_for(cpu, cpu_count);
	cout << "CPU�� �������ּ���: ";
	cin >> cpu_sel;

	print_product_for(mb, mb_count);
	cout << "M/B�� �������ּ���: ";
	cin >> mb_sel;

	print_product_for(ram, ram_count);
	cout << "Memory�� �������ּ���: ";
	cin >> ram_sel;

	print_product_for(hdd, hdd_count);
	cout << "HDD�� �������ּ���: ";
	cin >> hdd_sel;

	print_product_for(ssd, ssd_count);
	cout << "SSD�� �������ּ���: ";
	cin >> ssd_sel;

	print_product_for(pow, pow_count);
	cout << "POWER�� �������ּ���: ";
	cin >> pow_sel;

	print_product_for(case1, case1_count);
	cout << "CASE�� �������ּ���: ";
	cin >> case1_sel;

	print_product_for(os, os_count);
	cout << "OS�� �������ּ���: ";
	cin >> os_sel;
	temp[Num_product++] = new BOM(name, serial_num, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);
	temp1[Num_product1++] = BOM(name, serial_num, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);

	//(2)pop�� BOM �ִ°���(������ �ɺκ�) 
	/*pop[number++] = new POP(temp1[0]);*/
}

void Handler::Delete_BOM()
{
	cout << endl << "�̱���" << endl << endl;
}

void Handler::Show_BOM()
{
	for (int i = 0; i < Num_product; i++) {
		temp[i]->Print_produt();
		//pop[i]->showpop();
	}
	system("pause");
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
	system("pause");
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


void Handler::Add_ManufacturePlanning()				//(BOM���� �ø����ȣ �޾ƿ�)
{
	string sirial;
	int date;
	int amount;
	string model;

	//��ǰ �޾ƿͼ� ����
	cout << "===========================�����ȹ=============================" << endl;
	///BOM���� �޾ƿ� ��ǰ ����Ʈ ���

	cout << "�۾����ù�ȣ�� �Է��ϼ��� : "; cin >> sirial;
	//������ ��¥, ���� �Է�
	cout << "������ ��¥�� �Է��ϼ��� : "; cin >> date;
	cout << "������ ������ �Է��ϼ��� : "; cin >> amount;
	cout << "������ ���� �������ּ��� : "; cin >> model;

	stub[Num_Memproduct] = new Plan(sirial, date, amount);

	cout << endl;
	stub[Num_Memproduct]->Print_Plan();
	cout << endl;
	++Num_Memproduct;
	system("pause");

	//handler�� �Ѱ��� �����ȹ �迭 ����
}

void Handler::Show_ManufacturePlanning()              //��� ��ȹ ���
{
	vector<Plan*> plan;
	vector<Plan*>::reverse_iterator iter;

	for (int i = 0; i < Num_Memproduct; i++)
	{
		plan.push_back(stub[i]);
	}
	for (iter = plan.rbegin(); iter != plan.rend(); ++iter)
	{
		(*iter)->Print_Plan();
	}
	system("pause");
}

void Handler::Delete_ManufacturePlanning()
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
			system("pause");
			return;
		}
	}
	cout << "�ش� ��ȹ�� �����ϴ�." << endl;
	system("pause");
}

