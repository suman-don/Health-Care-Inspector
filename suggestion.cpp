#include "cls.h"

void detail::suggestion() {
    if (!matched1 && !matched2) {

        cout << "\n\n          SUGGESTION:" << endl << endl;
        cout << "          HELLO, " << name << " (AGE: " << age << ", " << gender << ")";
        cout << endl << "           YOU HAVE THE FOLLOWING SYMPTOMS: [" << symptom << "]" << endl;
        cout << endl << "          - DURATION: " << duration << " DAYS";
        cout << endl << "          - SEVERITY: " << severity << endl;

        cout << endl << endl << "          POSSIBLE CONDITIONS: ";
        cout << endl << "          - " << suggestionName << endl;

        if (suggestionName == "Common Cold") {
            cout << endl << endl << "          SUGGESTIONS: " << endl;
            cout << "          - STAY HYDRATED AND REST WELL." << endl;
            cout << "          - MONITOR BODY TEMPERATURE REGULARLY." << endl;
            cout << "          - IF FEVER LASTS MORE THAN 3 DAY, CONSULT A DOCTOR." << endl;
            cout << "          - AVOID SMOKING WHILE RECOVERING." << endl;
            cout << "          - CONTINUE TAKING PRESCRIBED MEDICATIONS LIKE PARACETAMOL." << endl;
        } 
        else if (suggestionName == "Heart Attack") {
            cout << endl << endl << "          SUGGESTIONS: " << endl;
            cout << "          - MAINTAIN A HEALTHY DIET." << endl;
            cout << "          - EXERCISE REGULARLY." << endl;
            cout << "          - AVOID SMOKING." << endl;
            cout << "          - MANAGE STRESS, MAINTAIN BODY WEIGHT AND LIMIT ALCOHOL INTAKE." << endl;
            cout << "          - MONITOR DIABETES." << endl;
        }

        getchar();
        getchar();
    }
}

