#include "cls.h"

void detail::healthinfoThird() {
    if (!matched1 && !matched) {

        cout << endl << endl << endl << "            HELLO " << name << "," << endl;
        cout << endl << endl << "            BASED ON THE INFORMATION YOU PROVIDED, YOU MAY BE EXPERIENCING:" << endl << endl;

        // convert symptom to lowercase
        for (int i = 0; i < symptom.length(); i++) {
            symptom[i] = tolower(symptom[i]);
        }

        // Asthma
        bool hasFatigue2 = symptom.find("fatigue") != string::npos;
        bool hasWheezing = symptom.find("wheezing") != string::npos;
        bool hasCoughing = symptom.find("coughing") != string::npos || symptom.find("cough") != string::npos;
        bool hasChestTightness = symptom.find("chesttight") != string::npos;
        bool hasDifficultSleeping = symptom.find("difficultsleeping") != string::npos;
        bool hasShortness = symptom.find("shortnessofbreath") != string::npos || symptom.find("breathproblem") != string::npos;

        if (hasFatigue2 && hasWheezing && hasCoughing && hasChestTightness && hasDifficultSleeping && hasShortness) {
            suggestionName = "Asthma";
            cout << "             - " << suggestionName;
            matched2 = true;

            cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;
             // Children (<=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Child with mild asthma symptoms for short duration. Use prescribed inhaler if available, keep hydrated, and monitor breathing." << endl;
            else
                cout << "            ALERT: Child has had mild asthma symptoms for 3+ days. Visit a pediatrician for checkup." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate asthma symptoms. URGENT: Seek medical attention and ensure inhaler/medications are used properly." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child experiencing severe asthma attack. CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Adults (5–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with mild asthma symptoms for short duration. Use prescribed inhaler and avoid triggers." << endl;
            else
                cout << "            Adult with mild asthma symptoms lasting 3+ days. Consult a doctor for long-term management." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Adult with moderate asthma symptoms. URGENT: Use inhaler and consult doctor immediately." << endl;
            else
                cout << "            Adult with moderate symptoms for 3+ days. EMERGENCY: Go to hospital immediately!" << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult experiencing severe asthma attack. CALL AMBULANCE & GET EMERGENCY TREATMENT IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with mild asthma symptoms. Use inhaler, rest, and monitor breathing carefully." << endl;
            else
                cout << "            Elderly person with mild asthma symptoms for 3+ days. URGENT: Hospital checkup required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate asthma symptoms. HIGH RISK: Seek hospital care immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe asthma attack. CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
		}

        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched2) {
            getchar();
        }

        system("cls");
    }
}

