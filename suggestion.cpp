#include "cls.h"
 
 void detail::suggestion1(pair<string,float> best){
 if(best.first == "Common Cold" || best.first == "Dengue" || best.first == "Influenza (flu)" || best.first == "COVID-19" || best.first == "Tuberculosis"
   || best.first == "Hepatitis" || best.first == "Measles" || best.first == "Chicken pox" || best.first == "Malaria" || best.first == "HIV/AIDS"
   || best.first == "Hypertension (High Blood Pressure)" || best.first == "Coronary Artery Disease" || best.first == "Arrhythmias (Irregular Heartbeat)" 
   || best.first == "Heart Failure" || best.first == "Stroke" || best.first == "Peripheral Artery Disease" || best.first == "Asthma" 
   || best.first == "Chronic Obstructive Pulmonary Disease" || best.first == "Pneumonia" || best.first == "Bronchitis") {

    cout << endl << endl << endl;
    cout << "                                    ========== Suggestion For " << best.first << " ==========" << endl << endl;

    if(best.first == "Common Cold"){
        cout << "                                      - STAY HYDRATED AND REST WELL." << endl;
        cout << "                                      - MONITOR BODY TEMPERATURE REGULARLY." << endl;
        cout << "                                      - IF FEVER LASTS MORE THAN 3 DAYS, CONSULT A DOCTOR." << endl;
        cout << "                                      - AVOID SMOKING WHILE RECOVERING." << endl;
        cout << "                                      - CONTINUE TAKING PRESCRIBED MEDICATIONS LIKE PARACETAMOL." << endl;
    }
    else if(best.first == "Dengue"){
        cout << "                                      - STAY HYDRATED; DRINK ORAL REHYDRATION SOLUTION." << endl;
        cout << "                                      - MONITOR PLATELET COUNT REGULARLY." << endl;
        cout << "                                      - TAKE PARACETAMOL FOR FEVER; AVOID NSAIDs LIKE IBUPROFEN." << endl;
        cout << "                                      - GET MEDICAL ATTENTION IF SEVERE BLEEDING OCCURS." << endl;
    }
    else if(best.first == "Influenza (flu)"){
        cout << "                                      - REST AND STAY HYDRATED." << endl;
        cout << "                                      - MONITOR TEMPERATURE; USE ANTIVIRAL MEDICATION IF PRESCRIBED." << endl;
        cout << "                                      - AVOID CLOSE CONTACT TO PREVENT SPREAD." << endl;
    }
    else if(best.first == "COVID-19"){
        cout << "                                      - ISOLATE TO AVOID TRANSMISSION." << endl;
        cout << "                                      - STAY HYDRATED AND MONITOR OXYGEN LEVELS." << endl;
        cout << "                                      - TAKE PARACETAMOL FOR FEVER; SEEK MEDICAL HELP IF BREATHING DIFFICULTY." << endl;
    }
    else if(best.first == "Tuberculosis"){
        cout << "                                      - COMPLETE ANTITUBERCULOSIS MEDICATION COURSE." << endl;
        cout << "                                      - REGULAR MEDICAL CHECKUPS ARE ESSENTIAL." << endl;
        cout << "                                      - AVOID CLOSE CONTACT UNTIL NON-INFECTIOUS." << endl;
    }
    else if(best.first == "Hepatitis"){
        cout << "                                      - AVOID ALCOHOL AND HEPATOTOXIC DRUGS." << endl;
        cout << "                                      - MAINTAIN HYDRATION AND NUTRITION." << endl;
        cout << "                                      - FOLLOW UP WITH A HEPATOLOGIST REGULARLY." << endl;
    }
    else if(best.first == "Measles"){
        cout << "                                      - ISOLATE TO PREVENT SPREAD." << endl;
        cout << "                                      - STAY HYDRATED AND REST." << endl;
        cout << "                                      - MONITOR FOR COMPLICATIONS LIKE PNEUMONIA." << endl;
    }
    else if(best.first == "Chicken pox"){
        cout << "                                      - STAY ISOLATED TO PREVENT SPREAD." << endl;
        cout << "                                      - USE CALAMINE LOTION TO RELIEVE ITCHING." << endl;
        cout << "                                      - MONITOR FOR SECONDARY INFECTIONS." << endl;
    }
    else if(best.first == "Malaria"){
        cout << "                                      - TAKE PRESCRIBED ANTIMALARIAL MEDICATION." << endl;
        cout << "                                      - REST AND HYDRATE." << endl;
        cout << "                                      - SEEK MEDICAL ATTENTION IF FEVER PERSISTS OR COMPLICATIONS ARISE." << endl;
    }
    else if(best.first == "HIV/AIDS"){
        cout << "                                      - FOLLOW ANTIRETROVIRAL THERAPY AS PRESCRIBED." << endl;
        cout << "                                      - MAINTAIN GOOD NUTRITION AND HYGIENE." << endl;
        cout << "                                      - REGULARLY MONITOR CD4 COUNT AND VIRAL LOAD." << endl;
    }
    else if(best.first == "Hypertension (High Blood Pressure)"){
        cout << "                                      - REGULARLY MONITOR BLOOD PRESSURE." << endl;
        cout << "                                      - FOLLOW DOCTOR’S PRESCRIBED MEDICATION." << endl;
        cout << "                                      - REDUCE SALT INTAKE AND AVOID STRESS." << endl;
    }
    else if(best.first == "Coronary Artery Disease"){
        cout << "                                      - FOLLOW CARDIOLOGIST RECOMMENDATIONS." << endl;
        cout << "                                      - AVOID HIGH FAT FOODS AND STRESS." << endl;
        cout << "                                      - REGULAR EXERCISE IF ADVISED." << endl;
    }
    else if(best.first == "Arrhythmias (Irregular Heartbeat)"){
        cout << "                                      - FOLLOW MEDICATION AND CARDIOLOGIST ADVICE." << endl;
        cout << "                                      - AVOID CAFFEINE AND STRESSFUL SITUATIONS." << endl;
    }
    else if(best.first == "Heart Failure"){
        cout << "                                      - FOLLOW DIETARY RESTRICTIONS, ESPECIALLY SALT." << endl;
        cout << "                                      - MONITOR WEIGHT AND FLUID INTAKE DAILY." << endl;
        cout << "                                      - REGULAR CHECKUPS WITH CARDIOLOGIST." << endl;
    }
    else if(best.first == "Stroke"){
        cout << "                                      - SEEK IMMEDIATE MEDICAL ATTENTION." << endl;
        cout << "                                      - FOLLOW REHABILITATION PROGRAM." << endl;
        cout << "                                      - CONTROL BLOOD PRESSURE AND OTHER RISK FACTORS." << endl;
    }
    else if(best.first == "Peripheral Artery Disease"){
        cout << "                                      - REGULAR EXERCISE AND BLOOD CIRCULATION MONITORING." << endl;
        cout << "                                      - AVOID SMOKING." << endl;
        cout << "                                      - FOLLOW DOCTOR’S MEDICATION ADVICE." << endl;
    }
    else if(best.first == "Asthma"){
        cout << "                                      - USE INHALERS AS PRESCRIBED." << endl;
        cout << "                                      - AVOID TRIGGERS LIKE DUST AND POLLUTION." << endl;
        cout << "                                      - MONITOR BREATHING REGULARLY." << endl;
    }
    else if(best.first == "Chronic Obstructive Pulmonary Disease"){
        cout << "                                      - AVOID SMOKING AND POLLUTION." << endl;
        cout << "                                      - TAKE PRESCRIBED MEDICATIONS REGULARLY." << endl;
        cout << "                                      - MONITOR LUNG FUNCTION PERIODICALLY." << endl;
    }
    else if(best.first == "Pneumonia"){
        cout << "                                      - COMPLETE ANTIBIOTIC COURSE AS PRESCRIBED." << endl;
        cout << "                                      - STAY HYDRATED AND REST." << endl;
        cout << "                                      - MONITOR BREATHING; SEEK HELP IF WORSENS." << endl;
    }
    else if(best.first == "Bronchitis"){
        cout << "                                      - STAY HYDRATED AND REST." << endl;
        cout << "                                      - AVOID SMOKING AND POLLUTANTS." << endl;
        cout << "                                      - USE PRESCRIBED MEDICATIONS OR INHALERS." << endl;
    }
}

 }
