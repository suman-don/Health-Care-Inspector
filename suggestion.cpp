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
		else if (suggestionName == "Influenza (Flu)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - GET PLENTY OF REST." << endl;
    cout << "          - STAY HYDRATED." << endl;
    cout << "          - TAKE OVER-THE-COUNTER MEDICATION FOR FEVER AND PAIN IF NEEDED." << endl;
    cout << "          - AVOID CLOSE CONTACT WITH OTHERS TO PREVENT SPREAD." << endl;
    cout << "          - CONSULT A DOCTOR IF SYMPTOMS WORSEN OR PERSIST." << endl;
}
else if (suggestionName == "COVID-19") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - ISOLATE TO PREVENT SPREAD." << endl;
    cout << "          - WEAR MASK AND PRACTICE HAND HYGIENE." << endl;
    cout << "          - MONITOR SYMPTOMS (Fever, Oxygen, Breathing)." << endl;
    cout << "          - CONSULT A DOCTOR IF SYMPTOMS WORSEN OR PERSIST." << endl;
}
else if (suggestionName == "Tuberculosis (TB)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW PRESCRIBED ANTI-TB MEDICATIONS COMPLETELY." << endl;
    cout << "          - MAINTAIN A NUTRITIOUS DIET TO SUPPORT IMMUNITY." << endl;
    cout << "          - AVOID CLOSE CONTACT WITH OTHERS UNTIL CLEARED BY DOCTOR." << endl;
    cout << "          - REGULARLY MONITOR SYMPTOMS AND CHEST HEALTH." << endl;
    cout << "          - CONSULT DOCTOR IF SYMPTOMS PERSIST OR WORSEN." << endl;
}
else if (suggestionName == "Hepatitis (A,B,C)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW DOCTOR-PRESCRIBED TREATMENT AND MEDICATIONS." << endl;
    cout << "          - AVOID ALCOHOL AND TOXIC SUBSTANCES." << endl;
    cout << "          - EAT A NUTRITIOUS DIET TO SUPPORT LIVER FUNCTION." << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - MONITOR SYMPTOMS AND REGULARLY CHECK LIVER FUNCTION." << endl;
}
else if (suggestionName == "Measles/Mumps/Rubella") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - ISOLATE TO PREVENT SPREAD TO OTHERS." << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - MONITOR TEMPERATURE AND SYMPTOMS REGULARLY." << endl;
    cout << "          - CONSULT A DOCTOR IF SYMPTOMS WORSEN OR PERSIST." << endl;
    cout << "          - ENSURE VACCINATION STATUS IS UP TO DATE (MMR VACCINE)." << endl;
}
else if (suggestionName == "Chicken Pox") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - AVOID SCRATCHING THE RASH TO PREVENT INFECTION." << endl;
    cout << "          - USE CALAMINE LOTION OR OTC MEDICATION FOR ITCHING." << endl;
    cout << "          - ISOLATE TO PREVENT SPREAD TO OTHERS." << endl;
    cout << "          - CONSULT DOCTOR IF SYMPTOMS WORSEN OR COMPLICATIONS ARISE." << endl;
}
else if (suggestionName == "Malaria") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - TAKE PRESCRIBED ANTI-MALARIAL MEDICATION COMPLETELY." << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - MONITOR TEMPERATURE AND SYMPTOMS REGULARLY." << endl;
    cout << "          - AVOID MOSQUITO BITES (USE NETS, REPELLENTS)." << endl;
    cout << "          - CONSULT A DOCTOR IF SYMPTOMS WORSEN OR PERSIST." << endl;
}
else if (suggestionName == "HIV/AIDS") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW ANTIRETROVIRAL THERAPY (ART) AS PRESCRIBED." << endl;
    cout << "          - MAINTAIN A NUTRITIOUS DIET AND STAY HYDRATED." << endl;
    cout << "          - AVOID INFECTION EXPOSURE AND PRACTICE SAFE SEX." << endl;
    cout << "          - REGULARLY MONITOR CD4 COUNT AND VIRAL LOAD." << endl;
    cout << "          - CONSULT DOCTOR PROMPTLY IF SYMPTOMS WORSEN OR NEW INFECTIONS APPEAR." << endl;
}
else if (suggestionName == "Hypertension") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - MONITOR BLOOD PRESSURE REGULARLY." << endl;
    cout << "          - MAINTAIN A LOW-SALT, BALANCED DIET." << endl;
    cout << "          - EXERCISE REGULARLY AND MAINTAIN HEALTHY WEIGHT." << endl;
    cout << "          - AVOID STRESS, ALCOHOL, AND SMOKING." << endl;
    cout << "          - TAKE PRESCRIBED ANTI-HYPERTENSIVE MEDICATIONS CONSISTENTLY." << endl;
}
else if (suggestionName == "Arrhythmias (Irregular Heartbeat)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT A CARDIOLOGIST REGULARLY AND FOLLOW MEDICATIONS." << endl;
    cout << "          - AVOID CAFFEINE, ALCOHOL, AND STRESSFUL SITUATIONS." << endl;
    cout << "          - MONITOR HEART RATE AND KEEP A RECORD OF PALPITATIONS." << endl;
    cout << "          - MAINTAIN A HEALTHY DIET AND REGULAR EXERCISE." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF SEVERE SYMPTOMS OCCUR." << endl;
}
else if (suggestionName == "Heart Failure") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS (DIURETICS, ACE INHIBITORS, BETA-BLOCKERS)." << endl;
    cout << "          - LIMIT SALT INTAKE AND MAINTAIN HEALTHY DIET." << endl;
    cout << "          - MONITOR WEIGHT DAILY TO TRACK FLUID RETENTION." << endl;
    cout << "          - REGULARLY MONITOR BLOOD PRESSURE AND HEART RATE." << endl;
    cout << "          - CONSULT DOCTOR PROMPTLY IF SYMPTOMS WORSEN." << endl;
}
else if (suggestionName == "Stroke / Cerebrovascular Accident (CVA)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - SEEK EMERGENCY MEDICAL CARE IMMEDIATELY IF SYMPTOMS OCCUR." << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS (ANTICOAGULANTS, ANTIPLATELETS)." << endl;
    cout << "          - UNDERGO REHABILITATION THERAPIES (PHYSICAL, OCCUPATIONAL, SPEECH)." << endl;
    cout << "          - MANAGE BLOOD PRESSURE, DIABETES, AND CHOLESTEROL LEVELS." << endl;
    cout << "          - AVOID SMOKING, ALCOHOL, AND STRESSFUL LIFESTYLE HABITS." << endl;
}
else if (suggestionName == "Peripheral Artery Disease (PAD)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - QUIT SMOKING AND AVOID TOBACCO PRODUCTS." << endl;
    cout << "          - EXERCISE REGULARLY TO IMPROVE BLOOD FLOW." << endl;
    cout << "          - MAINTAIN A HEALTHY DIET AND CONTROL BLOOD SUGAR/CHOLSTEROL." << endl;
    cout << "          - MANAGE BLOOD PRESSURE AND OTHER CARDIOVASCULAR RISKS." << endl;
    cout << "          - CONSULT DOCTOR FOR MEDICATIONS OR PROCEDURES IF SYMPTOMS WORSEN." << endl;
}
else if (suggestionName == "Asthma") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - USE PRESCRIBED INHALERS AND MEDICATIONS REGULARLY." << endl;
    cout << "          - AVOID TRIGGERS (DUST, POLLEN, SMOKE, STRONG SCENTS)." << endl;
    cout << "          - MONITOR BREATHING AND PEAK FLOW REGULARLY." << endl;
    cout << "          - MAINTAIN A HEALTHY LIFESTYLE AND EXERCISE SAFELY." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF BREATHING DIFFICULTIES WORSEN." << endl;
}
else if (suggestionName == "Chronic Obstructive Pulmonary Disease (COPD)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID SMOKING AND SECONDHAND SMOKE." << endl;
    cout << "          - USE PRESCRIBED INHALERS, BRONCHODILATORS, AND MEDICATIONS." << endl;
    cout << "          - MONITOR BREATHING AND OXYGEN LEVELS REGULARLY." << endl;
    cout << "          - FOLLOW PULMONARY REHABILITATION PROGRAMS IF ADVISED." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF BREATHING WORSENS." << endl;
}
else if (suggestionName == "Pneumonia") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - TAKE PRESCRIBED ANTIBIOTICS OR ANTIVIRAL MEDICATIONS." << endl;
    cout << "          - GET PLENTY OF REST AND STAY HYDRATED." << endl;
    cout << "          - MONITOR TEMPERATURE AND BREATHING REGULARLY." << endl;
    cout << "          - AVOID SMOKING AND AIR POLLUTION." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF BREATHING DIFFICULTIES WORSEN." << endl;
}
else if (suggestionName == "Bronchitis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS (ANTIBIOTICS OR BRONCHODILATORS IF ADVISED)." << endl;
    cout << "          - REST AND STAY HYDRATED." << endl;
    cout << "          - AVOID SMOKING AND AIR POLLUTION." << endl;
    cout << "          - USE HUMIDIFIERS TO EASE BREATHING IF NECESSARY." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF SYMPTOMS WORSEN." << endl;
}
else if (suggestionName == "Lung Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - SEEK IMMEDIATE ONCOLOGY CONSULTATION FOR DIAGNOSIS AND TREATMENT." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS (SURGERY, CHEMOTHERAPY, RADIOTHERAPY)." << endl;
    cout << "          - AVOID SMOKING AND SECONDHAND SMOKE." << endl;
    cout << "          - MAINTAIN A HEALTHY DIET AND SUPPORTIVE CARE." << endl;
    cout << "          - MONITOR SYMPTOMS AND SEEK MEDICAL HELP PROMPTLY IF THEY WORSEN." << endl;
}
else if (suggestionName == "Diabetes") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - MONITOR BLOOD SUGAR REGULARLY." << endl;
    cout << "          - FOLLOW A HEALTHY DIET AND CONTROL CARBOHYDRATE INTAKE." << endl;
    cout << "          - EXERCISE REGULARLY AND MAINTAIN HEALTHY WEIGHT." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS OR INSULIN AS DIRECTED." << endl;
    cout << "          - REGULARLY CHECK FOR COMPLICATIONS AND CONSULT DOCTOR PROMPTLY." << endl;
}
else if (suggestionName == "Thyroid Disorders") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - MONITOR THYROID HORMONE LEVELS REGULARLY." << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS (THYROID HORMONE OR ANTI-THYROID DRUGS)." << endl;
    cout << "          - MAINTAIN A BALANCED DIET AND HEALTHY LIFESTYLE." << endl;
    cout << "          - MONITOR HEART RATE, WEIGHT, AND ENERGY LEVELS." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF SYMPTOMS WORSEN." << endl;
}
else if (suggestionName == "Obesity") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW A BALANCED DIET AND REDUCE CALORIE INTAKE." << endl;
    cout << "          - EXERCISE REGULARLY AND MAINTAIN ACTIVE LIFESTYLE." << endl;
    cout << "          - MONITOR BODY WEIGHT AND BMI REGULARLY." << endl;
    cout << "          - SEEK GUIDANCE FROM NUTRITIONIST OR DOCTOR FOR WEIGHT MANAGEMENT." << endl;
    cout << "          - MANAGE COMORBIDITIES LIKE DIABETES, HYPERTENSION, AND HEART DISEASE." << endl;
}
else if (suggestionName == "Metabolic Syndrome") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - FOLLOW A HEALTHY DIET LOW IN SUGAR AND SATURATED FAT." << endl;
    cout << "          - EXERCISE REGULARLY AND MAINTAIN HEALTHY WEIGHT." << endl;
    cout << "          - MONITOR BLOOD PRESSURE, BLOOD SUGAR, AND CHOLESTEROL REGULARLY." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS FOR HYPERTENSION, DIABETES, OR DYS-LIPIDEMIA." << endl;
    cout << "          - SEEK MEDICAL GUIDANCE TO REDUCE CARDIOVASCULAR RISK." << endl;
}



        getchar();
        getchar();
    }
}

