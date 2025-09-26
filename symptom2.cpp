#include "cls.h"

void detail::healthinfoSecond() {
    if (!matched && !matched2) {

        cout << endl << endl << endl << "            HELLO " << name << "," << endl;
        cout << endl << endl << "            BASED ON THE INFORMATION YOU PROVIDED, YOU MAY BE EXPERIENCING:" << endl << endl;

        // convert symptom to lowercase
        for (int i = 0; i < symptom.length(); i++) {
            symptom[i] = tolower(symptom[i]);
        }

        // Dengue
        bool hasFever1 = symptom.find("fever") != string::npos;
        bool hasSkinRash = symptom.find("skinrash") != string::npos || symptom.find("skin rash") != string::npos;
        bool hasPainBehindEyes = symptom.find("painbehindtheeyes") != string::npos || symptom.find("pain behind the eyes") != string::npos;
        bool hasNausea = symptom.find("nausea") != string::npos;
        bool hasHeadache1 = symptom.find("headache") != string::npos;
        bool hasMusclePain = symptom.find("musclepain") != string::npos || symptom.find("muscle pain") != string::npos;

        if (hasFever1 && hasSkinRash && hasPainBehindEyes && hasNausea && hasHeadache1 && hasMusclePain) {
            suggestionName = "Dengue";
            cout << "             - " << suggestionName;
            matched1 = true;

            cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;
             // Children (<=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Young child with minor dengue symptoms for short duration. Rest, hydrate, monitor closely, and consult a pediatrician." << endl;
            else
                cout << "            ALERT: Child has dengue symptoms for 3+ days. Immediate doctor consultation is necessary." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate dengue symptoms. HIGH RISK: Take to hospital immediately for evaluation." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with serious dengue symptoms. CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Adults (5–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with minor dengue symptoms for short duration. Rest, drink fluids, and monitor platelet count." << endl;
            else
                cout << "            Adult with dengue symptoms lasting 3+ days. URGENT: Seek medical checkup and blood tests." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Adult with moderate dengue symptoms. Hospital evaluation recommended immediately." << endl;
            else
                cout << "            Adult with moderate symptoms lasting 3+ days. EMERGENCY: Go to hospital immediately!" << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe dengue symptoms (bleeding, dehydration, or persistent vomiting). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with mild dengue symptoms. Rest, hydration, and close monitoring are essential." << endl;
            else
                cout << "            Elderly person with dengue symptoms lasting 3+ days. URGENT: Visit hospital for tests immediately." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate dengue symptoms. HIGH RISK: Hospital care required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe dengue symptoms. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
        }

        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched1) {
            getchar();
        }

        system("cls");
    }
}

