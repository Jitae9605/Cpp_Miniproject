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
	void make_product_plan(BOM 받아옴)
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
	string item_name;	//물품명
	string item_nubmer; //물품번호
	string item_serial; //시리얼 번호
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
	error관련;
};
int main()
{
	cout << "test중" << endl;
	cout << "다시 테스트중" << endl;
}