#ifndef __HANDLER_H__
#define __HANDLER_H__

#include"Item.h"


class Handler
{
private:
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
