#include "cls.h"

void detail::money() {
    if (!matched1 && !matched2) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Common Cold") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 500 - RS: 1,500\n\n\n";
            cout << "                             - DOCTOR CONSULTATION:                      RS: 0 - RS: 500\n";
            cout << "                             - MEDICINES:                                RS: 200 - RS: 600\n";
            cout << "                             - OPTIONAL TEST:                             RS: 0 - RS: 1,000\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        } 
        else if (suggestionName == "Heart Attack") {
            cout << "                             Heart Attack Treatment Cost Estimates (in NPR):" << endl;
            cout << "                          -----------------------------------------------------------------------------" << endl;
            cout << "                             Ambulance:                       NPR 25,000 - NPR 100,000" << endl;
            cout << "                             Emergency Room Visit:            NPR 60,000 - NPR 375,000" << endl;
            cout << "                             Diagnostic Tests:                NPR 120,000 - NPR 625,000" << endl;
            cout << "                             Medications:                     NPR 12,000 - NPR 125,000" << endl;
            cout << "                             Hospital Stay (ICU + ward):      NPR 375,000 - NPR 1,875,000+ (per week)" << endl;
            cout << "                             Procedures (Angioplasty, Stent): NPR 1,250,000 - NPR 5,000,000+" << endl;
            cout << "                             Surgery (Bypass):                NPR 2,500,000 - NPR 8,750,000+" << endl;
            cout << "                             Follow-up Visits:                NPR 12,500 - NPR 62,500 per visit" << endl;
            cout << "                             Cardiac Rehabilitation:          NPR 62,500 - NPR 375,000" << endl;
            cout << "                          ------------------------------------------------------------------------------" << endl << endl;
            cout << "                             Total Estimated Cost Range:      NPR 1,875,000 to NPR 12,500,000+" << endl;
        }

        getchar();
        getchar();
    }
}

