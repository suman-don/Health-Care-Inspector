#include "cls.h"

int main() {
	Welcome w;
	w.welcomePage();
    detail d;
    while(1){
    d.collectdata();
    system("cls");
    d.detectingAnimation();
    
    pair<string,float> r1 = d.healthinfo1();
    pair<string,float> r2 = d.healthinfo2();
    pair<string,float> r3 = d.healthinfo3();

    // Compare all three percentages
    pair<string,float> best = r1;
    if (r2.second > best.second) best = r2;
    if (r3.second > best.second) best = r3;
    
	d.result1(best);   
	d.result2(best);
	d.result3(best); 

    d.addRecord(best);
    getchar();
    system("cls");
    int choice;
    do{
    	  
    cout<<"\n\n\n\n\n\n\n                                         ------------------------------------"<<endl;;	  
    cout<<"                                        |      ------- Option --------       |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           1.Suggestion             |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           2.NearBy Hospital        |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           3.Money Requirement      |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           4.Patient History        |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           5.Re-Test                |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           6.Exit                   |"<<endl;
    cout<<"                                         ------------------------------------"<<endl<<endl;
    cout<<"                                           Enter your choice: ";
    cin>>choice;
    
    switch(choice){
    	case 1: system("cls");
    	        d.suggestion1(best);
    	        d.suggestion2(best);
    	        d.suggestion3(best);
    	        cout<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\n                                                  ";
                system("pause");
    	        system("cls");
    	      break;
    	case 2: system("cls");
    	        d.hospital1(best);
    	        
    		   
    		   break;
    	case 3: system("cls");
    	        d.money1(best);
    	        d.money2(best);
    	        d.money3(best);
    	        cout<<endl<<endl<<endl<<"\n\n\n\n                                                ";
                system("pause");
    	        system("cls");
    		
    		   break;
    	case 4: system("cls");
    	        do{
    	        	cout<<"\n\n\n\n\n\n\n                                         ------------------------------------"<<endl;;	  
    cout<<"                                        |  ------- Patient Record --------   |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           1.Show Record            |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           2.Search Record          |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           3.Delete Record          |"<<endl;
    cout<<"                                        |------------------------------------|"<<endl;
    cout<<"                                        |           4.Exit                   |"<<endl;
    cout<<"                                         ------------------------------------"<<endl<<endl;
    cout<<"                                           Enter your choice: ";
    	        	cin>>choice;
    	        	switch(choice){
    	        		case 1: system("cls");
    	        			  d.showRecord();
    	        			  getchar();
    	        			  getchar();
    	        			  system("cls");
    	        			 break;
    	        		case 2:
    	        			system("cls");
    	        			 d.searchRecord();
    	        			 getchar();
    	        			  system("cls");
    	        			 break;
    	        		case 3:
    	        			 system("cls");
    	        			 d.deleteRecord();
    	        			 getchar();
    	        			  system("cls");
    	        			 break;
    	        		case 4:
    	        			  system("cls");
    	        			 break;
    	        		default:
    	        			   cout<<"Invaild Choice"<<endl;
    	        			   break;
					}
    	        	
				} while(choice != 4);
    	       break;
    	       case 5: system("cls");
    	               cin.ignore();
    	       	 
    	       	 break;
    	       	 case 6:
    	       	 	  return 0;
    	       	 	  break;
    	default: 
    	        cout<<"Invaild Choice!!!"<<endl;
    	        break;
	}
	
	} while(choice != 5); 
  
}


    return 0;
}

