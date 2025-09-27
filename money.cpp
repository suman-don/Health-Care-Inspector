#include "cls.h"

void detail::money() {
    if (!matched1 && !matched2) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Common Cold") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 500 - RS: 1,500\n\n\n";
            cout << "                             - DOCTOR CONSULTATION:                      RS: 0 - RS: 500\n";
            cout << "                             - MEDICINES:                                RS: 200 - RS: 600\n";
            cout << "                             - OPTIONAL TEST:                             RS: 0 - RS: 1,000\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        } 
        else if (suggestionName == "Heart Attack") {
            cout << "                             Heart Attack Treatment Cost Estimates (in NPR):" << endl;
            cout << "                          -----------------------------------------------------------------------------" << endl;
            cout << "                             Ambulance:                       NPR 25,000 - NPR 100,000" << endl;
            cout << "                             Emergency Room Visit:            NPR 60,000 - NPR 375,000" << endl;
            cout << "                             Diagnostic Tests:                NPR 120,000 - NPR 625,000" << endl;
            cout << "                             Medications:                     NPR 12,000 - NPR 125,000" << endl;
            cout << "                             Hospital Stay (ICU + ward):      NPR 375,000 - NPR 1,875,000+ (per week)" << endl;
            cout << "                             Procedures (Angioplasty, Stent): NPR 1,250,000 - NPR 5,000,000+" << endl;
            cout << "                             Surgery (Bypass):                NPR 2,500,000 - NPR 8,750,000+" << endl;
            cout << "                             Follow-up Visits:                NPR 12,500 - NPR 62,500 per visit" << endl;
            cout << "                             Cardiac Rehabilitation:          NPR 62,500 - NPR 375,000" << endl;
            cout << "                          ------------------------------------------------------------------------------" << endl << endl;
            cout << "                             Total Estimated Cost Range:      NPR 1,875,000 to NPR 12,500,000+" << endl;
        }
        else if (suggestionName == "Influenza (Flu)") {
    cout << "                             Influenza (Flu) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (if needed):    NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (antivirals, OTC):    NPR 500 - NPR 3,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 2,500 to NPR 80,000+" << endl;
}
 else if (suggestionName == "COVID-19") {
    cout << "                             COVID-19 Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (PCR/Antigen):   NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Medications (antivirals, OTC):    NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Hospital Stay (Isolation/ICU):    NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Oxygen Therapy:                   NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 3,000 to NPR 150,000+" << endl;
}
else if (suggestionName == "Tuberculosis (TB)") {
    cout << "                             Tuberculosis (TB) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (X-ray, Sputum): NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (6–12 months course): NPR 2,000 - NPR 15,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 3,000 to NPR 90,000+" << endl;
}
else if (suggestionName == "Hepatitis (A,B,C)") {
    cout << "                             Hepatitis (A,B,C) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (Blood/Liver):  NPR 1,500 - NPR 7,500" << endl;
    cout << "                             Medications (Antivirals/Support): NPR 2,000 - NPR 20,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 3,000 to NPR 120,000+" << endl;
}
else if (suggestionName == "Measles/Mumps/Rubella") {
    cout << "                             MMR Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (if needed):    NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (OTC/Symptom relief): NPR 500 - NPR 3,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 10,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 2,500 to NPR 60,000+" << endl;
}
else if (suggestionName == "Chicken Pox") {
    cout << "                             Chicken Pox Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (if needed):    NPR 500 - NPR 2,000" << endl;
    cout << "                             Medications (OTC/Antivirals):     NPR 500 - NPR 5,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 10,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 2,000 to NPR 60,000+" << endl;
}
else if (suggestionName == "Malaria") {
    cout << "                             Malaria Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (Blood smear/RDT): NPR 500 - NPR 2,500" << endl;
    cout << "                             Medications (Anti-malarials):     NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 10,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 2,000 to NPR 60,000+" << endl;
}
else if (suggestionName == "HIV/AIDS") {
    cout << "                             HIV/AIDS Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (Blood/CD4/Viral): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (ART therapy):        NPR 5,000 - NPR 25,000 per month" << endl;
    cout << "                             Hospital Stay (if severe):       NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 7,000 to NPR 100,000+ (per month, depending on severity)" << endl;
}
else if (suggestionName == "Hypertension") {
    cout << "                             Hypertension Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation:             NPR 500 - NPR 2,500" << endl;
    cout << "                             Diagnostic Tests (BP monitoring, blood tests): NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (Daily):             NPR 1,000 - NPR 5,000 per month" << endl;
    cout << "                             Hospital Stay (if severe/complications): NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:      NPR 2,500 to NPR 80,000+ (per month depending on severity)" << endl;
}
else if (suggestionName == "Arrhythmias (Irregular Heartbeat)") {
    cout << "                             Arrhythmias Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Cardiologist):  NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (ECG, Holter, Echo): NPR 2,500 - NPR 15,000" << endl;
    cout << "                             Medications (Antiarrhythmic):         NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if severe/Procedure): NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Procedures (Pacemaker/Ablation):     NPR 150,000 - NPR 750,000+" << endl;
    cout << "                             Follow-up Visits:                     NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:           NPR 5,000 to NPR 750,000+" << endl;
}
else if (suggestionName == "Heart Failure") {
    cout << "                             Heart Failure Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Cardiologist):    NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (ECG, Echo, Blood):    NPR 2,500 - NPR 15,000" << endl;
    cout << "                             Medications (Daily):                    NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if severe):              NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Procedures (Pacemaker/Bypass if needed):NPR 150,000 - NPR 750,000+" << endl;
    cout << "                             Follow-up Visits:                        NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:              NPR 5,000 to NPR 750,000+" << endl;
}
else if (suggestionName == "Stroke / Cerebrovascular Accident (CVA)") {
    cout << "                             Stroke / CVA Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):        NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (CT/MRI, Blood Tests):  NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Anticoagulants/Antiplatelets): NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if severe):                NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Procedures (Thrombectomy/Clot Removal):   NPR 150,000 - NPR 750,000+" << endl;
    cout << "                             Rehabilitation Therapies:                  NPR 5,000 - NPR 50,000 per session" << endl;
    cout << "                             Follow-up Visits:                           NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:               NPR 10,000 to NPR 750,000+" << endl;
}
else if (suggestionName == "Peripheral Artery Disease (PAD)") {
    cout << "                             Peripheral Artery Disease (PAD) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Cardiologist/Angiologist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Doppler Ultrasound, Angiogram): NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Blood Thinners/Cholesterol): NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Procedures (Angioplasty, Bypass): NPR 150,000 - NPR 750,000+" << endl;
    cout << "                             Hospital Stay (if procedure needed): NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits: NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range: NPR 5,000 to NPR 750,000+" << endl;
}
else if (suggestionName == "Asthma") {
    cout << "                             Asthma Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Pulmonologist):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Spirometry, X-ray):    NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Inhalers, Steroids):       NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if severe attack):       NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                        NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:             NPR 3,000 to NPR 75,000+" << endl;
}
else if (suggestionName == "Chronic Obstructive Pulmonary Disease (COPD)") {
    cout << "                             COPD Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Pulmonologist):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Spirometry, X-ray, CT): NPR 2,000 - NPR 15,000" << endl;
    cout << "                             Medications (Inhalers, Steroids, Bronchodilators): NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Oxygen Therapy (if needed):             NPR 5,000 - NPR 50,000 per month" << endl;
    cout << "                             Hospital Stay (if severe):              NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                        NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:             NPR 3,000 to NPR 75,000+" << endl;
}
else if (suggestionName == "Pneumonia") {
    cout << "                             Pneumonia Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Pulmonologist/Pediatrician):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Chest X-ray, Blood Tests):        NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Antibiotics/Antivirals):             NPR 1,500 - NPR 10,000" << endl;
    cout << "                             Hospital Stay (if severe):                        NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Oxygen Therapy (if needed):                      NPR 5,000 - NPR 50,000 per month" << endl;
    cout << "                             Follow-up Visits:                                 NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 3,000 to NPR 75,000+" << endl;
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
    cout << "                             Lung Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist):                NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Diagnostic Tests (CT, PET Scan, Biopsy):         NPR 10,000 - NPR 150,000" << endl;
    cout << "                             Medications (Chemotherapy, Targeted Therapy):    NPR 50,000 - NPR 500,000 per cycle" << endl;
    cout << "                             Surgery (Lobectomy, Pneumonectomy):            NPR 500,000 - NPR 2,500,000+" << endl;
    cout << "                             Radiation Therapy:                               NPR 100,000 - NPR 500,000+" << endl;
    cout << "                             Hospital Stay (if needed):                      NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                                NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 200,000 to NPR 3,500,000+" << endl;
}
else if (suggestionName == "Diabetes") {
    cout << "                             Diabetes Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Endocrinologist):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood Sugar, HbA1c, Lipid Profile): NPR 500 - NPR 5,000" << endl;
    cout << "                             Medications (Insulin, Oral Hypoglycemics):  NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):          NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                NPR 2,000 to NPR 75,000+" << endl;
}
else if (suggestionName == "Thyroid Disorders") {
    cout << "                             Thyroid Disorders Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Endocrinologist):   NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (TSH, T3, T4, Ultrasound): NPR 1,000 - NPR 10,000" << endl;
    cout << "                             Medications (Thyroid Hormone/Anti-thyroid): NPR 500 - NPR 5,000 per month" << endl;
    cout << "                             Radioactive Iodine Therapy (if required):   NPR 50,000 - NPR 250,000" << endl;
    cout << "                             Surgery (Thyroidectomy, if needed):        NPR 200,000 - NPR 1,000,000" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                NPR 2,000 to NPR 1,000,000+" << endl;
}
else if (suggestionName == "Obesity") {
    cout << "                             Obesity Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Endocrinologist/Nutritionist):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (BMI, Blood Tests, Lipid Profile):    NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (if prescribed):                          NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Bariatric Surgery (if needed):                       NPR 500,000 - NPR 2,500,000+" << endl;
    cout << "                             Follow-up Visits:                                     NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                            NPR 2,000 to NPR 2,500,000+" << endl;
}
else if (suggestionName == "Metabolic Syndrome") {
    cout << "                             Metabolic Syndrome Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Endocrinologist/Cardiologist):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood Sugar, Lipid Profile, BP Monitoring): NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (for BP, Diabetes, Cholesterol):              NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):                        NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                                         NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                                NPR 2,000 to NPR 75,000+" << endl;
}



        getchar();
        getchar();
    }
}

