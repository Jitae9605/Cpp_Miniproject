#include <iostream>
using namespace std;

class MES
{
private:
	int recent_work;
public:

	void whereismysit()
	{

	}
	void checkError()
	{

	}
	void make_product_plan(BOM �޾ƿ�)
	{

	}
};

class BOM
{
private:
	Product product;
public:
	void makeBOM()
	{

	}
};

class Product
{
private:
	string item_name;	//��ǰ��
	string item_nubmer; //��ǰ��ȣ
	string item_serial; //�ø��� ��ȣ
public:
	void makeProduct()
	{

	}
};

class POP
{
private:
	string worker;
	Product product;
	Product error_product;
public:

	void CheckError()
	{

	}
	void make_product1()
	{
		void CheckError();

	}
	void make_product2()
	{
		void CheckError();

	}
	void make_product3()
	{
		void CheckError();

	}
}

class handler
{
private:
	Product* CPU[100];
	Product* MB[100];
	Product* Memory[100];
	Product* Graphic[100];
	Product* Ssd[100];
	Product* Case[100];
	Product* Power[100];
	BOM* Power[100];
	MES Now_work[100];
	error����;
};
int main()
{
	cout << "test��" << endl;
	cout << "�ٽ� �׽�Ʈ��" << endl;
}