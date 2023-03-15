#include "Subscriber.h"

Subscriber::Subscriber() {
    strcpy_s(Name, "");
    strcpy_s(Address, "");
    strcpy_s(Phone_Number, "");
}
Subscriber::Subscriber(char Name[], char Address[], char Phone_Number[])
{
	strcpy_s(this->Name, Name);
	strcpy_s(this->Address, Address);
    strcpy_s(this->Phone_Number, Phone_Number);
}
