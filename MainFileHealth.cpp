#include "cls.h"

int main() {
    int option;
    
    welcome w;
    w.welcomePage();
    
    detail d;
    while(1){
    	
	
    d.getdata();
    
   	d.detecting();

    d.healthinfo();
    d.healthinfoSecond();
    d.healthinfoThird();
    d.noFound();
    
    d.addRecord();
    
    do {
        system("cls");
        cout << endl << endl << endl << "                                                        OPTION...." << endl;
        cout << endl << setw(67) << "1.SUGGESTION" << endl;
        cout << endl << setw(72) << "2.NEARBY HOSPITAL" << endl;
        cout << endl << setw(75) << "3.MONEY REQUIREMENTS" << endl;
        cout << endl << setw(72) << "4.Patient History" <<endl;
        cout << endl << setw(61) << "5.Test" << endl;
        cout << endl << setw(61)<<"6.Exit"<<endl;
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
			        do{
			        	 system("cls");
			         cout << endl << endl << endl << "                                                        OPTION...." << endl;
                     cout << endl << setw(67) << "1.SHOW ALL HISTORY" << endl;
                     cout << endl << setw(65) << "2.SEARCH HISTORY" << endl;
                     cout << endl << setw(72)   << "3.DELETE PATIENT RECORD"<<endl;
                     cout<<endl   << setw(55)    <<"4.Exit"<<endl;
			         cout << endl << "                                               ENTER YOUR OPTION: ";
			         cin>>option;
			       switch(option){
			       	case 1:	system("cls");
					        cout<<"\n\n\n                                           ----- HOSPITAL MEDICAL RECORDS -----\n\n"<<endl;
			                d.showRecord();
			                getchar();
			                getchar();
				              break;
				              
				   	case 2:	system("cls");
					        cout<<"\n\n\n                                           ----- HOSPITAL MEDICAL RECORDS -----\n\n"<<endl;
			                d.searchRecord();
			                getchar();
				   
				   break;
				   case 3: system("cls");
				            cout<<"\n\n\n                                           ----- HOSPITAL MEDICAL RECORDS -----\n\n"<<endl;
				            d.deleteRecord();
				            break;
				   
				   default: cout<<"Invaild Choice"<<endl;
			       	  break;
			} }while(option != 4);
				  
				  break;	
				   
            case 5:  d.reset();
			     cin.ignore(); 
            	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   ANOTHER TEST........";
            	Sleep(1000);
            	
            	system("cls");
               break;
            case 6: 
            	 return 0;
            	 break;
            default:
                cout << "Invalid choice!!!" << endl;
                getchar();
                getchar();
                break;
        }
    } while(option != 5);
}

    return 0;
}
