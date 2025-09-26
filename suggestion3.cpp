#include "cls.h"

void detail::suggestion3() {
    if (!matched1 && !matched) {

        cout << "\n\n          SUGGESTION:" << endl << endl;
        cout << "          HELLO, " << name << " (AGE: " << age << ", " << gender << ")";
        cout << endl << "           YOU HAVE THE FOLLOWING SYMPTOMS: [" << symptom << "]" << endl;
        cout << endl << "          - DURATION: " << duration << " DAYS";
        cout << endl << "          - SEVERITY: " << severity << endl;

        cout << endl << endl << "          POSSIBLE CONDITIONS: ";
        cout << endl << "          - " << suggestionName << endl;

        if (suggestionName == "Asthma") {
            cout << endl << endl << "          SUGGESTIONS: " << endl;
            cout << "          - Always keep your rescue inhaler (like salbutamol) nearby." << endl;
            cout << "          - Keep your surroundings clean and smoke-free." << endl;
            cout << "          - Practice Breathing Exercises." << endl;
            cout << "          - Drinking warm water can help soothe airways." << endl;
            cout << "          - Avoid cold drinks that may trigger asthma." << endl;
        }

        getchar();
        getchar();
    }
}

