#include<iostream>
using namespace std;

class product
{
private:
	char* Num_item; // ǰ��
	char* Sirial_num; //�ø����ȣ
public:
	product(const char* a, const char* b)
	{
		Num_item = new char[strlen(a) + 1];
		strcpy(Num_item, a);
		Sirial_num = new char[strlen(b) + 1];
		strcpy(Sirial_num, b);
	}

};

class CPU:public product
{
private:
	char* size;	// �԰�? / �̸�? / ����/�ϵ� ���� ȣȯ��? ������
	
public:
	CPU(const char* a, const char* b, const char* c) :product(a, b)
	{
		size = new char[strlen(c) + 1];
		strcpy(size, c);
	}
};

int main(void)
{
	product* material[100];				// ǰ�񰹼�;
	material[0] = new CPU("ǰ��", "�ø����ȣ", "�԰�");

	return 0;
}