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

   // Typhoid Fever
bool hasFever = symptom.find("fever") != string::npos || symptom.find("highfever") != string::npos;
bool hasAbdominalPain = symptom.find("abdominalpain") != string::npos || symptom.find("stomachpain") != string::npos;
bool hasHeadache = symptom.find("headache") != string::npos;
bool hasLossOfAppetite = symptom.find("lossappetite") != string::npos || symptom.find("noappetite") != string::npos;
bool hasDiarrheaOrConstipation = symptom.find("diarrhea") != string::npos || symptom.find("constipation") != string::npos;
bool hasRash = symptom.find("rash") != string::npos || symptom.find("rosespots") != string::npos;

if (hasFever && hasAbdominalPain && hasHeadache && hasLossOfAppetite && hasDiarrheaOrConstipation && hasRash) {
    suggestionName = "Typhoid Fever";
    cout << "             - " << suggestionName;
    matched2 = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (<=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Child with mild typhoid symptoms for short duration. Keep hydrated, monitor fever, light diet." << endl;
            else
                cout << "            ALERT: Child has had mild typhoid symptoms for 3+ days. Visit pediatrician for antibiotics." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate typhoid symptoms. URGENT: Go to hospital and start prescribed antibiotics." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child experiencing severe typhoid complications. Hospitalization required immediately!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with mild typhoid symptoms for short duration. Stay hydrated, rest, monitor fever." << endl;
            else
                cout << "            Adult with mild typhoid symptoms for 3+ days. Consult doctor for antibiotics." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Adult with moderate typhoid symptoms. URGENT: Seek hospital care and start treatment." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe typhoid complications. Hospitalization required immediately!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with mild typhoid symptoms. Stay hydrated, rest, monitor fever." << endl;
            else
                cout << "            Elderly person with mild typhoid symptoms for 3+ days. Hospital visit recommended." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate typhoid symptoms. HIGH RISK: Immediate medical attention required." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe typhoid complications. Hospitalization required immediately!" << endl;
        }
    }

    else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Urinary Tract Infection (UTI)
bool hasBurningUrination49 = symptom.find("burning urination") != string::npos || symptom.find("painful urination") != string::npos;
bool hasFrequentUrination49 = symptom.find("frequent urination") != string::npos || symptom.find("urgent urination") != string::npos;
bool hasLowerAbdominalPain49 = symptom.find("lower abdominal pain") != string::npos || symptom.find("pelvic pain") != string::npos;
bool hasCloudyUrine49 = symptom.find("cloudy urine") != string::npos || symptom.find("foul-smelling urine") != string::npos;
bool hasBloodInUrine49 = symptom.find("blood in urine") != string::npos || symptom.find("hematuria") != string::npos;
bool hasFeverChills49 = symptom.find("fever") != string::npos || symptom.find("chills") != string::npos;

if (hasBurningUrination49 && hasFrequentUrination49 && hasLowerAbdominalPain49 && hasCloudyUrine49 && hasBloodInUrine49 && hasFeverChills49) {
    suggestionName = "Urinary Tract Infection (UTI)";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric UTI suspected. Immediate consultation with pediatric nephrologist or pediatrician required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild UTI. Drink plenty of water and use prescribed antibiotics." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate UTI. Consult doctor for antibiotics and further investigation." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe UTI or kidney involvement. Hospitalization required immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild UTI. Monitor and take prescribed antibiotics." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate UTI. Doctor consultation required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe UTI. Immediate hospital care needed." << endl;
        }
    }
}

// Kidney Stones
bool hasSevereFlankPain50 = symptom.find("severe flank pain") != string::npos || symptom.find("back pain") != string::npos;
bool hasPainDuringUrination50 = symptom.find("painful urination") != string::npos || symptom.find("burning urination") != string::npos;
bool hasBloodInUrine50 = symptom.find("blood in urine") != string::npos || symptom.find("hematuria") != string::npos;
bool hasFrequentUrination50 = symptom.find("frequent urination") != string::npos || symptom.find("urgent urination") != string::npos;
bool hasNauseaVomiting50 = symptom.find("nausea") != string::npos || symptom.find("vomiting") != string::npos;
bool hasAbdominalDiscomfort50 = symptom.find("abdominal discomfort") != string::npos || symptom.find("lower abdominal pain") != string::npos;

if (hasSevereFlankPain50 && hasPainDuringUrination50 && hasBloodInUrine50 && hasFrequentUrination50 && hasNauseaVomiting50 && hasAbdominalDiscomfort50) {
    suggestionName = "Kidney Stones";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric kidney stones suspected. Immediate consultation with pediatric nephrologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with small kidney stones. Drink plenty of water and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate kidney stones. Medical treatment or lithotripsy may be required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with large or obstructive kidney stones. Immediate hospitalization required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with small kidney stones. Monitor and consult nephrologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate kidney stones. Medical or surgical intervention may be necessary." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with large or obstructive kidney stones. Immediate hospital care required." << endl;
        }
    }
}

// Chronic Kidney Disease (CKD)
bool hasFatigue51 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasSwelling51 = symptom.find("swelling") != string::npos || symptom.find("edema") != string::npos;
bool hasChangesUrination51 = symptom.find("changes in urination") != string::npos || symptom.find("frequent urination") != string::npos;
bool hasNauseaVomiting51 = symptom.find("nausea") != string::npos || symptom.find("vomiting") != string::npos;
bool hasLossAppetite51 = symptom.find("loss of appetite") != string::npos || symptom.find("poor appetite") != string::npos;
bool hasHighBloodPressure51 = symptom.find("high blood pressure") != string::npos || symptom.find("hypertension") != string::npos;

if (hasFatigue51 && hasSwelling51 && hasChangesUrination51 && hasNauseaVomiting51 && hasLossAppetite51 && hasHighBloodPressure51) {
    suggestionName = "Chronic Kidney Disease (CKD)";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric CKD suspected. Immediate consultation with pediatric nephrologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage CKD. Monitor kidney function and follow nephrologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate CKD. Regular nephrologist follow-up and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced CKD. Hospitalization or dialysis may be required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage CKD. Monitor kidney function and diet closely." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate CKD. Close nephrologist monitoring required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced CKD. Immediate hospital care or dialysis required." << endl;
        }
    }
}

// Anemia
bool hasFatigue52 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasPaleSkin52 = symptom.find("pale skin") != string::npos || symptom.find("pallor") != string::npos;
bool hasShortnessBreath52 = symptom.find("shortness of breath") != string::npos || symptom.find("difficulty breathing") != string::npos;
bool hasDizziness52 = symptom.find("dizziness") != string::npos || symptom.find("lightheadedness") != string::npos;
bool hasColdHandsFeet52 = symptom.find("cold hands") != string::npos || symptom.find("cold feet") != string::npos;
bool hasRapidHeartRate52 = symptom.find("rapid heartbeat") != string::npos || symptom.find("palpitations") != string::npos;

if (hasFatigue52 && hasPaleSkin52 && hasShortnessBreath52 && hasDizziness52 && hasColdHandsFeet52 && hasRapidHeartRate52) {
    suggestionName = "Anemia";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric anemia suspected. Consult pediatrician for diagnosis and iron supplementation." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild anemia. Iron-rich diet and supplements may be sufficient." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate anemia. Medical evaluation and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe anemia. Immediate hospitalization may be needed." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild anemia. Monitor diet and supplements as advised by doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate anemia. Medical treatment and follow-up required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe anemia. Immediate medical care required." << endl;
        }
    }
}

// Leukemia / Lymphoma
bool hasFatigue53 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasFever53 = symptom.find("fever") != string::npos || symptom.find("persistent fever") != string::npos;
bool hasWeightLoss53 = symptom.find("weight loss") != string::npos || symptom.find("unexplained weight loss") != string::npos;
bool hasSwollenLymphNodes53 = symptom.find("swollen lymph nodes") != string::npos || symptom.find("lymphadenopathy") != string::npos;
bool hasBruising53 = symptom.find("easy bruising") != string::npos || symptom.find("bleeding") != string::npos;
bool hasNightSweats53 = symptom.find("night sweats") != string::npos || symptom.find("excessive sweating at night") != string::npos;

if (hasFatigue53 && hasFever53 && hasWeightLoss53 && hasSwollenLymphNodes53 && hasBruising53 && hasNightSweats53) {
    suggestionName = "Leukemia / Lymphoma";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric leukemia/lymphoma suspected. Immediate consultation with pediatric oncologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early signs of leukemia/lymphoma. Prompt hematologist evaluation recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate leukemia/lymphoma. Further diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe leukemia/lymphoma. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early signs of leukemia/lymphoma. Close monitoring and hematologist consultation advised." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate leukemia/lymphoma. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe leukemia/lymphoma. Immediate hospital care required." << endl;
        }
    }
}

// Hemophilia
bool hasExcessiveBleeding54 = symptom.find("excessive bleeding") != string::npos || symptom.find("prolonged bleeding") != string::npos;
bool hasEasyBruising54 = symptom.find("easy bruising") != string::npos || symptom.find("spontaneous bruising") != string::npos;
bool hasJointPain54 = symptom.find("joint pain") != string::npos || symptom.find("swollen joints") != string::npos;
bool hasNoseBleeds54 = symptom.find("nosebleeds") != string::npos || symptom.find("epistaxis") != string::npos;
bool hasBloodInUrineStool54 = symptom.find("blood in urine") != string::npos || symptom.find("blood in stool") != string::npos;
bool hasProlongedCuts54 = symptom.find("cuts take long to heal") != string::npos || symptom.find("wounds do not clot") != string::npos;

if (hasExcessiveBleeding54 && hasEasyBruising54 && hasJointPain54 && hasNoseBleeds54 && hasBloodInUrineStool54 && hasProlongedCuts54) {
    suggestionName = "Hemophilia";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric hemophilia suspected. Immediate consultation with pediatric hematologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild hemophilia. Take preventive care and follow hematologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate hemophilia. Regular monitoring and treatment needed." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe hemophilia. Immediate hospitalization and clotting factor replacement required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild hemophilia. Monitor for bleeding and follow hematologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate hemophilia. Medical supervision required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe hemophilia. Immediate hospital care required." << endl;
        }
    }
}

// Autoimmune Disorders (Lupus, Multiple Sclerosis)
bool hasFatigue55 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasJointPain55 = symptom.find("joint pain") != string::npos || symptom.find("swollen joints") != string::npos;
bool hasMuscleWeakness55 = symptom.find("muscle weakness") != string::npos || symptom.find("limb weakness") != string::npos;
bool hasFever55 = symptom.find("fever") != string::npos || symptom.find("persistent fever") != string::npos;
bool hasSkinRash55 = symptom.find("skin rash") != string::npos || symptom.find("butterfly rash") != string::npos;
bool hasNumbnessTingling55 = symptom.find("numbness") != string::npos || symptom.find("tingling") != string::npos;

if (hasFatigue55 && hasJointPain55 && hasMuscleWeakness55 && hasFever55 && hasSkinRash55 && hasNumbnessTingling55) {
    suggestionName = "Autoimmune Disorders (Lupus, Multiple Sclerosis)";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric autoimmune disorder suspected. Immediate consultation with pediatric rheumatologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild autoimmune symptoms. Monitor and consult rheumatologist for guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate autoimmune disorder. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe autoimmune complications. Immediate hospitalization required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild autoimmune symptoms. Monitor and consult rheumatologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate autoimmune disorder. Medical supervision required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe autoimmune complications. Immediate hospital care required." << endl;
        }
    }
}

// Lung Cancer
bool hasPersistentCough56 = symptom.find("persistent cough") != string::npos || symptom.find("coughing blood") != string::npos;
bool hasChestPain56 = symptom.find("chest pain") != string::npos || symptom.find("chest discomfort") != string::npos;
bool hasShortnessBreath56 = symptom.find("shortness of breath") != string::npos || symptom.find("difficulty breathing") != string::npos;
bool hasUnexplainedWeightLoss56 = symptom.find("weight loss") != string::npos || symptom.find("unexplained weight loss") != string::npos;
bool hasFatigue56 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasRecurrentInfections56 = symptom.find("recurrent lung infections") != string::npos || symptom.find("frequent pneumonia") != string::npos;

if (hasPersistentCough56 && hasChestPain56 && hasShortnessBreath56 && hasUnexplainedWeightLoss56 && hasFatigue56 && hasRecurrentInfections56) {
    suggestionName = "Lung Cancer";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric lung cancer is rare. Consult pediatric oncologist immediately if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage lung cancer. Prompt oncologist evaluation required." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate lung cancer. Diagnostic imaging and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced lung cancer. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage lung cancer. Monitor and consult oncologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate lung cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced lung cancer. Immediate hospital care required." << endl;
        }
    }
}

// Breast Cancer
bool hasLump57 = symptom.find("breast lump") != string::npos || symptom.find("lump in breast") != string::npos;
bool hasNippleDischarge57 = symptom.find("nipple discharge") != string::npos || symptom.find("bloody discharge") != string::npos;
bool hasBreastPain57 = symptom.find("breast pain") != string::npos || symptom.find("tenderness") != string::npos;
bool hasSkinChanges57 = symptom.find("skin changes") != string::npos || symptom.find("dimpling") != string::npos;
bool hasSwellingLymphNodes57 = symptom.find("swollen lymph nodes") != string::npos || symptom.find("axillary swelling") != string::npos;
bool hasUnexplainedWeightLoss57 = symptom.find("weight loss") != string::npos || symptom.find("unexplained weight loss") != string::npos;

if (hasLump57 && hasNippleDischarge57 && hasBreastPain57 && hasSkinChanges57 && hasSwellingLymphNodes57 && hasUnexplainedWeightLoss57) {
    suggestionName = "Breast Cancer";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric breast cancer is extremely rare. Immediate consultation with pediatric oncologist required if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage breast cancer. Prompt oncologist evaluation required." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate breast cancer. Diagnostic imaging and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced breast cancer. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage breast cancer. Monitor and consult oncologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate breast cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced breast cancer. Immediate hospital care required." << endl;
        }
    }
}

// Colon Cancer
bool hasBloodInStool58 = symptom.find("blood in stool") != string::npos || symptom.find("rectal bleeding") != string::npos;
bool hasChangeInBowelHabits58 = symptom.find("change in bowel habits") != string::npos || symptom.find("diarrhea or constipation") != string::npos;
bool hasAbdominalPain58 = symptom.find("abdominal pain") != string::npos || symptom.find("cramping") != string::npos;
bool hasUnexplainedWeightLoss58 = symptom.find("weight loss") != string::npos || symptom.find("unexplained weight loss") != string::npos;
bool hasFatigue58 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasBloating58 = symptom.find("bloating") != string::npos || symptom.find("feeling full") != string::npos;

if (hasBloodInStool58 && hasChangeInBowelHabits58 && hasAbdominalPain58 && hasUnexplainedWeightLoss58 && hasFatigue58 && hasBloating58) {
    suggestionName = "Colon Cancer";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric colon cancer is extremely rare. Immediate consultation with pediatric oncologist required if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage colon cancer. Prompt oncologist evaluation required." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate colon cancer. Diagnostic imaging and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced colon cancer. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage colon cancer. Monitor and consult oncologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate colon cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced colon cancer. Immediate hospital care required." << endl;
        }
    }
}

// Prostate Cancer
bool hasDifficultyUrinating59 = symptom.find("difficulty urinating") != string::npos || symptom.find("weak urine flow") != string::npos;
bool hasFrequentUrination59 = symptom.find("frequent urination") != string::npos || symptom.find("nocturia") != string::npos;
bool hasBloodInUrine59 = symptom.find("blood in urine") != string::npos || symptom.find("hematuria") != string::npos;
bool hasPelvicPain59 = symptom.find("pelvic pain") != string::npos || symptom.find("lower back pain") != string::npos;
bool hasErectileDysfunction59 = symptom.find("erectile dysfunction") != string::npos || symptom.find("difficulty achieving erection") != string::npos;
bool hasUnexplainedWeightLoss59 = symptom.find("weight loss") != string::npos || symptom.find("unexplained weight loss") != string::npos;

if (hasDifficultyUrinating59 && hasFrequentUrination59 && hasBloodInUrine59 && hasPelvicPain59 && hasErectileDysfunction59 && hasUnexplainedWeightLoss59) {
    suggestionName = "Prostate Cancer";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric prostate cancer is extremely rare. Immediate consultation with pediatric oncologist required if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage prostate cancer. Prompt oncologist evaluation required." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate prostate cancer. Diagnostic imaging and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced prostate cancer. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage prostate cancer. Monitor and consult oncologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate prostate cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced prostate cancer. Immediate hospital care required." << endl;
        }
    }
}

// Skin Cancer
bool hasNewMole60 = symptom.find("new mole") != string::npos || symptom.find("new skin lesion") != string::npos;
bool hasChangingMole60 = symptom.find("changing mole") != string::npos || symptom.find("mole changes") != string::npos;
bool hasNonHealingSores60 = symptom.find("non-healing sore") != string::npos || symptom.find("ulcer on skin") != string::npos;
bool hasItchingPain60 = symptom.find("itching") != string::npos || symptom.find("painful skin lesion") != string::npos;
bool hasSkinDiscoloration60 = symptom.find("skin discoloration") != string::npos || symptom.find("red or dark patch") != string::npos;
bool hasRapidGrowth60 = symptom.find("rapid growth") != string::npos || symptom.find("fast-growing lesion") != string::npos;

if (hasNewMole60 && hasChangingMole60 && hasNonHealingSores60 && hasItchingPain60 && hasSkinDiscoloration60 && hasRapidGrowth60) {
    suggestionName = "Skin Cancer";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric skin cancer is extremely rare. Immediate consultation with pediatric dermatologist/oncologist required if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage skin cancer. Prompt dermatology/oncology evaluation required." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate skin cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced skin cancer. Immediate hospitalization and treatment required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage skin cancer. Monitor and consult dermatologist/oncologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate skin cancer. Diagnostic tests and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced skin cancer. Immediate hospital care required." << endl;
        }
    }
}

// Depression
bool hasPersistentSadness61 = symptom.find("persistent sadness") != string::npos || symptom.find("low mood") != string::npos;
bool hasLossInterest61 = symptom.find("loss of interest") != string::npos || symptom.find("anhedonia") != string::npos;
bool hasFatigue61 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasSleepDisturbance61 = symptom.find("sleep disturbance") != string::npos || symptom.find("insomnia") != string::npos;
bool hasAppetiteChange61 = symptom.find("appetite change") != string::npos || symptom.find("weight change") != string::npos;
bool hasDifficultyConcentrating61 = symptom.find("difficulty concentrating") != string::npos || symptom.find("poor focus") != string::npos;

if (hasPersistentSadness61 && hasLossInterest61 && hasFatigue61 && hasSleepDisturbance61 && hasAppetiteChange61 && hasDifficultyConcentrating61) {
    suggestionName = "Depression";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric depression suspected. Consult child psychologist or psychiatrist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild depressive symptoms. Consider counseling and lifestyle changes." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate depression. Seek mental health professional for therapy and medication guidance." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe depression or suicidal risk. Immediate psychiatric care required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild depressive symptoms. Monitor and consult mental health professional." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate depression. Therapy and medical intervention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe depression or suicidal risk. Immediate psychiatric care required." << endl;
        }
    }
}

// Anxiety Disorders
bool hasExcessiveWorry62 = symptom.find("excessive worry") != string::npos || symptom.find("persistent worry") != string::npos;
bool hasRestlessness62 = symptom.find("restlessness") != string::npos || symptom.find("feeling on edge") != string::npos;
bool hasFatigue62 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasDifficultyConcentrating62 = symptom.find("difficulty concentrating") != string::npos || symptom.find("poor focus") != string::npos;
bool hasIrritability62 = symptom.find("irritability") != string::npos || symptom.find("mood swings") != string::npos;
bool hasSleepDisturbance62 = symptom.find("sleep disturbance") != string::npos || symptom.find("insomnia") != string::npos;

if (hasExcessiveWorry62 && hasRestlessness62 && hasFatigue62 && hasDifficultyConcentrating62 && hasIrritability62 && hasSleepDisturbance62) {
    suggestionName = "Anxiety Disorders";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric anxiety suspected. Consult child psychologist or psychiatrist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild anxiety symptoms. Consider counseling, relaxation techniques, and lifestyle adjustments." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate anxiety. Seek mental health professional for therapy and possibly medications." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe anxiety or panic attacks. Immediate psychiatric care required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild anxiety. Monitor and consult mental health professional." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate anxiety. Therapy and medical intervention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe anxiety or panic attacks. Immediate psychiatric care required." << endl;
        }
    }
}

// Bipolar Disorder
bool hasMoodSwings63 = symptom.find("mood swings") != string::npos || symptom.find("extreme mood changes") != string::npos;
bool hasMania63 = symptom.find("mania") != string::npos || symptom.find("elevated mood") != string::npos;
bool hasDepression63 = symptom.find("depression") != string::npos || symptom.find("persistent sadness") != string::npos;
bool hasSleepDisturbance63 = symptom.find("sleep disturbance") != string::npos || symptom.find("insomnia") != string::npos;
bool hasIrritability63 = symptom.find("irritability") != string::npos || symptom.find("agitation") != string::npos;
bool hasDifficultyConcentrating63 = symptom.find("difficulty concentrating") != string::npos || symptom.find("poor focus") != string::npos;

if (hasMoodSwings63 && hasMania63 && hasDepression63 && hasSleepDisturbance63 && hasIrritability63 && hasDifficultyConcentrating63) {
    suggestionName = "Bipolar Disorder";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric bipolar disorder is rare. Consult child psychiatrist immediately if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild bipolar symptoms. Consider psychiatric counseling and lifestyle adjustments." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate bipolar disorder. Seek mental health professional for therapy and medications." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe bipolar disorder or risk of self-harm. Immediate psychiatric care required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild bipolar symptoms. Monitor and consult psychiatrist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate bipolar disorder. Therapy and medical intervention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe bipolar disorder or risk of self-harm. Immediate psychiatric care required." << endl;
        }
    }
}

// Schizophrenia
bool hasHallucinations64 = symptom.find("hallucinations") != string::npos || symptom.find("hearing voices") != string::npos;
bool hasDelusions64 = symptom.find("delusions") != string::npos || symptom.find("false beliefs") != string::npos;
bool hasDisorganizedThinking64 = symptom.find("disorganized thinking") != string::npos || symptom.find("confused speech") != string::npos;
bool hasSocialWithdrawal64 = symptom.find("social withdrawal") != string::npos || symptom.find("isolation") != string::npos;
bool hasFlatAffect64 = symptom.find("flat affect") != string::npos || symptom.find("reduced emotional expression") != string::npos;
bool hasCognitiveImpairment64 = symptom.find("difficulty concentrating") != string::npos || symptom.find("poor focus") != string::npos;

if (hasHallucinations64 && hasDelusions64 && hasDisorganizedThinking64 && hasSocialWithdrawal64 && hasFlatAffect64 && hasCognitiveImpairment64) {
    suggestionName = "Schizophrenia";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric schizophrenia is extremely rare. Consult child psychiatrist immediately if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild schizophrenia symptoms. Early psychiatric intervention recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate schizophrenia. Therapy and medication required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe schizophrenia. Immediate hospitalization and psychiatric care required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild schizophrenia symptoms. Monitor and consult psychiatrist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate schizophrenia. Therapy and medical intervention required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe schizophrenia. Immediate hospital care required." << endl;
        }
    }
}

// Dementia
bool hasMemoryLoss65 = symptom.find("memory loss") != string::npos || symptom.find("forgetfulness") != string::npos;
bool hasConfusion65 = symptom.find("confusion") != string::npos || symptom.find("disorientation") != string::npos;
bool hasDifficultyCommunicating65 = symptom.find("difficulty communicating") != string::npos || symptom.find("trouble speaking") != string::npos;
bool hasPoorJudgment65 = symptom.find("poor judgment") != string::npos || symptom.find("decision-making problems") != string::npos;
bool hasPersonalityChanges65 = symptom.find("personality changes") != string::npos || symptom.find("behavior changes") != string::npos;
bool hasDifficultyPerformingDailyTasks65 = symptom.find("difficulty performing daily tasks") != string::npos || symptom.find("loss of independence") != string::npos;

if (hasMemoryLoss65 && hasConfusion65 && hasDifficultyCommunicating65 && hasPoorJudgment65 && hasPersonalityChanges65 && hasDifficultyPerformingDailyTasks65) {
    suggestionName = "Dementia";
    matched2 = true;  // <-- changed to matched2

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric dementia is extremely rare. Consult pediatric neurologist immediately if suspected." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early-stage dementia symptoms. Cognitive assessment and neurologist consultation recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate dementia. Seek neurologist for diagnostic tests and treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe dementia complications. Immediate medical attention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early-stage dementia symptoms. Monitor and consult neurologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate dementia. Cognitive therapy and medical management required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe dementia complications. Immediate hospital care required." << endl;
        }
    }
}


//Danger Zone
        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched2) {
            getchar();
        }

        system("cls");
    }
}

