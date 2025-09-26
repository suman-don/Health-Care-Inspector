#include "cls.h"

void detail::money3() {
    if (!matched1 && !matched) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Asthma") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 3,000 - RS: 8,000\n\n\n";
            cout << "                             - DOCTOR CONSULTATION:                            RS: 0 - RS: 1,000\n";
            cout << "                             - EMERGENCY TREATMENT (if attack is severe):      RS: 1,000 - RS: 3,500\n";
            cout << "                             - MEDICINES:                                      RS: 650 - RS: 2,000\n";
            cout << "                             - TESTS:                                          RS: 0 - RS: 2,800\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        }

        getchar();
        getchar();
    }
}

