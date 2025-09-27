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
        } else if (suggestionName == "Typhoid Fever") {
           cout << endl << endl << "          SUGGESTIONS: " << endl;
           cout << "          - Take prescribed antibiotics exactly as directed by your doctor." << endl;
           cout << "          - Drink plenty of clean water to stay hydrated." << endl;
           cout << "          - Eat light, easily digestible foods (like soups, rice, and boiled vegetables)." << endl;
           cout << "          - Wash hands thoroughly before eating and after using the restroom." << endl;
           cout << "          - Avoid street food or uncooked foods that may carry bacteria." << endl;
}


        getchar();
        getchar();
    }
}

