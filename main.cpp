#define _CRT_SECURE_NO_WARNINGS
#include "Subscriber.h"

using namespace std;

int main()
{
    cout  << "*******************************************WELCOME*******************************************" << endl << endl;
    int Number_Of_Subscribers;
    cout << "The number of subscribers: ";
    cin >> Number_Of_Subscribers;
    Agenda* A = new Agenda[Number_Of_Subscribers];
    char Name[25];
    char Address[105];
    char Phone_Number[15];
    int Option1 = 1;
    int Count_Number_Of_Subscribers = 0;
    do
    {
        cout << "1. Add subscriber" << endl;
        cout << "2. Search subscriber(s)" << endl;
        cout << "Select one of the option:" << endl;
        cin >> Option1;
        switch (Option1)
        {
            case 1:
                cout << "Introduce the information of Subscriber (Name, Adress, Phone Number):" << endl;
                cin >> Name;
                cin >> Address;
                cin >> Phone_Number;

                A[Count_Number_Of_Subscribers].Set_Name(Name);
                A[Count_Number_Of_Subscribers].Set_Address(Address);
                A[Count_Number_Of_Subscribers].Set_Phone_Number(Phone_Number);
                Count_Number_Of_Subscribers++;
                break;
            case 2:
                cout << "Search by Name" << endl;
                cin >> Name;
                for (int j = 0; j < Number_Of_Subscribers; j++)
                {
                    if (strcmp(A[j].Get_Name(), Name) == 0)
                    {
                        cout << A[j].Get_Name() << " ";
                        cout << A[j].Get_Address() << " ";
                        cout << A[j].Get_Phone_Number() << " ";
                        cout << endl;
                    }
                }
                break;
        }
    } while (Option1 != 0);
    delete[] A;
}


