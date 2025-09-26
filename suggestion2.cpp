#include "cls.h"

void detail::suggestion2() {
    if (!matched && !matched2) {

        cout << "\n\n          SUGGESTION:" << endl << endl;
        cout << "          HELLO, " << name << " (AGE: " << age << ", " << gender << ")";
        cout << endl << "           YOU HAVE THE FOLLOWING SYMPTOMS: [" << symptom << "]" << endl;
        cout << endl << "          - DURATION: " << duration << " DAYS";
        cout << endl << "          - SEVERITY: " << severity << endl;

        cout << endl << endl << "          POSSIBLE CONDITIONS: ";
        cout << endl << "          - " << suggestionName << endl;

        if (suggestionName == "Dengue") {
            cout << endl << endl << "          SUGGESTIONS: " << endl;
            cout << "          - Drink lots of fluids (water, coconut water, ORS, juice) to avoid dehydration." << endl;
            cout << "          - Take enough rest. Avoid physical exertion." << endl;
            cout << "          - For fever and pain, take Paracetamol only." << endl;
            cout << "          - Keep track of fever, rashes, vomiting, and signs of bleeding (like gum or nose bleeds)." << endl;
            cout << "          - Papaya leaf juice is believed (not medically proven) to help increase platelet count." << endl;
        }

        getchar();
        getchar();
    }
}

