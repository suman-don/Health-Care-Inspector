#include "cls.h"
 void detail::money3(pair<string,float> best){
 	if(best.first == "Acne" || best.first == "Eczema / Dermatitis" || best.first == "Psoriasis" || best.first == "Skin Cancer" 
   || best.first == "Fungal Infections" || best.first == "Cataract" || best.first == "Glaucoma" || best.first == "Macular Degeneration" 
   || best.first == "Hearing Loss / Ear Infections" || best.first == "Urinary Tract Infection (UTI)" || best.first == "Kidney Stones" 
   || best.first == "Chronice Kidney Disease (CKD)" || best.first == "Anemia" || best.first == "Leukemia / Lymphoma" || best.first == "Hemophilia" 
   || best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)" || best.first == "Breast Cancer" || best.first == "Colon Cancer" 
   || best.first == "Prostate Cancer") {

    cout << endl << endl << endl;
    cout << "\n\n                                             ===== " << best.first << " ======" << endl << endl;

    if(best.first == "Acne"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 3,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES / CREAMS:                       RS: 0 - RS: 1,500\n";
        cout << "                             - OPTIONAL TESTS (Skin tests):             RS: 0 - RS: 500\n";
    }
    else if(best.first == "Eczema / Dermatitis"){
        cout << "\n                               Estimated Cost:                    RS: 800 - RS: 4,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / OINTMENTS:                   RS: 200 - RS: 2,000\n";
        cout << "                             - TESTS (Allergy tests optional):          RS: 100 - RS: 500\n";
    }
    else if(best.first == "Psoriasis"){
        cout << "\n                               Estimated Cost:                    RS: 1,000 - RS: 6,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / OINTMENTS:                   RS: 500 - RS: 4,000\n";
        cout << "                             - TESTS (Skin biopsy optional):            RS: 0 - RS: 500\n";
    }
    else if(best.first == "Skin Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 70,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - SURGERY / MEDICINES:                      RS: 10,000 - RS: 50,000\n";
        cout << "                             - TESTS / BIOPSY:                           RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Fungal Infections"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 3,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES / ANTIFUNGALS:                 RS: 0 - RS: 1,500\n";
        cout << "                             - OPTIONAL TESTS:                           RS: 0 - RS: 500\n";
    }
    else if(best.first == "Cataract"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 50,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - SURGERY:                                  RS: 14,000 - RS: 48,500\n";
        cout << "                             - TESTS (Eye Tests):                        RS: 0 - RS: 2,000\n";
    }
    else if(best.first == "Glaucoma"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / SURGERY:                      RS: 4,000 - RS: 20,000\n";
        cout << "                             - TESTS (Eye pressure, OCT):               RS: 500 - RS: 3,500\n";
    }
    else if(best.first == "Macular Degeneration"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 50,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,500\n";
        cout << "                             - MEDICINES / LASER:                        RS: 7,000 - RS: 40,000\n";
        cout << "                             - TESTS (Eye imaging, OCT):                RS: 2,000 - RS: 7,500\n";
    }
    else if(best.first == "Hearing Loss / Ear Infections"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / EAR DROPS:                    RS: 0 - RS: 3,000\n";
        cout << "                             - TESTS (Audiometry optional):             RS: 0 - RS: 500\n";
    }
    else if(best.first == "Urinary Tract Infection (UTI)"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 3,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES / ANTIBIOTICS:                  RS: 0 - RS: 2,000\n";
        cout << "                             - TESTS (Urine analysis optional):         RS: 0 - RS: 500\n";
    }
    else if(best.first == "Kidney Stones"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES / PROCEDURES:                   RS: 2,500 - RS: 15,000\n";
        cout << "                             - TESTS (Ultrasound, Blood Tests):         RS: 2,000 - RS: 8,000\n";
    }
    else if(best.first == "Chronice Kidney Disease (CKD)"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 50,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 3,000\n";
        cout << "                             - MEDICINES / DIALYSIS:                     RS: 5,000 - RS: 40,000\n";
        cout << "                             - TESTS (Blood, Urine, Imaging):           RS: 4,000 - RS: 7,000\n";
    }
    else if(best.first == "Anemia"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES / SUPPLEMENTS:                  RS: 0 - RS: 3,000\n";
        cout << "                             - TESTS (CBC, Iron tests optional):        RS: 0 - RS: 1,500\n";
    }
    else if(best.first == "Leukemia / Lymphoma"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - MEDICINES / CHEMOTHERAPY:                 RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS (Blood, Biopsy, Imaging):          RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Hemophilia"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 50,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,500\n";
        cout << "                             - MEDICINES / FACTOR REPLACEMENT:          RS: 8,000 - RS: 45,000\n";
        cout << "                             - TESTS (Blood, Clotting Tests):           RS: 1,000 - RS: 2,000\n";
    }
    else if(best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 60,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 3,000\n";
        cout << "                             - MEDICINES / THERAPIES:                    RS: 7,000 - RS: 50,000\n";
        cout << "                             - TESTS (Blood, Imaging optional):         RS: 2,000 - RS: 7,000\n";
    }
    else if(best.first == "Breast Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - SURGERY / CHEMOTHERAPY:                  RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS (Mammography, Biopsy, Imaging):    RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Colon Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - SURGERY / CHEMOTHERAPY:                  RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS (Colonoscopy, Imaging):            RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Prostate Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - SURGERY / CHEMOTHERAPY:                  RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS (PSA, Imaging, Biopsy):            RS: 3,500 - RS: 15,000\n";
    }

    cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
    cout << "                             GOVERNMENT HOSPITALS ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN SOME CASES.\n";
    cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
}

 }
