#pragma once
#include "Agenda.h"
#include <iostream>
#include <string>

using namespace std;


class Subscriber {
public:
	Subscriber();
	Subscriber(char Name[], char Address[], char Phone_Number[]);
	friend class Agenda;

private:
	char Name[25];
	char Address[105];
	char Phone_Number[15];
};