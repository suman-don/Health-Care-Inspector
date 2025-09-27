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

// Gastritis / Acid Reflux (GERD)
bool hasHeartburn24 = symptom.find("heartburn") != string::npos;
bool hasStomachPain24 = symptom.find("stomach pain") != string::npos || symptom.find("upper abdominal pain") != string::npos;
bool hasNausea24 = symptom.find("nausea") != string::npos;
bool hasVomiting24 = symptom.find("vomiting") != string::npos;
bool hasBloating24 = symptom.find("bloating") != string::npos || symptom.find("feeling full") != string::npos;
bool hasAcidRegurgitation24 = symptom.find("acid regurgitation") != string::npos || symptom.find("sour taste") != string::npos;

if (hasHeartburn24 && hasStomachPain24 && hasNausea24 && hasVomiting24 && hasBloating24 && hasAcidRegurgitation24) {
    suggestionName = "Gastritis / GERD";
    cout << "             - " << suggestionName;
    matched1 = true;

    cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;

    // Children (=5)
    if(age <= 5) {
        cout<<"            Young child with gastritis/GERD symptoms. Consult pediatric gastroenterologist." << endl;
    }

    // Adults (6–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild gastritis/GERD symptoms. Avoid spicy foods and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate gastritis/GERD symptoms. Seek medical attention and follow treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe gastritis/GERD complications! Hospitalize immediately." << endl;
        }
    }

    // Elderly (>60)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild gastritis/GERD symptoms. Monitor diet and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate gastritis/GERD symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe gastritis/GERD complications! Hospitalize immediately." << endl;
        }
    } else {
        cout << "Invalid input. Please check age and severity." << endl;
    }
}

// Peptic Ulcer (Symptom Detection + Age & Severity Recommendations)
bool hasAbdominalPain25 = symptom.find("abdominal pain") != string::npos || symptom.find("upper abdominal pain") != string::npos;
bool hasBloating25 = symptom.find("bloating") != string::npos || symptom.find("feeling full") != string::npos;
bool hasNausea25 = symptom.find("nausea") != string::npos;
bool hasVomiting25 = symptom.find("vomiting") != string::npos;
bool hasHeartburn25 = symptom.find("heartburn") != string::npos;
bool hasDarkStool25 = symptom.find("dark stool") != string::npos || symptom.find("bloody stool") != string::npos;

if (hasAbdominalPain25 && hasBloating25 && hasNausea25 && hasVomiting25 && hasHeartburn25 && hasDarkStool25) {
    suggestionName = "Peptic Ulcer";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with peptic ulcer symptoms. Consult pediatric gastroenterologist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild peptic ulcer symptoms. Avoid spicy foods, NSAIDs, and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate peptic ulcer symptoms. Seek medical attention and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe peptic ulcer complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild peptic ulcer symptoms. Monitor diet and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate peptic ulcer symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe peptic ulcer complications! Hospitalize immediately." << endl;
        }
    }
}

// Liver Diseases (Cirrhosis, Fatty Liver, Hepatitis)
bool hasJaundice = symptom.find("jaundice") != string::npos || symptom.find("yellow skin") != string::npos || symptom.find("yellow eyes") != string::npos;
bool hasFatigue26 = symptom.find("fatigue") != string::npos;
bool hasAbdominalPain26 = symptom.find("abdominal pain") != string::npos || symptom.find("upper right abdomen pain") != string::npos;
bool hasSwelling26 = symptom.find("swelling") != string::npos || symptom.find("ascites") != string::npos;
bool hasNausea26 = symptom.find("nausea") != string::npos;
bool hasLossOfAppetite26 = symptom.find("loss of appetite") != string::npos || symptom.find("poor appetite") != string::npos;

if (hasJaundice && hasFatigue26 && hasAbdominalPain26 && hasSwelling26 && hasNausea26 && hasLossOfAppetite26) {
    suggestionName = "Liver Disease";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with liver disease symptoms. Consult pediatric hepatologist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild liver disease symptoms. Monitor diet, avoid alcohol, and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate liver disease symptoms. Seek medical attention and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe liver disease complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild liver disease symptoms. Monitor diet and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate liver disease symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe liver disease complications! Hospitalize immediately." << endl;
        }
    }
}

// Gallstones
bool hasAbdominalPain27 = symptom.find("abdominal pain") != string::npos || symptom.find("upper right abdomen pain") != string::npos;
bool hasNausea27 = symptom.find("nausea") != string::npos;
bool hasVomiting27 = symptom.find("vomiting") != string::npos;
bool hasBloating27 = symptom.find("bloating") != string::npos || symptom.find("feeling full") != string::npos;
bool hasIndigestion27 = symptom.find("indigestion") != string::npos || symptom.find("dyspepsia") != string::npos;
bool hasPainAfterFattyMeal27 = symptom.find("pain after fatty meal") != string::npos;

if (hasAbdominalPain27 && hasNausea27 && hasVomiting27 && hasBloating27 && hasIndigestion27 && hasPainAfterFattyMeal27) {
    suggestionName = "Gallstones";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with gallstone symptoms. Consult pediatric gastroenterologist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild gallstone symptoms. Monitor diet, avoid fatty foods, and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate gallstone symptoms. Seek medical attention and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe gallstone complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild gallstone symptoms. Monitor diet and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate gallstone symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe gallstone complications! Hospitalize immediately." << endl;
        }
    }
}

// Irritable Bowel Syndrome (IBS)
bool hasAbdominalPain28 = symptom.find("abdominal pain") != string::npos || symptom.find("cramping") != string::npos;
bool hasBloating28 = symptom.find("bloating") != string::npos || symptom.find("feeling full") != string::npos;
bool hasDiarrhea28 = symptom.find("diarrhea") != string::npos;
bool hasConstipation28 = symptom.find("constipation") != string::npos;
bool hasGas28 = symptom.find("gas") != string::npos || symptom.find("flatulence") != string::npos;
bool hasMucusInStool28 = symptom.find("mucus in stool") != string::npos;

if (hasAbdominalPain28 && hasBloating28 && (hasDiarrhea28 || hasConstipation28) && hasGas28 && hasMucusInStool28) {
    suggestionName = "Irritable Bowel Syndrome (IBS)";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with IBS symptoms. Consult pediatric gastroenterologist." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild IBS symptoms. Monitor diet, avoid trigger foods, and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate IBS symptoms. Seek medical attention and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe IBS complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild IBS symptoms. Monitor diet and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate IBS symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe IBS complications! Hospitalize immediately." << endl;
        }
    }
}

// Colorectal Cancer
bool hasAbdominalPain29 = symptom.find("abdominal pain") != string::npos || symptom.find("cramping") != string::npos;
bool hasBloodInStool29 = symptom.find("blood in stool") != string::npos || symptom.find("bloody stool") != string::npos;
bool hasChangeInBowelHabits29 = symptom.find("constipation") != string::npos || symptom.find("diarrhea") != string::npos || symptom.find("change in bowel habits") != string::npos;
bool hasUnexplainedWeightLoss29 = symptom.find("weight loss") != string::npos;
bool hasFatigue29 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasAnemia29 = symptom.find("anemia") != string::npos || symptom.find("pale skin") != string::npos;

if (hasAbdominalPain29 && hasBloodInStool29 && hasChangeInBowelHabits29 && hasUnexplainedWeightLoss29 && hasFatigue29 && hasAnemia29) {
    suggestionName = "Colorectal Cancer";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Rare in children. Consult pediatric oncologist immediately if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with possible early-stage colorectal cancer symptoms. Seek medical evaluation promptly." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate colorectal cancer symptoms. Schedule colonoscopy and specialist consultation immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe colorectal cancer complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with possible early-stage colorectal cancer. Consult doctor promptly." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate colorectal cancer symptoms. Seek specialist care immediately." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe colorectal cancer complications! Hospitalize immediately." << endl;
        }
    }
}

// Migraine / Headache Disorders
bool hasHeadache30 = symptom.find("headache") != string::npos || symptom.find("migraine") != string::npos;
bool hasNausea30 = symptom.find("nausea") != string::npos;
bool hasVomiting30 = symptom.find("vomiting") != string::npos;
bool hasSensitivityToLight30 = symptom.find("sensitivity to light") != string::npos || symptom.find("photophobia") != string::npos;
bool hasSensitivityToSound30 = symptom.find("sensitivity to sound") != string::npos || symptom.find("phonophobia") != string::npos;
bool hasVisualDisturbance30 = symptom.find("visual disturbance") != string::npos || symptom.find("aura") != string::npos;

if (hasHeadache30 && hasNausea30 && hasVomiting30 && hasSensitivityToLight30 && hasSensitivityToSound30 && hasVisualDisturbance30) {
    suggestionName = "Migraine / Headache Disorders";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with migraine/headache symptoms. Consult pediatric neurologist." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild migraine symptoms. Monitor triggers, rest, and follow doctor guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate migraine symptoms. Seek medical attention and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe migraine complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild migraine symptoms. Monitor triggers and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate migraine symptoms. Seek medical attention promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe migraine complications! Hospitalize immediately." << endl;
        }
    }
}


// Epilepsy
bool hasSeizures31 = symptom.find("seizures") != string::npos || symptom.find("convulsions") != string::npos;
bool hasLossOfConsciousness31 = symptom.find("loss of consciousness") != string::npos || symptom.find("fainting") != string::npos;
bool hasStaringSpells31 = symptom.find("staring spells") != string::npos;
bool hasConfusion31 = symptom.find("confusion") != string::npos;
bool hasJerkingMovements31 = symptom.find("jerking movements") != string::npos || symptom.find("muscle twitching") != string::npos;
bool hasAura31 = symptom.find("aura") != string::npos || symptom.find("warning signs before seizure") != string::npos;

if (hasSeizures31 && hasLossOfConsciousness31 && hasStaringSpells31 && hasConfusion31 && hasJerkingMovements31 && hasAura31) {
    suggestionName = "Epilepsy";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Young child with epilepsy symptoms. Consult pediatric neurologist immediately." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild epilepsy symptoms. Take prescribed medications and avoid seizure triggers." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate epilepsy symptoms. Seek medical attention and adhere strictly to treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe epilepsy complications! Hospitalize immediately." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild epilepsy symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate epilepsy symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe epilepsy complications! Hospitalize immediately." << endl;
        }
    }
}

// Alzheimer's Disease
bool hasMemoryLoss32 = symptom.find("memory loss") != string::npos || symptom.find("forgetfulness") != string::npos;
bool hasConfusion32 = symptom.find("confusion") != string::npos || symptom.find("disorientation") != string::npos;
bool hasDifficultyPlanning32 = symptom.find("difficulty planning") != string::npos || symptom.find("difficulty problem solving") != string::npos;
bool hasLanguageProblems32 = symptom.find("language problems") != string::npos || symptom.find("trouble speaking") != string::npos;
bool hasMoodChanges32 = symptom.find("mood changes") != string::npos || symptom.find("irritability") != string::npos;
bool hasWithdrawal32 = symptom.find("social withdrawal") != string::npos || symptom.find("loss of interest") != string::npos;

if (hasMemoryLoss32 && hasConfusion32 && hasDifficultyPlanning32 && hasLanguageProblems32 && hasMoodChanges32 && hasWithdrawal32) {
    suggestionName = "Alzheimer's Disease";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Alzheimer's is extremely rare in children. Seek specialist evaluation if symptoms appear." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild Alzheimer's symptoms. Consult neurologist and monitor cognitive changes." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate Alzheimer's symptoms. Seek specialist evaluation and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe Alzheimer's symptoms! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild Alzheimer's symptoms. Monitor cognitive health and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate Alzheimer's symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe Alzheimer's symptoms! Hospitalize immediately." << endl;
        }
    }
}

// Parkinson's Disease
bool hasTremor33 = symptom.find("tremor") != string::npos || symptom.find("shaking") != string::npos;
bool hasBradykinesia33 = symptom.find("slowness of movement") != string::npos || symptom.find("bradykinesia") != string::npos;
bool hasMuscleStiffness33 = symptom.find("muscle stiffness") != string::npos || symptom.find("rigidity") != string::npos;
bool hasBalanceProblems33 = symptom.find("balance problems") != string::npos || symptom.find("postural instability") != string::npos;
bool hasSpeechChanges33 = symptom.find("speech changes") != string::npos || symptom.find("soft voice") != string::npos;
bool hasWritingChanges33 = symptom.find("writing changes") != string::npos || symptom.find("micrographia") != string::npos;

if (hasTremor33 && hasBradykinesia33 && hasMuscleStiffness33 && hasBalanceProblems33 && hasSpeechChanges33 && hasWritingChanges33) {
    suggestionName = "Parkinson's Disease";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Parkinson's is extremely rare in children. Seek specialist evaluation if symptoms appear." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild Parkinson's symptoms. Consult neurologist and monitor progression." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate Parkinson's symptoms. Follow treatment plan and seek specialist care." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe Parkinson's complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild Parkinson's symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate Parkinson's symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe Parkinson's complications! Hospitalize immediately." << endl;
        }
    }
}

// Stroke / Cerebrovascular Accident (CVA)
bool hasSuddenWeakness34 = symptom.find("sudden weakness") != string::npos || symptom.find("numbness") != string::npos;
bool hasFacialDroop34 = symptom.find("facial droop") != string::npos || symptom.find("asymmetry face") != string::npos;
bool hasSpeechDifficulty34 = symptom.find("speech difficulty") != string::npos || symptom.find("slurred speech") != string::npos;
bool hasVisionProblems34 = symptom.find("vision problems") != string::npos || symptom.find("blurred vision") != string::npos;
bool hasSevereHeadache34 = symptom.find("severe headache") != string::npos;
bool hasLossOfBalance34 = symptom.find("loss of balance") != string::npos || symptom.find("dizziness") != string::npos;

if (hasSuddenWeakness34 && hasFacialDroop34 && hasSpeechDifficulty34 && hasVisionProblems34 && hasSevereHeadache34 && hasLossOfBalance34) {
    suggestionName = "Stroke / Cerebrovascular Accident (CVA)";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Stroke is rare in children. Seek pediatric neurologist immediately if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild stroke symptoms. Seek urgent medical evaluation immediately." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate stroke symptoms. Hospitalize and begin treatment promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe stroke! Immediate hospitalization and intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild stroke symptoms. Seek urgent medical evaluation." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate stroke symptoms. Hospitalize promptly and follow treatment plan." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe stroke! Immediate hospitalization required." << endl;
        }
    }
}

// Multiple Sclerosis (MS)
bool hasFatigue35 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasNumbness35 = symptom.find("numbness") != string::npos || symptom.find("tingling") != string::npos;
bool hasVisionProblems35 = symptom.find("vision problems") != string::npos || symptom.find("blurred vision") != string::npos || symptom.find("double vision") != string::npos;
bool hasBalanceProblems35 = symptom.find("balance problems") != string::npos || symptom.find("dizziness") != string::npos;
bool hasMuscleWeakness35 = symptom.find("muscle weakness") != string::npos;
bool hasSpasticity35 = symptom.find("muscle stiffness") != string::npos || symptom.find("spasticity") != string::npos;

if (hasFatigue35 && hasNumbness35 && hasVisionProblems35 && hasBalanceProblems35 && hasMuscleWeakness35 && hasSpasticity35) {
    suggestionName = "Multiple Sclerosis (MS)";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            MS is extremely rare in children. Seek pediatric neurologist if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild MS symptoms. Consult neurologist and monitor progression." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate MS symptoms. Follow treatment plan and attend regular checkups." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe MS complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild MS symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate MS symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe MS complications! Hospitalize immediately." << endl;
        }
    }
}

// Osteoarthritis
bool hasJointPain36 = symptom.find("joint pain") != string::npos || symptom.find("arthralgia") != string::npos;
bool hasStiffness36 = symptom.find("stiffness") != string::npos || symptom.find("morning stiffness") != string::npos;
bool hasSwelling36 = symptom.find("swelling") != string::npos || symptom.find("joint swelling") != string::npos;
bool hasReducedMobility36 = symptom.find("reduced mobility") != string::npos || symptom.find("limited range of motion") != string::npos;
bool hasCrepitus36 = symptom.find("crepitus") != string::npos || symptom.find("joint grinding") != string::npos;
bool hasDeformity36 = symptom.find("deformity") != string::npos || symptom.find("joint deformity") != string::npos;

if (hasJointPain36 && hasStiffness36 && hasSwelling36 && hasReducedMobility36 && hasCrepitus36 && hasDeformity36) {
    suggestionName = "Osteoarthritis";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Osteoarthritis is rare in children. Seek pediatric rheumatologist if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild osteoarthritis symptoms. Use supportive measures and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate osteoarthritis symptoms. Seek medical treatment and consider physiotherapy." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe osteoarthritis complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild osteoarthritis symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate osteoarthritis symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe osteoarthritis complications! Hospitalize immediately." << endl;
        }
    }
}

// Rheumatoid Arthritis (RA)
bool hasJointPain37 = symptom.find("joint pain") != string::npos || symptom.find("arthralgia") != string::npos;
bool hasSwelling37 = symptom.find("joint swelling") != string::npos || symptom.find("swollen joints") != string::npos;
bool hasStiffness37 = symptom.find("morning stiffness") != string::npos || symptom.find("joint stiffness") != string::npos;
bool hasFatigue37 = symptom.find("fatigue") != string::npos || symptom.find("tiredness") != string::npos;
bool hasWarmJoints37 = symptom.find("warm joints") != string::npos || symptom.find("redness in joints") != string::npos;
bool hasSymmetricalSymptoms37 = symptom.find("symmetrical symptoms") != string::npos || symptom.find("both sides") != string::npos;

if (hasJointPain37 && hasSwelling37 && hasStiffness37 && hasFatigue37 && hasWarmJoints37 && hasSymmetricalSymptoms37) {
    suggestionName = "Rheumatoid Arthritis";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Juvenile RA is rare. Consult pediatric rheumatologist if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild RA symptoms. Consult rheumatologist and follow medication guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate RA symptoms. Follow treatment plan and consider physiotherapy." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe RA complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild RA symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate RA symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe RA complications! Hospitalize immediately." << endl;
        }
    }
}

// Osteoporosis
bool hasBonePain38 = symptom.find("bone pain") != string::npos || symptom.find("back pain") != string::npos;
bool hasFractures38 = symptom.find("fractures") != string::npos || symptom.find("broken bones") != string::npos;
bool hasHeightLoss38 = symptom.find("height loss") != string::npos || symptom.find("shrinking") != string::npos;
bool hasStoopedPosture38 = symptom.find("stooped posture") != string::npos || symptom.find("hunched back") != string::npos;
bool hasReducedBoneDensity38 = symptom.find("reduced bone density") != string::npos || symptom.find("low BMD") != string::npos;
bool hasWeakGrip38 = symptom.find("weak grip") != string::npos || symptom.find("hand weakness") != string::npos;

if (hasBonePain38 && hasFractures38 && hasHeightLoss38 && hasStoopedPosture38 && hasReducedBoneDensity38 && hasWeakGrip38) {
    suggestionName = "Osteoporosis";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Osteoporosis is rare in children. Seek pediatric specialist if symptoms present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild osteoporosis symptoms. Focus on bone health and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate osteoporosis. Follow treatment plan and consider bone-strengthening exercises." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe osteoporosis! Risk of fractures high, hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild osteoporosis symptoms. Monitor bone health and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate osteoporosis. Follow treatment plan and monitor closely." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe osteoporosis! High fracture risk, hospitalize immediately." << endl;
        }
    }
}

// Gout
bool hasJointPain39 = symptom.find("joint pain") != string::npos || symptom.find("arthralgia") != string::npos;
bool hasSwelling39 = symptom.find("swelling") != string::npos || symptom.find("inflamed joints") != string::npos;
bool hasRedness39 = symptom.find("redness") != string::npos || symptom.find("warm joints") != string::npos;
bool hasSuddenAttack39 = symptom.find("sudden attack") != string::npos || symptom.find("flare-up") != string::npos;
bool hasLimitedMovement39 = symptom.find("limited movement") != string::npos || symptom.find("difficulty moving joint") != string::npos;
bool hasTophi39 = symptom.find("tophi") != string::npos || symptom.find("urate crystals") != string::npos;

if (hasJointPain39 && hasSwelling39 && hasRedness39 && hasSuddenAttack39 && hasLimitedMovement39 && hasTophi39) {
    suggestionName = "Gout";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Gout is extremely rare in children. Consult pediatric specialist if symptoms appear." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild gout symptoms. Consult doctor, manage diet and lifestyle." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate gout symptoms. Seek medical treatment and consider medications." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe gout complications! Hospitalize if necessary." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild gout symptoms. Monitor condition and consult doctor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate gout symptoms. Seek specialist care promptly." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe gout complications! Hospitalize immediately." << endl;
        }
    }
}

// Acne
bool hasPimples40 = symptom.find("pimples") != string::npos || symptom.find("spots") != string::npos;
bool hasBlackheads40 = symptom.find("blackheads") != string::npos || symptom.find("comedones") != string::npos;
bool hasWhiteheads40 = symptom.find("whiteheads") != string::npos;
bool hasOilySkin40 = symptom.find("oily skin") != string::npos || symptom.find("greasy skin") != string::npos;
bool hasInflammation40 = symptom.find("redness") != string::npos || symptom.find("inflammation") != string::npos;
bool hasScarring40 = symptom.find("scars") != string::npos || symptom.find("skin scarring") != string::npos;

if (hasPimples40 && hasBlackheads40 && hasWhiteheads40 && hasOilySkin40 && hasInflammation40 && hasScarring40) {
    suggestionName = "Acne";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Acne is rare in very young children. Consult pediatric dermatologist if present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Mild acne. Use proper skincare and over-the-counter treatments." << endl;
        } else if(severity == "moderate") {
            cout << "            Moderate acne. Consult dermatologist for prescription medications." << endl;
        } else if(severity == "serious") {
            cout << "            Severe acne. Dermatologist treatment required; may include oral medications or procedures." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Mild acne in elderly. Monitor and use skincare routine." << endl;
        } else if(severity == "moderate") {
            cout << "            Moderate acne. Consult dermatologist for treatment options." << endl;
        } else if(severity == "serious") {
            cout << "            Severe acne. Immediate dermatologist consultation recommended." << endl;
        }
    }
}

// Eczema / Dermatitis
bool hasItching41 = symptom.find("itching") != string::npos || symptom.find("pruritus") != string::npos;
bool hasRedness41 = symptom.find("redness") != string::npos || symptom.find("inflamed skin") != string::npos;
bool hasDrySkin41 = symptom.find("dry skin") != string::npos || symptom.find("scaly skin") != string::npos;
bool hasRash41 = symptom.find("rash") != string::npos;
bool hasBlisters41 = symptom.find("blisters") != string::npos || symptom.find("oozing") != string::npos;
bool hasThickenedSkin41 = symptom.find("thickened skin") != string::npos || symptom.find("lichenification") != string::npos;

if (hasItching41 && hasRedness41 && hasDrySkin41 && hasRash41 && hasBlisters41 && hasThickenedSkin41) {
    suggestionName = "Eczema / Dermatitis";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Child with eczema/dermatitis symptoms. Consult pediatric dermatologist for treatment." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild eczema/dermatitis. Use moisturizers and avoid irritants." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate eczema/dermatitis. Consult dermatologist for topical/oral medications." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe eczema/dermatitis. Dermatologist intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild eczema/dermatitis. Use skin care routine and monitor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate eczema/dermatitis. Consult dermatologist for treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe eczema/dermatitis. Immediate dermatologist care required." << endl;
        }
    }
}

// Psoriasis
bool hasRedPatches42 = symptom.find("red patches") != string::npos || symptom.find("plaques") != string::npos;
bool hasScalySkin42 = symptom.find("scaly skin") != string::npos || symptom.find("silvery scales") != string::npos;
bool hasItching42 = symptom.find("itching") != string::npos || symptom.find("pruritus") != string::npos;
bool hasDrySkin42 = symptom.find("dry skin") != string::npos;
bool hasNailChanges42 = symptom.find("nail changes") != string::npos || symptom.find("pitting nails") != string::npos;
bool hasJointPain42 = symptom.find("joint pain") != string::npos || symptom.find("arthralgia") != string::npos;

if (hasRedPatches42 && hasScalySkin42 && hasItching42 && hasDrySkin42 && hasNailChanges42 && hasJointPain42) {
    suggestionName = "Psoriasis";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Child with psoriasis symptoms. Consult pediatric dermatologist for treatment." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild psoriasis. Use moisturizers and topical treatment." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate psoriasis. Consult dermatologist for prescription creams or phototherapy." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe psoriasis. Dermatologist intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild psoriasis. Use skincare routine and monitor." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate psoriasis. Consult dermatologist for treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe psoriasis. Immediate dermatologist care required." << endl;
        }
    }
}

// Skin Cancer (Melanoma, Basal Cell Carcinoma)
bool hasNewGrowth43 = symptom.find("new growth") != string::npos || symptom.find("lump") != string::npos;
bool hasChangeInMole43 = symptom.find("change in mole") != string::npos || symptom.find("color change") != string::npos;
bool hasNonHealingSores43 = symptom.find("non-healing sores") != string::npos || symptom.find("ulcer") != string::npos;
bool hasItchingOrBleeding43 = symptom.find("itching") != string::npos || symptom.find("bleeding") != string::npos;
bool hasAsymmetry43 = symptom.find("asymmetry") != string::npos || symptom.find("irregular shape") != string::npos;
bool hasRapidGrowth43 = symptom.find("rapid growth") != string::npos || symptom.find("quick enlargement") != string::npos;

if (hasNewGrowth43 && hasChangeInMole43 && hasNonHealingSores43 && hasItchingOrBleeding43 && hasAsymmetry43 && hasRapidGrowth43) {
    suggestionName = "Skin Cancer";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Skin cancer is extremely rare in children. Consult pediatric dermatologist if suspicious lesions appear." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early signs of skin cancer. Immediate dermatologist consultation recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with developing skin cancer. Seek specialist care for biopsy and treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced skin cancer! Immediate hospital intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early skin cancer signs. Prompt dermatologist consultation needed." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate skin cancer. Specialist care required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced skin cancer! Hospitalization immediately required." << endl;
        }
    }
}

// Fungal Infections
bool hasItching44 = symptom.find("itching") != string::npos || symptom.find("pruritus") != string::npos;
bool hasRedness44 = symptom.find("redness") != string::npos || symptom.find("inflamed skin") != string::npos;
bool hasRash44 = symptom.find("rash") != string::npos || symptom.find("spots") != string::npos;
bool hasScaling44 = symptom.find("scaling") != string::npos || symptom.find("flaky skin") != string::npos;
bool hasCracking44 = symptom.find("cracking") != string::npos || symptom.find("fissures") != string::npos;
bool hasDiscoloration44 = symptom.find("discoloration") != string::npos || symptom.find("dark patches") != string::npos;

if (hasItching44 && hasRedness44 && hasRash44 && hasScaling44 && hasCracking44 && hasDiscoloration44) {
    suggestionName = "Fungal Infection";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Child with fungal infection symptoms. Consult pediatric dermatologist for treatment." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild fungal infection. Use antifungal creams or lotions." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate fungal infection. Consult dermatologist for stronger antifungal medications." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe fungal infection. Systemic treatment may be required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild fungal infection. Monitor and use topical antifungals." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate fungal infection. Consult dermatologist for treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe fungal infection. Systemic therapy may be necessary." << endl;
        }
    }
}

// Cataract
bool hasBlurredVision45 = symptom.find("blurred vision") != string::npos || symptom.find("cloudy vision") != string::npos;
bool hasDifficultyNightVision45 = symptom.find("difficulty seeing at night") != string::npos || symptom.find("night blindness") != string::npos;
bool hasFadedColors45 = symptom.find("faded colors") != string::npos || symptom.find("yellowing of vision") != string::npos;
bool hasDoubleVision45 = symptom.find("double vision") != string::npos;
bool hasFrequentPrescriptionChange45 = symptom.find("frequent glasses change") != string::npos || symptom.find("frequent prescription change") != string::npos;
bool hasHalosAroundLights45 = symptom.find("halos around lights") != string::npos || symptom.find("glare") != string::npos;

if (hasBlurredVision45 && hasDifficultyNightVision45 && hasFadedColors45 && hasDoubleVision45 && hasFrequentPrescriptionChange45 && hasHalosAroundLights45) {
    suggestionName = "Cataract";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric cataract detected. Immediate consultation with pediatric ophthalmologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early cataract. Monitor vision and consult ophthalmologist regularly." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate cataract. Ophthalmologist consultation recommended for potential surgery." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced cataract affecting vision. Surgical intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early cataract. Monitor vision and consult ophthalmologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate cataract. Surgery may be necessary." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced cataract. Immediate ophthalmic surgery required." << endl;
        }
    }
}

// Glaucoma
bool hasIncreasedEyePressure46 = symptom.find("increased eye pressure") != string::npos || symptom.find("ocular hypertension") != string::npos;
bool hasLossPeripheralVision46 = symptom.find("loss of peripheral vision") != string::npos || symptom.find("tunnel vision") != string::npos;
bool hasBlurredVision46 = symptom.find("blurred vision") != string::npos;
bool hasSevereEyePain46 = symptom.find("severe eye pain") != string::npos || symptom.find("eye discomfort") != string::npos;
bool hasHalosAroundLights46 = symptom.find("halos around lights") != string::npos || symptom.find("glare") != string::npos;
bool hasNauseaVomiting46 = symptom.find("nausea") != string::npos || symptom.find("vomiting") != string::npos;

if (hasIncreasedEyePressure46 && hasLossPeripheralVision46 && hasBlurredVision46 && hasSevereEyePain46 && hasHalosAroundLights46 && hasNauseaVomiting46) {
    suggestionName = "Glaucoma";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric glaucoma suspected. Immediate consultation with pediatric ophthalmologist required." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early glaucoma. Regular eye check-ups and eye drops prescribed by ophthalmologist." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate glaucoma. Close ophthalmologist monitoring and treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced glaucoma. Immediate hospital intervention needed to prevent vision loss." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early glaucoma. Monitor eye pressure and follow ophthalmologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate glaucoma. Regular ophthalmic treatment required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced glaucoma. Immediate intervention to prevent blindness required." << endl;
        }
    }
}

// Macular Degeneration
bool hasBlurredCentralVision47 = symptom.find("blurred central vision") != string::npos || symptom.find("distorted central vision") != string::npos;
bool hasDifficultyReading47 = symptom.find("difficulty reading") != string::npos || symptom.find("trouble seeing fine details") != string::npos;
bool hasDarkOrEmptyArea47 = symptom.find("dark spot in vision") != string::npos || symptom.find("empty area in central vision") != string::npos;
bool hasDistortedVision47 = symptom.find("straight lines appear wavy") != string::npos || symptom.find("distorted vision") != string::npos;
bool hasColorsFaded47 = symptom.find("colors appear faded") != string::npos || symptom.find("color vision changes") != string::npos;
bool hasDifficultyRecognizingFaces47 = symptom.find("difficulty recognizing faces") != string::npos || symptom.find("faces appear unclear") != string::npos;

if (hasBlurredCentralVision47 && hasDifficultyReading47 && hasDarkOrEmptyArea47 && hasDistortedVision47 && hasColorsFaded47 && hasDifficultyRecognizingFaces47) {
    suggestionName = "Macular Degeneration";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Macular degeneration is extremely rare in children. Pediatric ophthalmologist consultation recommended if present." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with early macular degeneration. Monitor vision and follow ophthalmologist guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate macular degeneration. Ophthalmologist consultation recommended for treatment planning." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced macular degeneration. Immediate ophthalmic intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with early macular degeneration. Regular eye check-ups recommended." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate macular degeneration. Specialist treatment may be required." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced macular degeneration. Immediate ophthalmic care required." << endl;
        }
    }
}

// Hearing Loss / Ear Infections
bool hasHearingDifficulty48 = symptom.find("hearing difficulty") != string::npos || symptom.find("hearing loss") != string::npos;
bool hasEarPain48 = symptom.find("ear pain") != string::npos || symptom.find("otalgia") != string::npos;
bool hasDischarge48 = symptom.find("ear discharge") != string::npos || symptom.find("pus from ear") != string::npos;
bool hasTinnitus48 = symptom.find("tinnitus") != string::npos || symptom.find("ringing in ear") != string::npos;
bool hasItching48 = symptom.find("itching") != string::npos || symptom.find("ear pruritus") != string::npos;
bool hasVertigo48 = symptom.find("vertigo") != string::npos || symptom.find("dizziness") != string::npos;

if (hasHearingDifficulty48 && hasEarPain48 && hasDischarge48 && hasTinnitus48 && hasItching48 && hasVertigo48) {
    suggestionName = "Hearing Loss / Ear Infection";
    matched1 = true;

    cout << "             - " << suggestionName << endl << endl;
    cout << "            RECOMMENDATION: " << endl << endl;

    // Children (<=5)
    if(age <= 5) {
        cout << "            Pediatric ear infection suspected. Consult pediatric ENT specialist for treatment." << endl;
    }
    // Adults (6–60)
    else if(age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with mild ear infection or hearing loss. Use prescribed ear drops or medications." << endl;
        } else if(severity == "moderate") {
            cout << "            Adult with moderate ear infection. ENT consultation recommended for further treatment." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe ear infection or sudden hearing loss. Immediate hospital intervention required." << endl;
        }
    }
    // Elderly (>60)
    else {
        if(severity == "minor") {
            cout << "            Elderly person with mild ear infection. Monitor and follow ENT guidance." << endl;
        } else if(severity == "moderate") {
            cout << "            Elderly person with moderate ear infection. ENT consultation recommended." << endl;
        } else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe ear infection or hearing loss. Immediate intervention required." << endl;
        }
    }
}


//Danger zone
        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched1) {
            getchar();
        }

        system("cls");
    }
}

