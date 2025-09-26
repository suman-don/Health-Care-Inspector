#include "cls.h"

void detail::money2() {
    if (!matched && !matched2) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Dengue") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 8,000 - RS: 15,000\n\n\n";
            cout << "                             - DIAGNOSTIC TESTS:                      RS: 2,000 - RS: 5,000\n";
            cout << "                             - HOSPITAL ADMISSION & BED CHARGES:       RS: 3,000 - RS: 12,000\n";
            cout << "                             - MEDICINES & FLUIDS:                     RS: 1,500 - RS: 5,000\n";
            cout << "                             - ADDITIONAL COSTS:                       RS: 3,000 - RS: 6,000\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        }

        getchar();
        getchar();
    }
}

