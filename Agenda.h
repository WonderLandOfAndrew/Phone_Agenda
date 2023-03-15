#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Agenda {
public:
	void Set_Name(char Title[]);
	char* Get_Name();

	void Set_Address(char* Address);
	char* Get_Address();

	void Set_Phone_Number(char* Phone_Number);
	char* Get_Phone_Number();


private:
	char Name[25];
	char Address[105];
	char Phone_Number[15];
};