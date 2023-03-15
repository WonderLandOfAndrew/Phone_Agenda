#include "Agenda.h"

using namespace std;

char* Agenda::Get_Name() {
    return (this->Name);
}
void Agenda::Set_Name(char Title[]) {
    strcpy_s(this->Name, Title);
}

char* Agenda::Get_Address() {
    return (this->Address);
}
void Agenda::Set_Address(char* Address) {
    strcpy_s(this->Address, Address);
}

char* Agenda::Get_Phone_Number() {
    return (this->Phone_Number);
}
void Agenda::Set_Phone_Number(char* Phone_Number) {
    strcpy_s(this->Phone_Number, Phone_Number);
}