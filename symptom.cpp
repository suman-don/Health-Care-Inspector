#include "cls.h"

void detail::healthinfo() {
    if (!matched1 && !matched2) {

        cout << endl << endl << endl << "            HELLO " << name << "," << endl;
        cout << endl << endl << "            BASE ON THE INFORMATION YOU PROVIDED, YOU MAY BE EXPERIENCING:" << endl << endl;

        // convert symptom to lowercase
        for (int i = 0; i < symptom.length(); i++) {
            symptom[i] = tolower(symptom[i]);
        }

        // Common Cold
        bool hasFever = symptom.find("sneezing") != string::npos;
        bool hasCough = symptom.find("cough") != string::npos;
        bool hasSoreThroat = symptom.find("sorethroat") != string::npos || symptom.find("sore throat") != string::npos;
        bool hasFatigue = symptom.find("fatigue") != string::npos;
        bool hasHeadache = symptom.find("headache") != string::npos;
        bool hasStomachPain = symptom.find("runnynose") != string::npos || symptom.find("stuffynose") != string::npos;

        if (hasFever && hasCough && hasSoreThroat && hasFatigue && hasHeadache && hasStomachPain) {
            suggestionName = "Common Cold";
            cout << "             - " << suggestionName;
            matched = true;
             
                 cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;
                 
            if(age <= 5) {
            if(severity == "minor") {
            if(duration <= 3){
            	cout<<"            Young child with a minor headache for a short duration." << endl;
                cout<<"            Rest, hydrate, and monitor symptoms."<<endl;
			}
                else
                cout<<"            ALERT: Young child has had a minor headache for 3 or more days. " << endl;
                cout<<"            Monitor closely and consult a doctor if it continues."<<endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Young child with a moderate headache for a short duration.  " << endl;
                cout << "            Keep them rested and hydrated."<<endl;
                cout << "            Consult a doctor if symptoms persist or worsen."<<endl;
             } else
                cout << "            ALERT: Young child has had a moderate headache for 3 or more days. " << endl;
                cout << "            Seek medical advice promptly."<<endl;
        }
        else if(severity == "serious") {
            if(duration <= 3){
                cout << "            Young child with a serious headache. " << endl;
                cout << "            Seek medical attention immediately!"<<endl;
            } else
                cout << "            EMERGENCY: Young child has had a serious headache for 3 or more days! Seek immediate medical help!" << endl;
        }
    }

    // Adults (5–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3){
                cout << "            Adult with a minor headache for a short duration." << endl;
                cout << "            Rest, hydrate, and monitor symptoms."<<endl;
            } else
                cout << "            Adult with a minor headache lasting 3 or more days. " << endl;
                cout << "            Monitor symptoms and consult a doctor if it continues." <<endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Adult with a moderate headache for a short duration. Rest, avoid stress, and consult a doctor if it persists." << endl;
            } else
                cout << "            Adult with a moderate headache lasting 3 or more days. Seek medical advice promptly." << endl;
        }
        else if(severity == "serious") {
            if(duration <= 3)
                cout << "            Adult with a serious headache for a short duration. Seek medical attention immediately!" << endl;
            else
                cout << "            EMERGENCY: Adult with a serious headache lasting 3 or more days! Go to the hospital immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with a minor headache for a short duration. Rest, hydrate, and monitor symptoms closely." << endl;
            else
                cout << "            Elderly person with a minor headache lasting 3 or more days. Monitor symptoms carefully and consult a doctor." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Elderly person with a moderate headache for a short duration. Rest and consult a doctor if it persists." << endl;
            else
                cout << "            Elderly person with a moderate headache lasting 3 or more days. Seek medical advice promptly." << endl;
        }
        else if(severity == "serious") {
            if(duration <= 3)
                cout << "            Elderly person with a serious headache. Seek medical attention immediately!" << endl;
            else
                cout << "            EMERGENCY: Elderly person with a serious headache lasting 3 or more days! Go to the hospital immediately." << endl;
        }
    }

    else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
//end			
        }
        
        // Influenza (Flu)
bool hasFever2 = symptom.find("fever") != string::npos;
bool hasChills = symptom.find("chills") != string::npos;
bool hasBodyAches = symptom.find("body aches") != string::npos || symptom.find("muscle aches") != string::npos;
bool hasFatigue2 = symptom.find("fatigue") != string::npos;
bool hasHeadache2 = symptom.find("headache") != string::npos;
bool hasDryCough = symptom.find("cough") != string::npos;

if (hasFever2 && hasChills && hasBodyAches && hasFatigue2 && hasHeadache2 && hasDryCough) {
    suggestionName = "Influenza (Flu)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3){
                cout<<"            Young child with minor flu symptoms for a short duration." << endl;
                cout<<"            Rest, hydrate, and monitor symptoms."<<endl;
            } else {
                cout<<"            ALERT: Young child has flu symptoms for 3 or more days." << endl;
                cout<<"            Consult a pediatrician promptly."<<endl;
            }
        } else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Young child with moderate flu symptoms. Keep them rested and hydrated." << endl;
                cout << "            Monitor and consult doctor if needed."<<endl;
            } else {
                cout << "            ALERT: Young child has moderate flu symptoms for 3 or more days." << endl;
                cout << "            Seek medical advice immediately."<<endl;
            }
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with serious flu symptoms! Seek immediate medical help!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3){
                cout << "            Adult with minor flu symptoms. Rest, hydrate, and monitor." << endl;
            } else {
                cout << "            Adult with minor flu symptoms for 3 or more days. Consult a doctor if it persists." << endl;
            }
        } else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Adult with moderate flu symptoms. Rest and consult doctor if needed." << endl;
            } else {
                cout << "            Adult with moderate flu symptoms lasting 3+ days. Seek medical advice promptly." << endl;
            }
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with serious flu symptoms! Go to the hospital immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with minor flu symptoms. Rest, hydrate, and monitor closely." << endl;
            else
                cout << "            Elderly person with minor flu symptoms lasting 3+ days. Consult a doctor." << endl;
        } else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Elderly person with moderate flu symptoms. Rest and consult doctor if needed." << endl;
            else
                cout << "            Elderly person with moderate flu symptoms lasting 3+ days. Seek medical advice promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with serious flu symptoms! Go to the hospital immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}


        // Heart Attack
        bool hasChestPain = symptom.find("chestpain") != string::npos;
        bool hasPain = symptom.find("armspain") != string::npos;
        bool hasShortnessofbreath = symptom.find("shortnessofbreath") != string::npos;
        bool hasSweating = symptom.find("sweating") != string::npos;
        bool hasNausea1 = symptom.find("nausea") != string::npos;
        bool hasDizziness = symptom.find("dizziness") != string::npos;

        if (hasChestPain && hasPain && hasShortnessofbreath && hasSweating && hasNausea1 && hasDizziness) {
            suggestionName = "Heart Attack";
            cout << "              - " << suggestionName;
            matched = true;
            
                  cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;
             if(age <= 5) {
                cout << "            EMERGENCY: Child showing symptoms of a heart attack. Seek immediate hospital care!" << endl;
             }else if(age > 5 && age <= 60) {
             if(severity == "minor") {
             if(duration <= 3)
                cout << "            Adult with mild chest discomfort for short duration. Still consult a doctor immediately to rule out heart issues." << endl;
             else
                cout << "            Adult with mild chest discomfort lasting 3+ days. URGENT: Visit a hospital for cardiac evaluation immediately." << endl;
             } else if(severity == "moderate") {
             if(duration <= 3)
                cout << "            Adult with moderate chest pain or breathing difficulty. HIGH RISK: Go to the emergency room immediately!" << endl;
             else
                cout << "            Adult with moderate symptoms lasting 3+ days. EMERGENCY: Seek immediate hospital care!" << endl;
             }
             else if(severity == "serious") {
             cout << "            EMERGENCY: Adult with severe chest pain, sweating, dizziness, or breathing problems. CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
             }
             } else if(age > 60) {
             if(severity == "minor") {
             if(duration <= 3)
                cout << "            Elderly person with mild chest discomfort for short duration. Still consult a doctor urgently." << endl;
              else
                cout << "            Elderly person with mild symptoms lasting 3+ days. EMERGENCY: Cardiac checkup required immediately!" << endl;
             }
             else if(severity == "moderate") {
             cout << "            Elderly person with moderate chest pain or shortness of breath. EMERGENCY: Go to hospital immediately!" << endl;
             }
             else if(severity == "serious") {
             cout << "            EMERGENCY: Elderly person with severe chest pain, sweating, or dizziness. CALL AMBULANCE IMMEDIATELY!" << endl;
             }
             }
             else {
             cout << "Invalid input. Please check age and severity." << endl;
             }
             //end     
             }
             
             
// COVID-19
bool hasFever3 = symptom.find("fever") != string::npos;
bool hasCough3 = symptom.find("cough") != string::npos;
bool hasFatigue3 = symptom.find("fatigue") != string::npos;
bool hasLossOfTasteSmell = symptom.find("loss of taste") != string::npos || symptom.find("loss of smell") != string::npos;
bool hasShortnessOfBreath = symptom.find("shortness of breath") != string::npos || symptom.find("breathing difficulty") != string::npos;
bool hasSoreThroat3 = symptom.find("sore throat") != string::npos;

if (hasFever3 && hasCough3 && hasFatigue3 && hasLossOfTasteSmell && hasShortnessOfBreath && hasSoreThroat3) {
    suggestionName = "COVID-19";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3){
                cout<<"            Young child with mild COVID-19 symptoms. Rest and hydrate." << endl;
            } else {
                cout<<"            ALERT: Young child has COVID-19 symptoms >3 days. Contact pediatrician." << endl;
            }
        } else if(severity == "moderate") {
            cout << "            Young child with moderate COVID-19 symptoms. Seek medical advice promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe COVID-19 symptoms! Hospital immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild COVID-19 symptoms. Rest, hydrate, isolate, and monitor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate COVID-19 symptoms. Consult doctor and consider testing." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe COVID-19 symptoms! Hospital immediately!" << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild COVID-19 symptoms. Rest, hydrate, monitor closely." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate COVID-19 symptoms. Contact doctor immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe COVID-19 symptoms! Hospital immediately!" << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Tuberculosis (TB)
bool hasCough4 = symptom.find("cough") != string::npos;
bool hasFever4 = symptom.find("fever") != string::npos;
bool hasNightSweats = symptom.find("night sweats") != string::npos;
bool hasWeightLoss = symptom.find("weight loss") != string::npos;
bool hasFatigue4 = symptom.find("fatigue") != string::npos;
bool hasChestPain4 = symptom.find("chest pain") != string::npos;

if (hasCough4 && hasFever4 && hasNightSweats && hasWeightLoss && hasFatigue4 && hasChestPain4) {
    suggestionName = "Tuberculosis (TB)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild TB symptoms. Seek pediatrician advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate TB symptoms. Medical consultation needed immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe TB symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild TB symptoms. Consult doctor for testing and treatment." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate TB symptoms. Immediate medical attention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe TB symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild TB symptoms. Consult doctor promptly." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate TB symptoms. Seek medical attention immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe TB symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Hepatitis (A, B, C)
bool hasFever6 = symptom.find("fever") != string::npos;
bool hasFatigue6 = symptom.find("fatigue") != string::npos;
bool hasJaundice = symptom.find("jaundice") != string::npos || symptom.find("yellow eyes") != string::npos;
bool hasNausea6 = symptom.find("nausea") != string::npos || symptom.find("vomiting") != string::npos;
bool hasAbdominalPain = symptom.find("abdominal pain") != string::npos || symptom.find("stomach pain") != string::npos;
bool hasLossOfAppetite = symptom.find("loss of appetite") != string::npos;

if (hasFever6 && hasFatigue6 && hasJaundice && hasNausea6 && hasAbdominalPain && hasLossOfAppetite) {
    suggestionName = "Hepatitis (A,B,C)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild hepatitis symptoms. Consult pediatrician." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate hepatitis symptoms. Immediate medical consultation needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe hepatitis symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild hepatitis symptoms. Consult doctor and monitor liver function." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate hepatitis symptoms. Medical attention required immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe hepatitis symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild hepatitis symptoms. Monitor liver health and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate hepatitis symptoms. Seek medical attention immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe hepatitis symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Measles, Mumps, Rubella (MMR)
bool hasFever5 = symptom.find("fever") != string::npos;
bool hasRash = symptom.find("rash") != string::npos;
bool hasCough5 = symptom.find("cough") != string::npos;
bool hasRunnyNose5 = symptom.find("runny nose") != string::npos || symptom.find("stuffy nose") != string::npos;
bool hasSwollenGlands = symptom.find("swollen glands") != string::npos || symptom.find("swelling in neck") != string::npos;
bool hasRedEyes = symptom.find("red eyes") != string::npos || symptom.find("conjunctivitis") != string::npos;

if (hasFever5 && hasRash && hasCough5 && hasRunnyNose5 && hasSwollenGlands && hasRedEyes) {
    suggestionName = "Measles/Mumps/Rubella";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild MMR symptoms. Rest and monitor." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate MMR symptoms. Consult pediatrician." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe MMR symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild MMR symptoms. Consult doctor if needed." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate MMR symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe MMR symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild MMR symptoms. Monitor and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate MMR symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe MMR symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Chicken Pox
bool hasFever7 = symptom.find("fever") != string::npos;
bool hasRash2 = symptom.find("rash") != string::npos;
bool hasItching = symptom.find("itching") != string::npos;
bool hasFatigue7 = symptom.find("fatigue") != string::npos;
bool hasLossOfAppetite7 = symptom.find("loss of appetite") != string::npos;
bool hasHeadache7 = symptom.find("headache") != string::npos;

if (hasFever7 && hasRash2 && hasItching && hasFatigue7 && hasLossOfAppetite7 && hasHeadache7) {
    suggestionName = "Chicken Pox";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild chicken pox symptoms. Rest and monitor." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate chicken pox symptoms. Consult pediatrician." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe chicken pox symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild chicken pox symptoms. Rest and hydrate." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate chicken pox symptoms. Seek medical attention." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe chicken pox symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild chicken pox symptoms. Rest and monitor closely." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate chicken pox symptoms. Consult doctor promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe chicken pox symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Malaria
bool hasFever8 = symptom.find("fever") != string::npos;
bool hasChills2 = symptom.find("chills") != string::npos;
bool hasSweating2 = symptom.find("sweating") != string::npos;
bool hasHeadache8 = symptom.find("headache") != string::npos;
bool hasNausea8 = symptom.find("nausea") != string::npos || symptom.find("vomiting") != string::npos;
bool hasFatigue8 = symptom.find("fatigue") != string::npos;

if (hasFever8 && hasChills2 && hasSweating2 && hasHeadache8 && hasNausea8 && hasFatigue8) {
    suggestionName = "Malaria";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild malaria symptoms. Rest and hydrate, consult pediatrician." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate malaria symptoms. Immediate medical attention needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe malaria symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild malaria symptoms. Rest, hydrate, and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate malaria symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe malaria symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild malaria symptoms. Rest, monitor, and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate malaria symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe malaria symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// HIV/AIDS
bool hasFever9 = symptom.find("fever") != string::npos;
bool hasFatigue9 = symptom.find("fatigue") != string::npos;
bool hasWeightLoss9 = symptom.find("weight loss") != string::npos;
bool hasSwollenGlands9 = symptom.find("swollen glands") != string::npos;
bool hasNightSweats9 = symptom.find("night sweats") != string::npos;
bool hasRecurringInfections9 = symptom.find("recurring infections") != string::npos || symptom.find("infections") != string::npos;

if (hasFever9 && hasFatigue9 && hasWeightLoss9 && hasSwollenGlands9 && hasNightSweats9 && hasRecurringInfections9) {
    suggestionName = "HIV/AIDS";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild HIV/AIDS symptoms. Consult pediatrician for testing and monitoring." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate HIV/AIDS symptoms. Immediate medical consultation needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe HIV/AIDS symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild HIV/AIDS symptoms. Consult doctor for testing and treatment." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate HIV/AIDS symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe HIV/AIDS symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild HIV/AIDS symptoms. Monitor and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate HIV/AIDS symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe HIV/AIDS symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Hypertension
bool hasHeadache10 = symptom.find("headache") != string::npos;
bool hasDizziness10 = symptom.find("dizziness") != string::npos;
bool hasBlurredVision10 = symptom.find("blurred vision") != string::npos;
bool hasNosebleeds10 = symptom.find("nosebleeds") != string::npos;
bool hasFatigue10 = symptom.find("fatigue") != string::npos;
bool hasChestPain10 = symptom.find("chest pain") != string::npos;

if (hasHeadache10 && hasDizziness10 && hasBlurredVision10 && hasNosebleeds10 && hasFatigue10 && hasChestPain10) {
    suggestionName = "Hypertension";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild hypertension symptoms. Monitor blood pressure and consult pediatrician." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate hypertension symptoms. Immediate medical consultation needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe hypertension symptoms! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild hypertension symptoms. Monitor BP, reduce salt intake, consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate hypertension symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe hypertension symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild hypertension symptoms. Monitor BP and consult doctor regularly." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate hypertension symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe hypertension symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Arrhythmias (Irregular Heartbeat)
bool hasPalpitations11 = symptom.find("palpitations") != string::npos;
bool hasDizziness11 = symptom.find("dizziness") != string::npos;
bool hasFainting11 = symptom.find("fainting") != string::npos || symptom.find("syncope") != string::npos;
bool hasShortnessBreath11 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasChestPain11 = symptom.find("chest pain") != string::npos;
bool hasFatigue11 = symptom.find("fatigue") != string::npos;

if (hasPalpitations11 && hasDizziness11 && hasFainting11 && hasShortnessBreath11 && hasChestPain11 && hasFatigue11) {
    suggestionName = "Arrhythmias (Irregular Heartbeat)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild arrhythmia symptoms. Monitor and consult pediatric cardiologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate arrhythmia symptoms. Immediate cardiology consultation needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe arrhythmia! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild arrhythmia symptoms. Monitor heart and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate arrhythmia symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe arrhythmia! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild arrhythmia symptoms. Monitor closely and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate arrhythmia symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe arrhythmia! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Heart Failure
bool hasShortnessBreath12 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasFatigue12 = symptom.find("fatigue") != string::npos;
bool hasSwellingLegs12 = symptom.find("swelling in legs") != string::npos || symptom.find("edema") != string::npos;
bool hasRapidHeartRate12 = symptom.find("rapid heartbeat") != string::npos || symptom.find("palpitations") != string::npos;
bool hasCough12 = symptom.find("cough") != string::npos;
bool hasWeightGain12 = symptom.find("weight gain") != string::npos;

if (hasShortnessBreath12 && hasFatigue12 && hasSwellingLegs12 && hasRapidHeartRate12 && hasCough12 && hasWeightGain12) {
    suggestionName = "Heart Failure";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild heart failure symptoms. Monitor closely and consult pediatric cardiologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate heart failure symptoms. Immediate medical attention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe heart failure! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild heart failure symptoms. Monitor and follow doctor's advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate heart failure symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe heart failure! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild heart failure symptoms. Monitor closely and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate heart failure symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe heart failure! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Stroke / CVA
bool hasSuddenWeakness13 = symptom.find("sudden weakness") != string::npos || symptom.find("numbness") != string::npos;
bool hasFaceDroop13 = symptom.find("face droop") != string::npos || symptom.find("facial droop") != string::npos;
bool hasArmLegWeakness13 = symptom.find("arm weakness") != string::npos || symptom.find("leg weakness") != string::npos;
bool hasSpeechDifficulty13 = symptom.find("speech difficulty") != string::npos || symptom.find("slurred speech") != string::npos;
bool hasVisionProblems13 = symptom.find("vision problems") != string::npos || symptom.find("blurred vision") != string::npos;
bool hasSevereHeadache13 = symptom.find("severe headache") != string::npos;

if (hasSuddenWeakness13 && hasFaceDroop13 && hasArmLegWeakness13 && hasSpeechDifficulty13 && hasVisionProblems13 && hasSevereHeadache13) {
    suggestionName = "Stroke / Cerebrovascular Accident (CVA)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild stroke symptoms. Immediate pediatric consultation recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate stroke symptoms. Seek emergency medical attention." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe stroke! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild stroke symptoms. Consult neurologist promptly." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate stroke symptoms. Seek emergency medical care immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe stroke! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild stroke symptoms. Monitor and consult neurologist immediately." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate stroke symptoms. Seek emergency medical care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe stroke! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Peripheral Artery Disease (PAD)
bool hasLegPain14 = symptom.find("leg pain") != string::npos || symptom.find("calf pain") != string::npos;
bool hasCramping14 = symptom.find("cramping") != string::npos;
bool hasNumbness14 = symptom.find("numbness") != string::npos || symptom.find("tingling") != string::npos;
bool hasColdFeet14 = symptom.find("cold feet") != string::npos;
bool hasSoresNotHealing14 = symptom.find("sores that do not heal") != string::npos;
bool hasWeakPulse14 = symptom.find("weak pulse") != string::npos;

if (hasLegPain14 && hasCramping14 && hasNumbness14 && hasColdFeet14 && hasSoresNotHealing14 && hasWeakPulse14) {
    suggestionName = "Peripheral Artery Disease (PAD)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild PAD symptoms. Consult pediatric cardiologist for evaluation." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate PAD symptoms. Immediate medical attention needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe PAD! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild PAD symptoms. Monitor symptoms and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate PAD symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe PAD! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild PAD symptoms. Monitor closely and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate PAD symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe PAD! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Asthma
bool hasWheezing15 = symptom.find("wheezing") != string::npos;
bool hasCough15 = symptom.find("cough") != string::npos;
bool hasShortnessBreath15 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasChestTightness15 = symptom.find("chest tightness") != string::npos;
bool hasFatigue15 = symptom.find("fatigue") != string::npos;
bool hasDifficultySleeping15 = symptom.find("difficulty sleeping") != string::npos;

if (hasWheezing15 && hasCough15 && hasShortnessBreath15 && hasChestTightness15 && hasFatigue15 && hasDifficultySleeping15) {
    suggestionName = "Asthma";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild asthma symptoms. Monitor and follow pediatrician advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate asthma symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe asthma attack! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild asthma symptoms. Use prescribed inhaler and monitor symptoms." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate asthma symptoms. Consult doctor promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe asthma attack! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild asthma symptoms. Monitor and follow doctor advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate asthma symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe asthma attack! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Chronic Obstructive Pulmonary Disease (COPD)
bool hasChronicCough16 = symptom.find("chronic cough") != string::npos;
bool hasSputum16 = symptom.find("sputum production") != string::npos;
bool hasShortnessBreath16 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasWheezing16 = symptom.find("wheezing") != string::npos;
bool hasFatigue16 = symptom.find("fatigue") != string::npos;
bool hasChestTightness16 = symptom.find("chest tightness") != string::npos;

if (hasChronicCough16 && hasSputum16 && hasShortnessBreath16 && hasWheezing16 && hasFatigue16 && hasChestTightness16) {
    suggestionName = "Chronic Obstructive Pulmonary Disease (COPD)";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild COPD symptoms. Monitor and consult pediatric pulmonologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate COPD symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe COPD! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild COPD symptoms. Follow prescribed inhalers and monitor breathing." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate COPD symptoms. Consult doctor promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe COPD attack! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild COPD symptoms. Monitor and follow doctor advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate COPD symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe COPD attack! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Pneumonia
bool hasFever17 = symptom.find("fever") != string::npos;
bool hasCough17 = symptom.find("cough") != string::npos;
bool hasChestPain17 = symptom.find("chest pain") != string::npos;
bool hasShortnessBreath17 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasFatigue17 = symptom.find("fatigue") != string::npos;
bool hasSputum17 = symptom.find("sputum") != string::npos;

if (hasFever17 && hasCough17 && hasChestPain17 && hasShortnessBreath17 && hasFatigue17 && hasSputum17) {
    suggestionName = "Pneumonia";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild pneumonia symptoms. Monitor and consult pediatrician." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate pneumonia symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe pneumonia! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild pneumonia symptoms. Monitor and follow prescribed treatment." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate pneumonia symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe pneumonia! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild pneumonia symptoms. Monitor and follow doctor advice." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate pneumonia symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe pneumonia! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}


// Bronchitis
bool hasCough18 = symptom.find("cough") != string::npos;
bool hasSputum18 = symptom.find("sputum") != string::npos;
bool hasFatigue18 = symptom.find("fatigue") != string::npos;
bool hasShortnessBreath18 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasChestDiscomfort18 = symptom.find("chest discomfort") != string::npos || symptom.find("chest tightness") != string::npos;
bool hasMildFever18 = symptom.find("mild fever") != string::npos || symptom.find("low grade fever") != string::npos;

if (hasCough18 && hasSputum18 && hasFatigue18 && hasShortnessBreath18 && hasChestDiscomfort18 && hasMildFever18) {
    suggestionName = "Bronchitis";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        if(severity == "minor") {
            cout<<"            Young child with mild bronchitis symptoms. Monitor and consult pediatrician." << endl;
        } else if(severity == "moderate") {
            cout << "            Young child with moderate bronchitis symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Young child with severe bronchitis! Hospitalize immediately!" << endl;
        }
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild bronchitis symptoms. Follow prescribed treatment and rest." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate bronchitis symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe bronchitis! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild bronchitis symptoms. Monitor and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate bronchitis symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe bronchitis! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Lung Cancer
bool hasPersistentCough19 = symptom.find("persistent cough") != string::npos;
bool hasCoughBlood19 = symptom.find("coughing blood") != string::npos || symptom.find("blood in cough") != string::npos;
bool hasChestPain19 = symptom.find("chest pain") != string::npos;
bool hasShortnessBreath19 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasWeightLoss19 = symptom.find("unexplained weight loss") != string::npos;
bool hasFatigue19 = symptom.find("fatigue") != string::npos;

if (hasPersistentCough19 && hasCoughBlood19 && hasChestPain19 && hasShortnessBreath19 && hasWeightLoss19 && hasFatigue19) {
    suggestionName = "Lung Cancer";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5) - rare, but include for completeness
    if(age <= 5) {
        cout<<"            Young child showing serious lung symptoms. Immediate pediatric oncology consultation required." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage lung cancer symptoms. Consult oncologist for evaluation and treatment plan." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate lung cancer symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe lung cancer symptoms! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage lung cancer symptoms. Consult oncologist promptly." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate lung cancer symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe lung cancer symptoms! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Diabetes
bool hasFrequentUrination20 = symptom.find("frequent urination") != string::npos;
bool hasExcessiveThirst20 = symptom.find("excessive thirst") != string::npos;
bool hasUnexplainedWeightLoss20 = symptom.find("unexplained weight loss") != string::npos;
bool hasFatigue20 = symptom.find("fatigue") != string::npos;
bool hasBlurredVision20 = symptom.find("blurred vision") != string::npos;
bool hasSlowHealingWounds20 = symptom.find("slow healing wounds") != string::npos;

if (hasFrequentUrination20 && hasExcessiveThirst20 && hasUnexplainedWeightLoss20 && hasFatigue20 && hasBlurredVision20 && hasSlowHealingWounds20) {
    suggestionName = "Diabetes";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        cout<<"            Young child with diabetes symptoms. Immediate pediatric endocrinologist consultation required." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild diabetes symptoms. Monitor blood sugar and follow doctor's guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate diabetes symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe diabetes complications! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild diabetes symptoms. Monitor and follow doctor's guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate diabetes symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe diabetes complications! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

  // Thyroid Disorders (Hyperthyroidism / Hypothyroidism)
bool hasWeightChange21 = symptom.find("weight change") != string::npos || symptom.find("weight loss") != string::npos || symptom.find("weight gain") != string::npos;
bool hasFatigue21 = symptom.find("fatigue") != string::npos;
bool hasMoodChanges21 = symptom.find("mood changes") != string::npos || symptom.find("anxiety") != string::npos || symptom.find("depression") != string::npos;
bool hasHeartRateChanges21 = symptom.find("rapid heartbeat") != string::npos || symptom.find("slow heartbeat") != string::npos;
bool hasTemperatureIntolerance21 = symptom.find("heat intolerance") != string::npos || symptom.find("cold intolerance") != string::npos;
bool hasSwellingNeck21 = symptom.find("neck swelling") != string::npos || symptom.find("goiter") != string::npos;

if (hasWeightChange21 && hasFatigue21 && hasMoodChanges21 && hasHeartRateChanges21 && hasTemperatureIntolerance21 && hasSwellingNeck21) {
    suggestionName = "Thyroid Disorders";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        cout<<"            Young child with thyroid disorder symptoms. Immediate pediatric endocrinologist consultation required." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild thyroid symptoms. Monitor and follow endocrinologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate thyroid symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe thyroid disorder complications! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild thyroid symptoms. Monitor and follow endocrinologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate thyroid symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe thyroid disorder complications! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Obesity
bool hasExcessBodyWeight22 = symptom.find("excess weight") != string::npos || symptom.find("overweight") != string::npos;
bool hasFatigue22 = symptom.find("fatigue") != string::npos;
bool hasShortnessBreath22 = symptom.find("shortness of breath") != string::npos || symptom.find("breathlessness") != string::npos;
bool hasJointPain22 = symptom.find("joint pain") != string::npos || symptom.find("knee pain") != string::npos;
bool hasSnoring22 = symptom.find("snoring") != string::npos;
bool hasHighBMI22 = symptom.find("high bmi") != string::npos;

if (hasExcessBodyWeight22 && hasFatigue22 && hasShortnessBreath22 && hasJointPain22 && hasSnoring22 && hasHighBMI22) {
    suggestionName = "Obesity";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        cout<<"            Young child with obesity symptoms. Consult pediatrician and nutritionist." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild obesity. Start diet and exercise program under guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate obesity. Seek medical consultation for weight management." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe obesity and health complications. Hospitalize if necessary." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild obesity. Consult doctor for diet and exercise plan." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate obesity. Seek medical guidance promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe obesity and complications. Hospitalize if necessary." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Metabolic Syndrome
bool hasAbdominalObesity23 = symptom.find("abdominal obesity") != string::npos || symptom.find("large waist") != string::npos;
bool hasHighBloodPressure23 = symptom.find("high blood pressure") != string::npos || symptom.find("hypertension") != string::npos;
bool hasHighBloodSugar23 = symptom.find("high blood sugar") != string::npos || symptom.find("hyperglycemia") != string::npos;
bool hasHighTriglycerides23 = symptom.find("high triglycerides") != string::npos;
bool hasLowHDL23 = symptom.find("low hdl") != string::npos || symptom.find("low good cholesterol") != string::npos;
bool hasFatigue23 = symptom.find("fatigue") != string::npos;

if (hasAbdominalObesity23 && hasHighBloodPressure23 && hasHighBloodSugar23 && hasHighTriglycerides23 && hasLowHDL23 && hasFatigue23) {
    suggestionName = "Metabolic Syndrome";
    cout << "             - " << suggestionName;
    matched = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        cout<<"            Young child with metabolic syndrome symptoms. Immediate pediatric consultation required." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild metabolic syndrome. Lifestyle modification and monitoring recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate metabolic syndrome. Seek medical attention and manage risk factors." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe metabolic syndrome and complications! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild metabolic syndrome. Lifestyle changes and monitoring recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate metabolic syndrome. Seek medical guidance promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe metabolic syndrome complications! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

           
        //NO Enter ZONE
        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched) {
            getchar();
        }

        system("cls");
    }
}

