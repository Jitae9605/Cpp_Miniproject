#include"Item.h"

class MES_ERR
{
private:
	string Err_sirial;

public:
	MES_ERR(string err_sirial) 
	{
		Err_sirial = err_sirial;
	}
	//handler�� �Ѱ��� �����迭 �����ϴ� �Լ�
	string getMemSrial() { return Err_sirial; }

	virtual void Print_Error() const
	{
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "��ǰ " << "����" << "��ǰ" << "��" << "������" << "�Ǿ���մϴ�." << endl;
	}
};

class MES
{
private:
	int Num_err = 0;
	MES_ERR* stub[100];

public:
	void make_product_plan()				//(Pop���� �ø����ȣ �޾ƿ�)
	{
		string sirial;


		//��ǰ �޾ƿͼ� ����
		cout << "===========================���� ����Ʈ=============================" << endl;
		///POP���� �޾ƿ� ���� ����Ʈ ���

		cout << "����üũ�� ��ǰ Srial��ȣ�� �Է��ϼ��� : "; cin >> sirial;

		stub[Num_err++] = new MES_ERR(sirial);

		//handler�� �Ѱ��� ��������Ʈ �迭 ����
	}

	void ShowAll_Err(void) const                  //��� ��������Ʈ ���
	{
		cout << "-------------------------" << endl;
		for (int i = 0; i < Num_err; i++)
			stub[i]->Print_Error();
		cout << "-------------------------" << endl;
	}

	///////////////////////////////////////////////////////////bom�ڵ�, �����ȹ�ڵ�, ���� ����
	~MES()                                   //�Ҹ���
	{
		for (int i = 0; i < Num_err; i++)
			delete stub[i];
	}
};



