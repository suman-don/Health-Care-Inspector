#include "cls.h"

void detail::hospital() {
    string district,location;
    cout << "\n\n\n                                                  BEFORE KNOWING NEARBY HOSPITAL" << endl;
    cout << "                                                         PLEASE ENTER YOUR" << endl;
    cout << "                                                             DISTRICT" << endl;
    cout << "\n\n\n\n\n\n                                             DISTRICT: ";
    cin >> district;
    system("cls");
     cout << "\n\n\n                                                  BEFORE KNOWING NEARBY HOSPITAL" << endl;
    cout << "                                                         PLEASE ENTER YOUR" << endl;
    cout << "                                                             LOCATION" << endl;
    cout << "\n\n\n\n\n\n                                             LOCATION: ";
    cin >> location;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                                   SEARCHING HOSPTTAL........";
            		Sleep(1000);
            		system("cls");

    cout << "\n\n\n\n                                            NEARBY HOSPITALS BASED ON YOUR LOCATION......." << endl;

    if (district == "bhojpur" && location=="taksar" || location=="parpani" || location=="manebhajyan" || location=="bhojpurbajar" || location=="deuralibhojpur" || location=="bhootdhaha") {
        cout << "\n\n\n                                            BHOJPUR: \n";
        cout << "                                           - BHOJPUR DISTRICT HOSPITAL" << endl;
        cout << "                                           - MAHATMA GANDHI MEMORIAL" << endl;
        
    } else if (district == "dhankuta") {
        cout << "\n\n\n                                            DHANKUTA: \n";
        cout << "                                           - PATAN HOSPITAL" << endl;
        cout << "                                           - ALKA HOSPITAL" << endl;
        cout << "                                           - KIST MEDICAL COLLEGE AND HOSPITAL" << endl;
    } else if (district == "ilam") {
        cout << "\n\n\n                                            ILAM: \n";
        cout << "                                           - BHAKTAPUR HOSPITAL" << endl;
        cout << "                                           - MADHYAPUR HOSPITAL" << endl;
        cout << "                                           - SIDDHI MEMORIAL HOSPITAL" << endl;
    } else if (district == "jhapa") {
        cout << "\n\n\n                                            JHAPA: \n";
        cout << "                                           - BHARATPUR HOSPITAL" << endl;
        cout << "                                           - NARAYANI SAMYDAYIK HOSPITAL" << endl;
        cout << "                                           - CHITWAN MEDICAL COLLEGE & TEACHING HOSPITAL" << endl;
    } else if (district == "khotang") {
        cout << "\n\n\n                                            KHOTANG: \n";
        cout << "                                           - CHARAK MEMORIAL HOSPITAL" << endl;
        cout << "                                           - WESTERN REGIONAL HOSPITAL" << endl;
        cout << "                                           - MEDIPLUS HOSPITAL & TRAUMA CENTER" << endl;
    } else if(district == "morang"){
    	
	} else if(district == "okhaldhunga"){
    	
	} else if(district == "panchthar"){
    	
	} else if(district == "sankhuwansabha"){
    	
	} else if(district == "solukhumbu"){
    	
	} else if(district == "sunsari"){
    	
	} else if(district == "taplejung"){
    	
	} else if(district == "terhathum"){
    	
	} else if(district == "udayapur"){
    	
	} else if(district == "bara"){
    	
	} else if(district == "dhanusha"){
    	
	} else if(district == "mahottari"){
    	
	} else if(district == "parsa"){
    	
	} else if(district == "rautahat"){
    	
	} else if(district == "saptari"){
    	
	} else if(district == "sarlahi"){
    	
	} else if(district == "siraha"){
    	
	} else if(district == "bhaktapur"){
    	
	} else if(district == "chitwan"){
    	
	} else if(district == "dhading"){
    	
	} else if(district == "dolakha"){
    	
	} else if(district == "kathmandu"){
    	
	} else if(district == "kavrepalanchok"){
    	
	} else if(district == "lalitpur"){
    	
	} else if(district == "makwanpur"){
    	
	} else if(district == "nuwakot"){
    	
	} else if(district == "ramechhap"){
    	
	} else if(district == "rasuwa"){
    	
	} else if(district == "sindhuli"){
    	
	} else if(district == "sindhupalchok"){
    	
	} else if(district == "baglung"){
    	
	} else if(district == "gorkha"){
    	
	} else if(district == "kaski"){
    	
	} else if(district == "lamjung"){
    	
	} else if(district == "manang"){
    	
	} else if(district == "mustang"){
    	
	} else if(district == "myagdi"){
    	
	} else if(district == "nawalpur"){
    	
	} else if(district == "parbat"){
    	
	} else if(district == "syangja"){
    	
	} else if(district == "tanahun"){
    	
	} else if(district == "arghakhanchi"){
    	
	} else if(district == "banke"){
    	
	} else if(district == "bardiya"){
    	
	} else if(district == "dang"){
    	
	} else if(district == "gulmi"){
    	
	} else if(district == "kapilvastu"){
    	
	} else if(district == "nawalparasi"){
    	
	} else if(district == "palpa"){
    	
	} else if(district == "pyuthan"){
    	
	} else if(district == "rolpa"){
    	
	} else if(district == "rukum"){
    	
	} else if(district == "rupandehi"){
    	
	} else if(district == "dailekh"){
    	
	} else if(district == "dolpa"){
    	
	} else if(district == "humla"){
    	
	} else if(district == "jajarkot"){
    	
	} else if(district == "jumla"){
    	
	} else if(district == "kalikot"){
    	
	} else if(district == "mugu"){
    	
	} else if(district == "rukum"){
    	
	} else if(district == "salyan"){
    	
	} else if(district == "surkhet"){
    	
	} else if(district == "achham"){
    	
	} else if(district == "baitedi"){
    	
	} else if(district == "bajhang"){
    	
	} else if(district == "bajura"){
    	
	} else if(district == "dadeldhura"){
    	
	} else if(district == "darchula"){
    	
	} else if(district == "doti"){
    	
	} else if(district == "kailali"){
    	
	} else if(district == "kanchapur"){
    	
	}
	
	 else {
        cout << "\n\nNo hospital information available for this location." << endl;
    }

    cout << "\n\n\n\n\n                    PLEASE CALL OR VISIT THEIR OFFICIAL WEBSITES FOR EXACT DETAILS AND EMERGENCY SUPPORT." << endl;
    getchar();
    getchar();
}

