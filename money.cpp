#include "cls.h"

void detail::money1(pair<string,float> best){
	if(best.first == "Common Cold" || best.first == "Dengue" || best.first == "Influenza (flu)" || best.first == "COVID-19" || best.first == "Tuberculosis"
   || best.first == "Hepatitis" || best.first == "Measles" || best.first == "Chicken pox" || best.first == "Malaria" || best.first == "HIV/AIDS"
   || best.first == "Hypertension (High Blood Pressure)" || best.first == "Coronary Artery Disease" || best.first == "Arrhythmias (Irregular Heartbeat)" 
   || best.first == "Heart Failure" || best.first == "Stroke" || best.first == "Peripheral Artery Disease" || best.first == "Asthma" 
   || best.first == "Chronic Obstructive Pulmonary Disease" || best.first == "Pneumonia" || best.first == "Bronchitis") {

    cout << endl << endl << endl;
    cout << "\n\n                                             ===== " << best.first << " ======" << endl << endl;

    if(best.first == "Common Cold"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 1,500\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 0 - RS: 500\n";
        cout << "                             - MEDICINES:                                RS: 200 - RS: 600\n";
        cout << "                             - OPTIONAL TESTS:                           RS: 0 - RS: 1,000\n";
    }
    else if(best.first == "Dengue"){
        cout << "\n                               Estimated Cost:                    RS: 3,000 - RS: 10,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES:                                RS: 1,000 - RS: 5,000\n";
        cout << "                             - TESTS (CBC, Platelet Count, etc.):       RS: 1,500 - RS: 4,000\n";
    }
    else if(best.first == "Influenza (flu)"){
        cout << "\n                               Estimated Cost:                    RS: 1,000 - RS: 3,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 2,000\n";
        cout << "                             - OPTIONAL TESTS:                           RS: 0 - RS: 500\n";
    }
    else if(best.first == "COVID-19"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / SUPPLEMENTS:                 RS: 1,000 - RS: 10,000\n";
        cout << "                             - TESTS (PCR, X-RAY, CT-SCAN, etc.):       RS: 3,500 - RS: 13,500\n";
    }
    else if(best.first == "Tuberculosis"){
        cout << "\n                               Estimated Cost:                    RS: 2,000 - RS: 8,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (Anti-TB drugs):               RS: 500 - RS: 5,000\n";
        cout << "                             - TESTS (X-ray, Sputum):                   RS: 1,000 - RS: 2,500\n";
    }
    else if(best.first == "Hepatitis"){
        cout << "\n                               Estimated Cost:                    RS: 3,000 - RS: 15,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES:                                RS: 1,500 - RS: 10,000\n";
        cout << "                             - TESTS (LFT, Ultrasound):                 RS: 1,000 - RS: 3,500\n";
    }
    else if(best.first == "Measles"){
        cout << "\n                               Estimated Cost:                    RS: 800 - RS: 2,500\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 0 - RS: 500\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 1,500\n";
        cout << "                             - OPTIONAL TESTS:                           RS: 0 - RS: 500\n";
    }
    else if(best.first == "Chicken pox"){
        cout << "\n                               Estimated Cost:                    RS: 800 - RS: 3,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 0 - RS: 500\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 2,000\n";
        cout << "                             - OPTIONAL TESTS:                           RS: 0 - RS: 500\n";
    }
    else if(best.first == "Malaria"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 8,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 5,000\n";
        cout << "                             - TESTS (Blood Smear, Rapid Test):         RS: 500 - RS: 2,000\n";
    }
    else if(best.first == "HIV/AIDS"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 20,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (ART Therapy):                  RS: 4,000 - RS: 18,000\n";
        cout << "                             - TESTS (CD4 Count, Viral Load):           RS: 500 - RS: 2,000\n";
    }
    else if(best.first == "Hypertension (High Blood Pressure)"){
        cout << "\n                               Estimated Cost:                    RS: 1,000 - RS: 3,500\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 2,000\n";
        cout << "                             - OPTIONAL TESTS (BP Monitoring, ECG):     RS: 0 - RS: 500\n";
    }
    else if(best.first == "Coronary Artery Disease"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 50,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,000\n";
        cout << "                             - MEDICINES:                                RS: 3,000 - RS: 20,000\n";
        cout << "                             - TESTS (ECG, Angiography, Stress Test):   RS: 6,000 - RS: 28,000\n";
    }
    else if(best.first == "Arrhythmias (Irregular Heartbeat)"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,000\n";
        cout << "                             - MEDICINES:                                RS: 2,000 - RS: 10,000\n";
        cout << "                             - TESTS (ECG, Holter, Echo):               RS: 2,000 - RS: 13,000\n";
    }
    else if(best.first == "Heart Failure"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 60,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 3,000\n";
        cout << "                             - MEDICINES:                                RS: 5,000 - RS: 25,000\n";
        cout << "                             - TESTS (Echo, ECG, Blood Tests):          RS: 8,500 - RS: 32,000\n";
    }
    else if(best.first == "Stroke"){
        cout << "\n                               Estimated Cost:                    RS: 20,000 - RS: 70,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 2,000 - RS: 3,500\n";
        cout << "                             - MEDICINES:                                RS: 5,000 - RS: 25,000\n";
        cout << "                             - TESTS (CT/MRI, Blood Tests, ECG):        RS: 13,000 - RS: 41,500\n";
    }
    else if(best.first == "Peripheral Artery Disease"){
        cout << "\n                               Estimated Cost:                    RS: 8,000 - RS: 35,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,000\n";
        cout << "                             - MEDICINES:                                RS: 3,000 - RS: 15,000\n";
        cout << "                             - TESTS (Doppler, ECG, Blood Tests):       RS: 4,000 - RS: 18,000\n";
    }
    else if(best.first == "Asthma"){
        cout << "\n                               Estimated Cost:                    RS: 2,000 - RS: 10,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (Inhalers, Steroids):          RS: 1,000 - RS: 7,000\n";
        cout << "                             - TESTS (Spirometry):                       RS: 500 - RS: 1,500\n";
    }
    else if(best.first == "Chronic Obstructive Pulmonary Disease"){
        cout << "\n                               Estimated Cost:                    RS: 5,000 - RS: 20,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 2,500\n";
        cout << "                             - MEDICINES:                                RS: 2,500 - RS: 12,000\n";
        cout << "                             - TESTS (Spirometry, X-ray):               RS: 1,500 - RS: 5,500\n";
    }
    else if(best.first == "Pneumonia"){
        cout << "\n                               Estimated Cost:                    RS: 3,000 - RS: 15,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES (Antibiotics):                  RS: 1,500 - RS: 8,000\n";
        cout << "                             - TESTS (X-ray, Blood Tests):               RS: 1,000 - RS: 5,000\n";
    }
    else if(best.first == "Bronchitis"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 8,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (Antibiotics, Inhalers):       RS: 500 - RS: 5,000\n";
        cout << "                             - TESTS (X-ray, Spirometry optional):      RS: 500 - RS: 1,500\n";
    }

    cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
    cout << "                             GOVERNMENT HOSPITALS ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN SOME CASES.\n";
    cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
}

}
