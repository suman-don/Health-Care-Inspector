#include "cls.h"

int main() {
    int option;

    welcome w;
    w.welcomePage();

    detail d;
    d.getdata();
    
   	d.detecting();

    d.healthinfo();
    d.healthinfoSecond();
    d.healthinfoThird();

    while (1) {
        system("cls");
        cout << endl << endl << endl << "                                                        OPTION...." << endl;
        cout << endl << setw(67) << "1.SUGGESTION" << endl;
        cout << endl << setw(72) << "2.NEARBY HOSPITAL" << endl;
        cout << endl << setw(75) << "3.MONEY REQUIREMENTS" << endl;
        cout << endl << setw(61) << "4.Exit" << endl;
        cout << endl << "                                               ENTER YOUR OPTION: ";
        cin >> option;
        system("cls");

        switch (option) {
            case 1:
            	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   THINKING FOR SUGGESTION........";
            	Sleep(1000);
            	system("cls");
                d.suggestion();
                d.suggestion2();
                d.suggestion3();
                break;
            case 2:
            		
                d.hospital();
                break;
            case 3:
            		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   CACULATING COST........";
            		Sleep(1000);
            		system("cls");
                d.money();
                d.money2();
                d.money3();
                break;
            case 4:
            	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   STAY HEALTHY AND BE HAPPY........";
            	Sleep(1000);
            	system("cls");
                return 0;
            default:
                cout << "Invalid choice!!!" << endl;
                getchar();
                getchar();
        }
    }

    return 0;
}

