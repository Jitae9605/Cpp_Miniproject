#ifndef __ITEM_H__
#define __ITEM_H__

#include<iostream>
#include<cstring>
#include<vector>
#include<Windows.h>

#pragma warning(disable:4996)

using namespace std;

class Software
{
private:
	char* Software_Name;			// Software �̸�
	char* Software_Num;				// Software ǰ��
	char* Software_Searial;			// Software �ø����ȣ
public:
	Software() { };
	Software(const char* aSoftware_Name, const char* aSoftware_Num, const char* aSoftware_Searial);
	void print_software_Info() const;
};

class Power
{
private:
	char* Power_Name;				// Power �̸�
	char* Power_Num;				// Power ǰ��
	char* Power_Searial;			// Power �ø����ȣ
public:
	Power() { };
	Power(const char* aPower_Name, const char* aPower_Num, const char* aPower_Searial);
	void print_Power_Info() const;
};

class Case
{
private:
	char* Case_Name;				// Case �̸�
	char* Case_Num;				// Case ǰ��
	char* Case_Searial;			// Case �ø����ȣ
public:
	Case() { };
	Case(const char* aCase_Name, const char* aCase_Num, const char* aCase_Searial);
	void print_Case_Info() const;
};

class SSD
{
private:
	char* SSD_Name;				// SSD �̸�
	char* SSD_Num;				// SSD ǰ��
	char* SSD_Searial;			// SSD �ø����ȣ
public:
	SSD() { };
	SSD(const char* aSSD_Name, const char* aSSD_Num, const char* aSSD_Searial);

	void print_SSD_Info() const;

};

class HDD
{
private:
	char* HDD_Name;				// HDD �̸�
	char* HDD_Num;				// HDD ǰ��
	char* HDD_Searial;			// HDD �ø����ȣ
public:
	HDD() { };
	HDD(const char* aHDD_Name, const char* aHDD_Num, const char* aHDD_Searial);
	void print_HDD_Info() const;
};

class Memorry
{
private:
	char* Memorry_Name;				// Memorry �̸�
	char* Memorry_Num;				// Memorry ǰ��
	char* Memorry_Searial;			// Memorry �ø����ȣ
public:
	Memorry() { };
	Memorry(const char* aMemorry_Name, const char* aMemorry_Num, const char* aMemorry_Searial);
	void print_Memorry_Info() const;
};

class MB
{
private:
	char* MB_Name;				// MB �̸�
	char* MB_Num;				// MB ǰ��
	char* MB_Searial;			// MB �ø����ȣ
public:
	MB() { }
	MB(const char* aMB_Name, const char* aMB_Num, const char* aMB_Searial);
	void print_MB_Info() const;
};


class CPU
{
private:
	char* CPU_Name;				// CPU �̸�
	char* CPU_Num;				// CPU ǰ��
	char* CPU_Searial;			// CPU �ø����ȣ
public:
	CPU() { }
	CPU(const char* aCPU_Name, const char* aCPU_Num, const char* aCPU_Searial);
	void print_cpu_Info() const;
};

class product2 : public CPU, public MB, public Memorry, public HDD, public SSD, public Case, public Power, public Software
{
private:
	char* Product_Searial;
	CPU* cpu;
	MB* mb;
	Memorry* ram;
	HDD* hdd;
	SSD* ssd;
	Case* pc_case;
	Power* pow;
	Software* software_os;

public:
	product2(const char* aProduct_Searial, CPU& acpu, MB& amb, Memorry& aram, HDD& ahdd, SSD& assd, Power& apow, Case& apc_case, Software& asoftware_os);
	void Print_produt() const;
};





#endif 
