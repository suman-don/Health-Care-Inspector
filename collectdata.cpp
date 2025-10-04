#include "cls.h"

void detail::collectdata() {
	cout << "\n\n"<< "                                           PERSONAL DETAIL AND ALSO HEALTH ISSUE" << endl;
    cout << "\n                              YOU MUST FILL ALL INFORMATION BECAUSE THIS IS OUR FORMALITY...." << endl;
    
    cout << "\n                                  FULLNAME: ";
    getline(cin, name);

    cout << "\n                                  AGE: ";
    cin >> age;
    cin.ignore(); // int ??? ignore

    cout << "\n                                  GENDER(F/M): ";
    cin >> gender;
    cin.ignore(); // char ??? ignore (next getline skip ??? ?????)

    cout << "\n                                  ADDRESS: ";
    getline(cin, address);

    cout << "\n                                  CONTACT NUMBER: ";
    getline(cin, contact);

    cout << "\n                                  DATE(YY/MM/DD): ";
    getline(cin, date);

    cout << "\n                                  SYMPTOMS: ";
    getline(cin, symptom);

    cout << "\n                                  DURATION OF SYMPTOMS: ";
    cin >> duration;
    cin.ignore(); // int ??? ignore

    cout << "\n                                  SEVERITY(Minor,Moderate,Serious): ";
    getline(cin, severity);

    // Count words from symptom
    istringstream iss(symptom);
    string word;
    while (iss >> word) {
        count++;
    }
}

void detail::detectingAnimation(){
		cout<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n\n\n\n\n                                               Saving Patient detail..............."<<endl;
            Sleep(1000);
            system("cls");
            cout<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n\n\n\n\n                                               Analyzing Symptoms..............."<<endl;
            Sleep(1000);
            system("cls");
            cout<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n\n\n\n\n                                               Checking duration..............."<<endl;
            Sleep(1000);
            system("cls");
            cout<<endl<<endl<<endl;
            cout<<"\n\n\n\n\n\n\n\n\n                                               Recognizing severity..............."<<endl;
            Sleep(1000);
            system("cls");
}

