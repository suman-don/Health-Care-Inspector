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
        bool hasFever = symptom.find("fever") != string::npos;
        bool hasCough = symptom.find("cough") != string::npos;
        bool hasSoreThroat = symptom.find("sorethroat") != string::npos || symptom.find("sore throat") != string::npos;
        bool hasFatigue = symptom.find("fatigue") != string::npos;
        bool hasHeadache = symptom.find("headache") != string::npos;
        bool hasStomachPain = symptom.find("stomachpain") != string::npos || symptom.find("stomach pain") != string::npos;

        if (hasFever && hasCough && hasSoreThroat && hasFatigue && hasHeadache && hasStomachPain) {
            suggestionName = "Common Cold";
            cout << "             - " << suggestionName;
            matched = true;
             
             if(suggestionName == medicalHistory || medicalHistory == "CommonCold" || medicalHistory == "commoncold" || medicalHistory == "common cold"){
             	cout<<"\n\n\n            ALERT!!!\n";
             	cout<<"          - Your medical history shows "<<suggestionName<<" and your current symptoms suggest another "<<suggestionName<<" episode.\n";
             	cout<<"            Since this illness is recurring , please take precautions.";
			 }
 
 
                 cout << "\n\n\n\n            RECOMMENDATION: " << endl << endl;
                 
            if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Young child with a minor headache for a short duration. Rest, hydrate, and monitor symptoms." << endl;
            else
                cout << "            ALERT: Young child has had a minor headache for 3 or more days. Monitor closely and consult a doctor if it continues." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Young child with a moderate headache for a short duration. Keep them rested and hydrated. Consult a doctor if symptoms persist or worsen." << endl;
            else
                cout << "            ALERT: Young child has had a moderate headache for 3 or more days. Seek medical advice promptly." << endl;
        }
        else if(severity == "serious") {
            if(duration <= 3)
                cout << "            Young child with a serious headache. Seek medical attention immediately!" << endl;
            else
                cout << "            EMERGENCY: Young child has had a serious headache for 3 or more days! Seek immediate medical help!" << endl;
        }
    }

    // Adults (5–60)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with a minor headache for a short duration. Rest, hydrate, and monitor symptoms." << endl;
            else
                cout << "            Adult with a minor headache lasting 3 or more days. Monitor symptoms and consult a doctor if it continues." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Adult with a moderate headache for a short duration. Rest, avoid stress, and consult a doctor if it persists." << endl;
            else
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
            
             if(suggestionName == medicalHistory || medicalHistory == "heartattack" || medicalHistory == "heart attack" || medicalHistory == "HeartAttack"){
             	cout<<"\n\n\n            ALERT!!!\n";
             	cout<<"          - Your medical history shows "<<suggestionName<<" and your current symptoms suggest another "<<suggestionName<<" episode.\n";
             	cout<<"            Since this illness is recurring , please take precautions.";
			 }
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

        cout << endl << endl << endl << "                                      PLEASE PRESS ENTER BUTTON TO GET OPTION..";
        if (matched) {
            getchar();
        }

        system("cls");
    }
}

