#include "cls.h"

void detail::getdata() {
    cout << "\n\n" << setw(82) << "PERSONAL DETAIL AND ALSO HEALTH ISSUE" << endl;
    cout << "\n                              YOU MUST FILL ALL INFORMATION BECAUSE THIS IS OUR FORMALITY...." << endl;
    
    
//    	cin.ignore();	
	
    
    cout<< "\n                                  "<<"FULLNAME: ";
    getline(cin, name);

    cout << "\n" << setw(39) << "AGE: ";
    cin >> age;
    cin.ignore();

    cout << "\n" << setw(42) << "GENDER: ";
    cin >> gender;
    cin.ignore();
    
    cout<< "\n                                  "<<"ADDRESS: ";
    getline(cin,address);
    
    cout<<"\n                                  "<<"CONTACT NUMBER: ";
    getline(cin,contact);
    
    cout<<"\n                                  "<<"DATE: ";
    getline(cin,date);

    cout << "\n" << setw(44) << "SYMPTOMS: ";
    getline(cin, symptom);

    cout << "\n" << setw(56) << "DURATION OF SYMPTOMS: ";
    cin >> duration;
    cin.ignore();

    cout << "\n" << setw(68) << "SEVERITY(Minor,Moderate,Serious): ";
    getline(cin, severity);
    
    

    system("cls");

    // Capitalize first 10 letters of name
//    for (int i = 0; i < 100 && i < name.length(); i++) {
//        name[i] = toupper(name[i]);
//    }
}



void detail::detecting(){
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   DETECTING........";
    Sleep(1000);
    system("cls");
}
