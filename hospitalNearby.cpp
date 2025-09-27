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

     	//Kathmandu District
  	if(district == "kathmandu" || district=="Kathmandu" || district == "ktm"){
  		//Boudha location
  		if(location == "boudha"){
  			 cout << "\n\n\n\n\n";
  			 cout << "                                             - Stupa Community Hospital" << endl;
             cout << "                                             - Boudha Stupa Polyclinic" << endl;
             cout << "                                             - Khangri International Hospital Pvt" << endl;
             cout << "                                             - Boudha Heart Clinic" << endl;
             cout << "                                             - Boudha Kunphen Tibetan Medical Center" << endl;
             cout << "                                             - Bir Hospital (Mahaboudha, near Boudha)" << endl;
		  } else if(location == "naxal"){
		  	cout << "\n\n\n\n\n";
		  	
		  	
		  } else if(location == "lazimpat"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Nepal Medical College & Teaching Hospital" << endl;
            cout << "                                             - We Care Health Center Pvt.Ltd" << endl;
            cout << "                                             - Vatsalya Natural IVF" << endl;
            cout << "                                             - NEO HEALTH CLINIC" << endl;
            cout << "                                             - Helping Hands Community Hospital" << endl;
		  } else if(location == "maharajgunj"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Tribhuvan University Teaching Hospital (TUTH)" << endl;
cout << "                                             - Metro Kathmandu Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - International Friendship Children's Hospital (IFCH)" << endl;
cout << "                                             - Meridian Multi Speciality Polyclinic" << endl;
cout << "                                             - Nishan Polyclinic Pvt. Ltd." << endl;
cout << "                                             - Nita Polyclinic & Diagnostic Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;

		  	
		  } else if(location == "baluwatar"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Healthy Choice Aesthetic Hospital" << endl;
cout << "                                             - Tesla Diagnostic Clinic" << endl;
cout << "                                             - Bumrungrad International Hospital (Referral Office)" << endl;
cout << "                                             - Neo Health Clinic" << endl;
cout << "                                             - Vet Clinic Baluwatar" << endl;

		  	
		  } else if(location == "hadigaun"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Nepal Bharat Maitri Hospital & Teaching College" << endl;
cout << "                                             - Urban Health Promotion Center" << endl;
cout << "                                             - Flowrence Medical" << endl;

		  	
		  } else if(location == "mitrapark"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Nepal Bharat Maitri Hospital" << endl;
cout << "                                             - Huawe International Hospital Pvt. Ltd" << endl;
cout << "                                             - Dirghayu Hospital (Dirghayu Guru Hospital)" << endl;
cout << "                                             - Merapick Medical Center Pvt. Ltd" << endl;
cout << "                                             - Glory Medical Centre Pvt. Ltd" << endl;

		  	
		  } else if(location == "jayabageshwori"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Jay Bageshwari Dots Clinic" << endl;
cout << "                                             - Bageshwari Hospital Pvt. Ltd." << endl;
cout << "                                             - Thali Samudayak Polyclinic" << endl;

		  	
		  } else if(location == "gaushala"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Nepal Lab House" << endl;
cout << "                                             - National Kidney Center (Gaushala Unit)" << endl;
cout << "                                             - Akhanda Medical Center" << endl;
cout << "                                             - Universal Diagnostic Center" << endl;
cout << "                                             - Life Care Prince Diagnostic Center" << endl;
cout << "                                             - Cosmos Medical Center Pvt. Ltd." << endl;
cout << "                                             - Tribeni Medical Centre" << endl;

		  	
		  } else if(location == "baneshwar"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Frontline Hospital" << endl;
cout << "                                             - Venus Hospital" << endl;
cout << "                                             - Bharosa Hospital" << endl;
cout << "                                             - CAMS Nepal (Center for American Medical Specialists)" << endl;
cout << "                                             - Kids Clinic Nepal" << endl;
cout << "                                             - Everest Hospital" << endl;
cout << "                                             - Nepal Health Clinic Pvt. Ltd. (Mid Baneshwor)" << endl;
cout << "                                             - Cutis Care – Skin Care and Hair Transplant Center" << endl;
cout << "                                             - Max Poly Clinic Pvt. Ltd." << endl;
cout << "                                             - Civil Service Hospital" << endl;

		  	
		  } else if(location == "babarmahal"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Ishan Hospital" << endl;
cout << "                                             - Annapurna Neurological Institute and Allied Sciences (ANIAS)" << endl;
cout << "                                             - Hope Fertility & Diagnostic Pvt. Ltd." << endl;
cout << "                                             - Center for Liver Disease" << endl;
cout << "                                             - Department of Hydrology and Meteorology" << endl;

		  	
		  } else if(location == "teku"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Tribhuvan University Teaching Hospital (TUTH)" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Mediciti Hospital" << endl;
		  	
		  } else if(location == "kalimati"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Nepal Mediciti Hospital" << endl;
		  	
		  } else if(location == "kalanki"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Nepal Medical College (NMC)" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
		  	
		  } else if(location == "dallu"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Tribhuvan University Teaching Hospital (TUTH)" << endl;
		  	
		  } else if(location == "balaju"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Tribhuvan University Teaching Hospital (TUTH)" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
		  	
		  } else if(location == "ksherapati"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Tribhuvan University Teaching Hospital (TUTH)" << endl;
cout << "                                             - Kanti Children's Hospital"<< endl;
cout << "                                             - Nepal Medical College (NMC)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
		  	
		  } else if(location == "nardevi"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "Damaitol"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "bhimsensthan"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "jyawahaal"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Nepal Mediciti Hospital" << endl;
		  	
		  } else if(location == "tevhaal"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Mediciti Hospital" << endl;
		  	
		  } else if(location == "omvahal"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "makhantole"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Alka Hospital" << endl;
		  	
		  } else if(location == "masangalli"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "lainchaur"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
		  	
		  } else if(location == "mahabauddha"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Alka Hospital" << endl;
		  	
		  } else if(location == "puranobuspark"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
		  	
		  } else if(location == "anamnagar"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
		  	
		  } else if(location == "gyaneshwor"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
		  	
		  } else if(location == "shantinagar"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
		  	
		  } else if(location == "koteshwor"){
		  	cout << "\n\n\n\n\n";
		  	cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Nepal Mediciti Hospital" << endl;
		  	
		  } else if(location == "taulunga"){
            cout << "\n\n\n\n\n";
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
          } else if(location == "chapali"){
            cout << "\n\n\n\n\n";
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
          } else if(location == "narayansthan"){
            cout << "\n\n\n\n\n";
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
          } else if(location == "pasikot"){
            cout << "\n\n\n\n\n";
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
          } else if(location == "bishnumatikholadulaltol"){
            cout << "\n\n\n\n\n";
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku Hospital)" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College (KMC)" << endl;
cout << "                                             - Om Hospital and Research Centre" << endl;
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
          } else if(location == "khadkabhadrakali"){
            cout << "\n\n\n\n\n";
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
         } else if(location == "hattigauda"){
           cout << "\n\n\n\n\n";
cout << "                                             - Teaching Hospital (Maharajgunj)" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
         } else if(location == "golfutar"){
           cout << "\n\n\n\n\n";
cout << "                                             - Budhanilkantha Municipality Hospital" << endl;
cout << "                                             - Samarth Neuro & Medical Centre" << endl;
cout << "                                             - Dhapasi Health Care Centre" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
        } else if(location == "mandikhatar"){
          cout << "\n\n\n\n\n";
cout << "                                             - Dhapasi Primary Health Care Center" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
        } else if(location == "akasedharakapan"){
          cout << "\n\n\n\n\n";
cout << "                                             - Kapan Medical Center" << endl;
cout << "                                             - Samajik Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
        } else if(location == "shangkaredandakapan"){
          cout << "\n\n\n\n\n";
cout << "                                             - Kapan Community Hospital" << endl;
cout << "                                             - Samajik Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
        } else if(location == "durgamandir"){
          cout << "\n\n\n\n\n";
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Vajra Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
        } else if(location == "chunikhel"){
          cout << "\n\n\n\n\n";
cout << "                                             - Swayambhu Primary Health Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
        } else if(location == "sangla"){
          cout << "\n\n\n\n\n";
cout << "                                             - Sangla Primary Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Gongabu Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "kavresthali"){
          cout << "\n\n\n\n\n";
cout << "                                             - Kavresthali Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Gongabu Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "jitpurphedi"){
          cout << "\n\n\n\n\n";
cout << "                                             - Jitpurphedi Health Post" << endl;
cout << "                                             - Budhanilkantha Hospital" << endl;
cout << "                                             - Samarth Neuro Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "manmaiju"){
          cout << "\n\n\n\n\n";
cout << "                                             - Manmaiju Health Center" << endl;
cout << "                                             - Gongabu Medical Center" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "goldhunga"){
          cout << "\n\n\n\n\n";
cout << "                                             - Goldhunga Primary Health Center" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
        } else if(location == "dharmasthali"){
          cout << "\n\n\n\n\n";
cout << "                                             - Dharmasthali Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "futung"){
          cout << "\n\n\n\n\n";
cout << "                                             - Futung Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "sundarijal"){
          cout << "\n\n\n\n\n";
cout << "                                             - Sundarijal Primary Health Center" << endl;
cout << "                                             - Budhanilkantha Hospital" << endl;
cout << "                                             - Samarth Neuro Hospital" << endl;
cout << "                                             - Jorpati Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
        } else if(location == "nayapati"){
          cout << "\n\n\n\n\n";
cout << "                                             - Nayapati Primary Health Center" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
        } else if(location == "baluwa"){
          cout << "\n\n\n\n\n";
cout << "                                             - Baluwa Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
        } else if(location == "gokarna"){
          cout << "\n\n\n\n\n";
cout << "                                             - Gokarna Primary Health Center" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
        } else if(location == "jorpati"){
          cout << "\n\n\n\n\n";
cout << "                                             - Jorpati Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
        } else if(location == "dahachowk"){
          cout << "\n\n\n\n\n";
cout << "                                             - Dahachowk Health Post" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
        } else if(location == "baadbhanjyang"){
          cout << "\n\n\n\n\n";
cout << "                                             - Baadbhanjyang Health Post" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
        } else if(location == "thankot"){
          cout << "\n\n\n\n\n";
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
cout << "                                             - Om Hospital" << endl;
        } else if(location == "mahadevsthan"){
          cout << "\n\n\n\n\n";
cout << "                                             - Mahadevsthan Health Post" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
        } else if(location == "matatirtha"){
          cout << "\n\n\n\n\n";
cout << "                                             - Matatirtha Health Post" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
        } else if(location == "machhegaun"){
          cout << "\n\n\n\n\n";
cout << "                                             - Machhegaun Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
        } else if(location == "satungal"){
          cout << "\n\n\n\n\n";
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
cout << "                                             - Om Hospital" << endl;
        } else if(location == "balambu"){
          cout << "\n\n\n\n\n";
cout << "                                             - Balambu Primary Health Center" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
        } else if(location == "puranonaikap"){
          cout << "\n\n\n\n\n";
cout << "                                             - Naikap Health Center" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
        } else if(location == "nayabhanjyang"){
          cout << "\n\n\n\n\n";
cout << "                                             - Nayabhanjyang Health Post" << endl;
cout << "                                             - Naikap Health Center" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
        } else if(location == "naikap"){
          cout << "\n\n\n\n\n";
cout << "                                             - Naikap Health Center" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
        } else if(location == "tinthana"){
          cout << "\n\n\n\n\n";
cout << "                                             - Tinthana Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "jhormahankal"){
         cout << "\n\n\n\n\n";
cout << "                                             - Jhormahakal Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "chandeswori"){
         cout << "\n\n\n\n\n";
cout << "                                             - Chandeshwori Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
       } else if(location == "saraswoti"){
         cout << "\n\n\n\n\n";
cout << "                                             - Saraswoti Health Center" << endl;
cout << "                                             - Gongabu Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
       } else if(location == "dhapasi"){
         cout << "\n\n\n\n\n";
cout << "                                             - Dhapasi Primary Health Center" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
        } else if(location == "gongabu"){
          cout << "\n\n\n\n\n";
cout << "                                             - Gongabu Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
       } else if(location == "gagalphedi"){
         cout << "\n\n\n\n\n";
cout << "                                             - Gagalphedi Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
       } else if(location == "aalapot"){
         cout << "\n\n\n\n\n";
cout << "                                             - Aalapot Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
       } else if(location == "bhadrabas"){
         cout << "\n\n\n\n\n";
cout << "                                             - Bhadrabas Health Post" << endl;
cout << "                                             - Gokarna Primary Health Center" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
       } else if(location == "danchhi"){
         cout << "\n\n\n\n\n";
cout << "                                             - Danchhi Health Post" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
       } else if(location == "gothatar"){
         cout << "\n\n\n\n\n";
cout << "                                             - Gothatar Health Center" << endl;
cout << "                                             - Jorpati Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
       } else if(location == "mulpani"){
         cout << "\n\n\n\n\n";
cout << "                                             - Mulpani Health Center" << endl;
cout << "                                             - Jorpati Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
       } else if(location == "bhimdhunga"){
         cout << "\n\n\n\n\n";
cout << "                                             - Bhimdhunga Health Post" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "ichangunarayan"){
         cout << "\n\n\n\n\n";
cout << "                                             - Ichangunarayan Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "ramkot"){
         cout << "\n\n\n\n\n";
cout << "                                             - Ramkot Health Post" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
       } else if(location == "syuchatar"){
         cout << "\n\n\n\n\n";
cout << "                                             - Syuchatar Health Post" << endl;
cout << "                                             - Tokha Hospital" << endl;
cout << "                                             - Sangla Medical Center" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
       } else if(location == "sitapaila"){
         cout << "\n\n\n\n\n";
cout << "                                             - Sitapaila Health Post" << endl;
cout << "                                             - Balambu Primary Health Center" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
       } else if(location == "layeku"){
         cout << "\n\n\n\n\n";
cout << "                                             - Layeku Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "baghbhairab"){
         cout << "\n\n\n\n\n";
cout << "                                             - Baghbhairab Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "khasibazar_samal_dhoka"){
         cout << "\n\n\n\n\n";
cout << "                                             - Samal Health Center" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Shahid Gangalal National Heart Centre" << endl;
cout << "                                             - Kanti Children's Hospital" << endl;
cout << "                                             - Nepal Police Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Bir Hospital" << endl;
       } else if(location == "ramkot"){
         cout << "\n\n\n\n\n";
cout << "                                             - Ramkot Health Post" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
       } else if(location == "ichangu"){
         cout << "\n\n\n\n\n";
cout << "                                             - Ichangu Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "chobhar"){
         cout << "\n\n\n\n\n";
cout << "                                             - Chobhar Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "panga"){
         cout << "\n\n\n\n\n";
cout << "                                             - Panga Health Center" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
       } else if(location == "samakoshi"){
         cout << "\n\n\n\n\n";
cout << "                                             - Samakoshi Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
      } else if(location == "chhetrapati"){
        cout << "\n\n\n\n\n";
cout << "                                             - Chhetrapati Health Center" << endl;
cout << "                                             - Bir Hospital" << endl;
cout << "                                             - Norvic International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
      } else if(location == "dapcha"){
        cout << "\n\n\n\n\n";
cout << "                                             - Dapcha Primary Health Center" << endl;
cout << "                                             - Panauti Hospital" << endl;
cout << "                                             - Dhulikhel Hospital" << endl;
cout << "                                             - Banepa Hospital" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
      } else if(location == "bajrayogini"){
        cout << "\n\n\n\n\n";
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Vajra Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
      } else if(location == "indrayani"){
        cout << "\n\n\n\n\n";
cout << "                                             - Indrayani Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
      } else if(location == "lapsiphedi"){
        cout << "\n\n\n\n\n";
cout << "                                             - Lapsiphedi Health Post" << endl;
cout << "                                             - Jorpati Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
      } else if(location == "nanglebhare"){
        cout << "\n\n\n\n\n";
cout << "                                             - Nanglebhare Health Post" << endl;
cout << "                                             - Gokarna Primary Health Center" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
cout << "                                             - Teaching Hospital" << endl;
      } else if(location == "pukhulachhi"){
        cout << "\n\n\n\n\n";
cout << "                                             - Pukhulachhi Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
      } else if(location == "suntol"){
        cout << "\n\n\n\n\n";
cout << "                                             - Suntol Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
     } else if(location == "karkigaun"){
       cout << "\n\n\n\n\n";
cout << "                                             - Karkigaun Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
     } else if(location == "bhulbu"){
       cout << "\n\n\n\n\n";
cout << "                                             - Bhulbu Health Post" << endl;
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
     } else if(location == "sankhu"){
       cout << "\n\n\n\n\n";
cout << "                                             - Sankhu Primary Health Care Center" << endl;
cout << "                                             - Bajrayogini Hospital" << endl;
cout << "                                             - Vajra Hospital" << endl;
cout << "                                             - Nepal Medical College" << endl;
cout << "                                             - Bhaktapur Hospital" << endl;
cout << "                                             - Madhyapur Hospital" << endl;
cout << "                                             - Grande International Hospital" << endl;
     } else if(location == "chalnakhel"){
       cout << "\n\n\n\n\n";
cout << "                                             - Chalnakhel Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
     } else if(location == "chhaimale"){
       cout << "\n\n\n\n\n";
cout << "                                             - Chhaimale Health Post" << endl;
cout << "                                             - Tinthana Health Post" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
     } else if(location == "sheshnarayan"){
       cout << "\n\n\n\n\n";
cout << "                                             - Sheshnarayan Health Post" << endl;
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
    } else if(location == "saukhel"){
      cout << "\n\n\n\n\n";
cout << "                                             - Saukhel Health Post" << endl;
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
    } else if(location == "talku"){
      cout << "\n\n\n\n\n";
cout << "                                             - Talku Health Post" << endl;
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
   } else if(location == "dudechaur"){
     cout << "\n\n\n\n\n";
cout << "                                             - Dudechaur Health Post" << endl;
cout << "                                             - Satungal Medical Center" << endl;
cout << "                                             - Thankot Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Kathmandu Medical College" << endl;
   } else if(location == "olddakshinkali"){
     cout << "\n\n\n\n\n";
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
   } else if(location == "pharping"){
     cout << "\n\n\n\n\n";
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
   } else if(location == "dakshinkali"){
     cout << "\n\n\n\n\n";
cout << "                                             - Dakshinkali Municipality Hospital" << endl;
cout << "                                             - Pharping Health Center" << endl;
cout << "                                             - Kirtipur Hospital" << endl;
cout << "                                             - Alka Hospital" << endl;
cout << "                                             - Patan Hospital" << endl;
cout << "                                             - Om Hospital" << endl;
cout << "                                             - Tilganga Institute of Ophthalmology" << endl;
  }






 
 


		  
		
		
		
		
		
		
		
		
		//Recommeded part for best suitable hospital
		if(suggestionName =="heart disease"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Cardiovascular & Heart Disease ---\n"<<endl;
			cout << "                                             - Shahid Gangalal National Heart Centre (SGNHC)" << endl;
            cout << "                                             - National Cardiac Centre (NCC)" << endl;
            cout << "                                             - Nepal Mediciti Hospital" << endl;
            cout << "                                             - Frontline Hospital" << endl;
            cout << "                                             - Overseas Friendship International Hospital (OFIH)" << endl;
		} else if(suggestionName =="common cold" || suggestionName =="Dengue"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Infectious Disease ---\n"<<endl;
			cout << "                                             - Sukraraj Tropical and Infectious Disease Hospital (Teku, Kathmandu)" << endl;
		} else if(suggestionName == "asthma"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Respiratory Disease ---\n"<<endl;
			cout << "                                             - Nepal Mediciti Hospital (Pulmonary & Sleep Medicine)" << endl;
            cout << "                                             - Frontline Hospital (Pulmonology Department)" << endl;
		} else if(suggestionName == "diabetes"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Metabolic / Endocrine Disease ---\n"<<endl;
			cout << "                                             - Kathmandu Diabetes & Thyroid Center Pvt Ltd (Jawalakhel, Kathmandu)" << endl;
            cout << "                                             - Frontline Hospital (Diabetic & Endocrinology Department)" << endl;
            cout << "                                             - Nepal Medical College Teaching Hospital (Endocrinology & Metabolic Disorders)" << endl;
            cout << "                                             - Metro Kathmandu Hospital (Diabetes, Thyroid & Hormone Care)" << endl;
            cout << "                                             - Norvic Hospital (Diabetes & Endocrinology Services)" << endl;
		} else if(suggestionName == "gastritis"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Gastorintestinal Disease ---\n"<<endl;
			cout << "                                             - Liver and Digestive Disease Center (LDDC), Baneshwor, Kathmandu" << endl;
            cout << "                                             - Department of Gastroenterology/Hepatology, Teaching Hospital (TUTH), Maharajgunj, Kathmandu" << endl;
            cout << "                                             - Bir Hospital, Gastroenterology / GI & Liver Unit, Kathmandu" << endl;
            cout << "                                             - Kathmandu Gastro and Liver Centre, Kathmandu" << endl;
            cout << "                                             - Metro Kathmandu Hospital, Gastroenterology & Hepatobiliary Surgery Services" << endl;

		} else if(suggestionName == "migraine"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Nervous System / Neurological Disease ---\n"<<endl;
			cout << "                                             - Department of Neurology, Teaching Hospital (TUTH), Maharajgunj, Kathmandu" << endl;
            cout << "                                             - Neuro Department, Nepal Mediciti Hospital, Kathmandu" << endl;
            cout << "                                             - Bir Hospital - Neurosurgery & Neurology Unit, Kathmandu" << endl;
            cout << "                                             - Himalayan Hospital - Neurology Department, Kathmandu" << endl;
            cout << "                                             - Upendra Devkota Memorial National Institute of Neurological and Allied Sciences (NINAS), Bansbari, Kathmandu" << endl;
		} else if(suggestionName == "gout"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Musculoskeletal Disease ---\n"<<endl;
			cout << "                                             - Nepal Orthopaedic Hospital, Jorpati, Kathmandu" << endl;
            cout << "                                             - Frontline Hospital - Orthopaedics Department, Kathmandu" << endl;
            cout << "                                             - Norvic Hospital - Orthopedic & Traumatology Centre, Kathmandu" << endl;
            cout << "                                             - Vayodha Hospitals - Orthopedics & Joint Replacement, Kathmandu" << endl;
            cout << "                                             - Advanced Poly Clinic (APC) - Orthopaedics and Trauma, Kathmandu" << endl;		
		} else if(suggestionName == "eczema"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Skin / Dermatological Disease ---\n"<<endl;
			cout << "                                             - Nepal Derma - Skin Care Hospital, Kathmandu" << endl;
            cout << "                                             - Frontline Hospital - Dermatology / Dermato-Venereology & Cosmetology Department, Kathmandu" << endl;
            cout << "                                             - Venus Hospital - Dermatology Department, Mid Baneshwor, Kathmandu" << endl;
            cout << "                                             - National Nepal Hospital - Department of Dermatology, Kathmandu" << endl;
            cout << "                                             - Aesthetic Aura Clinic - Skin & Hair Clinic, Sankhamul-Baneshwor, Kathmandu" << endl;
		} else if(suggestionName == "cataract"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Eye Disorder ---\n"<<endl;
			cout << "                                             - Tilganga Institute of Ophthalmology (Gaushala, Kathmandu)" << endl;
            cout << "                                             - Nepal Eye Hospital (Tripureshwor, Kathmandu)" << endl;
            cout << "                                             - ASG Eye Hospital (Madan Bhandari Road, Kathmandu)" << endl;
            cout << "                                             - Kathmandu Eye Center (Mahalaxmisthan Road, Lalitpur)" << endl;
            cout << "                                             - Vision Concern Eye Clinic (Makalbari, Lazimpat, Boudha)" << endl;
		} else if(suggestionName == "hearing loss"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Ear Disorder ---\n"<<endl;
			cout << "                                             - Kathmandu ENT Hospital (Adwait Marg, Old Buspark, Kathmandu)" << endl;
            cout << "                                             - Nepal ENT Center (Lazimpat, Kathmandu)" << endl;
            cout << "                                             - Ear Aid Nepal (Pokhara; specialized ear care & training center)" << endl;
            cout << "                                             - Nepal Mediciti Hospital (Lalitpur; ENT & Cochlear Implant services)" << endl;
            cout << "                                             - Frontline Hospital (Old Baneshwor, Kathmandu; ENT & Head & Neck Surgery)" << endl;
		} else if(suggestionName == "urinary tract infection"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Kidney / Unrinary Tract Disease ---\n"<<endl;
			cout << "                                             - Nepal Mediciti Hospital (Lalitpur, Kathmandu)" << endl;
            cout << "                                             - Venus Hospital (Baneshwor, Kathmandu)" << endl;
            cout << "                                             - HAMS Hospital (Dhumbarahi, Kathmandu)" << endl;
            cout << "                                             - Khadgi Institute of Endourology (Kupondole, Lalitpur)" << endl;
            cout << "                                             - Tribhuvan University Teaching Hospital (Maharajgunj, Kathmandu)" << endl;
            cout << "                                             - National Kidney Center (Balkumari, Lalitpur)" << endl;
            cout << "                                             - Grande International Hospital (Dhapasi, Kathmandu)" << endl;
            cout << "                                             - Bir Hospital (Mahabouddha, Kathmandu)" << endl;
            cout << "                                             - Blue Cross Hospital (Balkumari, Lalitpur)" << endl;
            cout << "                                             - Clinic One Kathmandu (Lalitpur)" << endl;
            cout << "                                             - Nepal Medical College (gorkarna)" <<endl;

		} else if(suggestionName == "anemia"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Blood / Immune System Disorders ---\n"<<endl;
			cout << "                                             - Blood Hospital (Jawalakhel, Lalitpur)" << endl;
            cout << "                                             - Frontline Hospital (Old Baneshwor, Kathmandu)" << endl;
            cout << "                                             - Nepal Mediciti Hospital (Bhaisepati, Lalitpur)" << endl;
            cout << "                                             - Grande International Hospital (Dhapasi, Kathmandu)" << endl;
            cout << "                                             - Chirayu National Hospital (Maharajgunj, Kathmandu)" << endl;
            cout << "                                             - OM Hospital & Research Center (Chabahil, Kathmandu)" << endl;
            cout << "                                             - Kathmandu Model Hospital (Kathmandu)" << endl;
            cout << "                                             - Alka Hospital (Jawalakhel, Lalitpur)" << endl;
            cout << "                                             - Blue Cross Hospital (Balkumari, Lalitpur)" << endl;
            cout << "                                             - Clinic One Kathmandu (Lalitpur)" << endl;
		} else if(suggestionName == "Lung Cancer"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Cancer / Oncology ---\n"<<endl;
			cout << "                                             - Kathmandu Cancer Center (Tathali, Bhaktapur)" << endl;
            cout << "                                             - Nepal Cancer Hospital & Research Center (Harisiddhi, Lalitpur)" << endl;
            cout << "                                             - Tribhuvan University Teaching Hospital (Maharajgunj, Kathmandu)" << endl;
            cout << "                                             - Bir Hospital (Mahabouddha, Kathmandu)" << endl;
            cout << "                                             - Manipal Teaching Hospital (Pokhara; Medical Oncology services)" << endl;
            cout << "                                             - Primera Hospital (Kathmandu; Daycare Chemotherapy services)" << endl;
		} else if(suggestionName == "depression"){
			cout<<"\n\n\n                                         --- Best Recommended Hospital for Mental Health / Psychiatric Disorders ---\n"<<endl;
			cout << "                                             - Mental Hospital (Lagankhel, Lalitpur)" << endl;
            cout << "                                             - Tribhuvan University Teaching Hospital (Maharajgunj, Kathmandu)" << endl;
            cout << "                                             - Nepal Mediciti Hospital (Bhaisepati, Lalitpur)" << endl;
            cout << "                                             - Beautiful Mind Institute (Chitwan; offers teleconsultations)" << endl;
            cout << "                                             - Rhythm Neuropsychiatry Hospital (Kathmandu)" << endl;
            cout << "                                             - Atman Hospital and Healing Center (Kathmandu)" << endl;
            cout << "                                             - Centre for Mental Health and Counselling – Nepal (Thapathali, Kathmandu)" << endl;
            cout << "                                             - Kenison Mental Health Clinic (Kathmandu)" << endl;
            cout << "                                             - CIWEC Hospital (Thamel, Kathmandu)" << endl;
            cout << "                                             - Relife Nepal Pvt. Ltd. (Kathmandu)" << endl;
		} 
  		
	  }
	
	 
    cout << "\n\n\n\n\n                    PLEASE CALL OR VISIT THEIR OFFICIAL WEBSITES FOR EXACT DETAILS AND EMERGENCY SUPPORT." << endl;
    getchar();
    getchar();
}

