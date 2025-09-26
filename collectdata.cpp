#include "cls.h"

void detail::getdata() {
    cout << "\n\n" << setw(82) << "PERSONAL DETAIL AND ALSO HEALTH ISSUE" << endl;
    cout << "\n                              YOU MUST FILL ALL INFORMATION BECAUSE THIS IS OUR FORMALITY...." << endl;

    cout << "\n" << setw(40) << "NAME: ";
    getline(cin, name);

    cout << "\n" << setw(39) << "AGE: ";
    cin >> age;
    cin.ignore();

    cout << "\n" << setw(42) << "GENDER: ";
    cin >> gender;
    cin.ignore();

    cout << "\n" << setw(44) << "SYMPTOMS: ";
    getline(cin, symptom);

    cout << "\n" << setw(56) << "DURATION OF SYMPTOMS: ";
    cin >> duration;
    cin.ignore();

    cout << "\n" << setw(68) << "SEVERITY(Minor,Moderate,Serious): ";
    getline(cin, severity);

    cout << "\n" << setw(65) << "MEDICAL HISTORY(illness Name): ";
    getline(cin, medicalHistory);

    system("cls");

    // Capitalize first 10 letters of name
    for (int i = 0; i < 10 && i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }
}

void detail::detecting(){
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   DETECTING........";
    Sleep(1000);
    system("cls");
}
