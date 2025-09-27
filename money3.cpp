#include "cls.h"

void detail::money3() {
    if (!matched1 && !matched) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Asthma") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 3,000 - RS: 8,000\n\n\n";
            cout << "                             - DOCTOR CONSULTATION:                            RS: 0 - RS: 1,000\n";
            cout << "                             - EMERGENCY TREATMENT (if attack is severe):      RS: 1,000 - RS: 3,500\n";
            cout << "                             - MEDICINES:                                      RS: 650 - RS: 2,000\n";
            cout << "                             - TESTS:                                          RS: 0 - RS: 2,800\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        } else if (suggestionName == "Typhoid Fever") {
          cout << "\n\n                                       Illness: " << suggestionName;
          cout << "\n                                       Estimated Cost:                    RS: 4,000 - RS: 10,000\n\n\n";
          cout << "                             - DOCTOR CONSULTATION:                            RS: 500 - RS: 1,500\n";
          cout << "                             - HOSPITALIZATION (if severe complications):      RS: 2,000 - RS: 5,000\n";
          cout << "                             - MEDICINES / ANTIBIOTICS:                        RS: 700 - RS: 2,500\n";
          cout << "                             - TESTS (blood, stool, urine):                    RS: 500 - RS: 2,000\n";
          cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
          cout << "                             GOVERNMENT HOSPITALS ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
          cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCE IF AVAILABLE.\n";
}
else if (suggestionName == "Urinary Tract Infection (UTI)") {
    cout << "                             Urinary Tract Infection (UTI) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Urologist/Physician): NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Urine Routine, Culture):  NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Medications (Antibiotics, Analgesics):     NPR 500 - NPR 5,000 per course" << endl;
    cout << "                             Hospitalization (if severe):               NPR 5,000 - NPR 25,000 per day" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                NPR 500 to NPR 25,000+" << endl;
}
else if (suggestionName == "Kidney Stones") {
    cout << "                             Kidney Stones Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Urologist/Nephrologist): NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Ultrasound, CT Scan, Urine Analysis): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Pain Relief, Stone Dissolving):   NPR 500 - NPR 5,000 per course" << endl;
    cout << "                             Lithotripsy / Surgery:                          NPR 20,000 - NPR 100,000 per procedure" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 500 to NPR 100,000+" << endl;
}
else if (suggestionName == "Chronic Kidney Disease (CKD)") {
    cout << "                             Chronic Kidney Disease (CKD) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Nephrologist):          NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Blood, Urine, Imaging):     NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Blood Pressure, Kidney Drugs):  NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Dialysis (if needed):                         NPR 3,000 - NPR 5,000 per session" << endl;
    cout << "                             Follow-up Visits:                              NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                   NPR 1,500 to NPR 10,000+ per month" << endl;
}
else if (suggestionName == "Anemia") {
    cout << "                             Anemia Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Physician/Hematologist):  NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Blood Count, Iron Tests):     NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Medications (Iron, Vitamins):                  NPR 500 - NPR 3,000 per month" << endl;
    cout << "                             Blood Transfusion (if severe):                NPR 5,000 - NPR 25,000 per session" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                   NPR 500 to NPR 25,000+" << endl;
}
else if (suggestionName == "Leukemia / Lymphoma") {
    cout << "                             Leukemia / Lymphoma Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Hematologist/Oncologist):  NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood, Bone Marrow, Imaging):  NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Chemotherapy, Targeted Therapy):    NPR 20,000 - NPR 200,000 per cycle" << endl;
    cout << "                             Hospitalization (if needed):                   NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                                NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 5,000 to NPR 200,000+" << endl;
}
else if (suggestionName == "Hemophilia") {
    cout << "                             Hemophilia Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Hematologist):       NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood Clotting Factors): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Clotting Factor Replacement): NPR 10,000 - NPR 200,000 per dose" << endl;
    cout << "                             Hospitalization (if severe bleeding):     NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:               NPR 10,000 to NPR 200,000+" << endl;
}
else if (suggestionName == "Autoimmune Disorders (Lupus, Multiple Sclerosis)") {
    cout << "                             Autoimmune Disorders (Lupus, MS) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Rheumatologist/Neurologist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood, MRI, Autoantibodies):    NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Immunosuppressants, DMARDs, Biologics): NPR 5,000 - NPR 200,000 per month" << endl;
    cout << "                             Hospitalization (if complications):            NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                   NPR 5,000 to NPR 200,000+ per month" << endl;
}
else if (suggestionName == "Lung Cancer") {
    cout << "                             Lung Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist):              NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (CT, Biopsy, PET Scan):       NPR 10,000 - NPR 100,000" << endl;
    cout << "                             Medications (Chemotherapy, Targeted Therapy): NPR 20,000 - NPR 200,000 per cycle" << endl;
    cout << "                             Surgery (if applicable):                       NPR 50,000 - NPR 500,000" << endl;
    cout << "                             Hospitalization (if complications):           NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 10,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Breast Cancer") {
    cout << "                             Breast Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist):              NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Mammogram, Biopsy, Imaging):  NPR 10,000 - NPR 100,000" << endl;
    cout << "                             Medications (Chemotherapy, Targeted Therapy):   NPR 20,000 - NPR 200,000 per cycle" << endl;
    cout << "                             Surgery (if applicable):                        NPR 50,000 - NPR 500,000" << endl;
    cout << "                             Hospitalization (if complications):            NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                                NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 10,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Colon Cancer") {
    cout << "                             Colon Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist):               NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Colonoscopy, Biopsy, Imaging): NPR 10,000 - NPR 100,000" << endl;
    cout << "                             Medications (Chemotherapy, Targeted Therapy):    NPR 20,000 - NPR 200,000 per cycle" << endl;
    cout << "                             Surgery (if applicable):                         NPR 50,000 - NPR 500,000" << endl;
    cout << "                             Hospitalization (if complications):             NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                                NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 10,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Prostate Cancer") {
    cout << "                             Prostate Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist):             NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (PSA, Biopsy, Imaging):      NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Hormonal Therapy, Chemotherapy): NPR 20,000 - NPR 150,000 per cycle" << endl;
    cout << "                             Surgery (if applicable):                      NPR 50,000 - NPR 500,000" << endl;
    cout << "                             Hospitalization (if complications):          NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                              NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 10,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Skin Cancer") {
    cout << "                             Skin Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist/Oncologist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Biopsy, Imaging, Blood Tests):  NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Topical, Chemotherapy, Immunotherapy): NPR 5,000 - NPR 150,000 per month" << endl;
    cout << "                             Surgery (if applicable):                         NPR 50,000 - NPR 500,000" << endl;
    cout << "                             Hospitalization (if complications):            NPR 15,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 5,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Depression") {
    cout << "                             Depression Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Psychiatrist):          NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Therapy Sessions (CBT, Counseling):           NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Medications (Antidepressants):                NPR 1,000 - NPR 5,000 per month" << endl;
    cout << "                             Hospitalization (if severe or suicidal risk): NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 2,000 to NPR 50,000+" << endl;
}
else if (suggestionName == "Anxiety Disorders") {
    cout << "                             Anxiety Disorders Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Psychiatrist):           NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Therapy Sessions (CBT, Counseling):           NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Medications (Anti-anxiety drugs):            NPR 1,000 - NPR 5,000 per month" << endl;
    cout << "                             Hospitalization (if severe panic or complications): NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                              NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 2,000 to NPR 50,000+" << endl;
}
else if (suggestionName == "Bipolar Disorder") {
    cout << "                             Bipolar Disorder Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Psychiatrist):           NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Therapy Sessions (CBT, Counseling):           NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Medications (Mood Stabilizers, Antidepressants): NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Hospitalization (if severe manic or depressive episode): NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                              NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 2,000 to NPR 50,000+" << endl;
}
else if (suggestionName == "Schizophrenia") {
    cout << "                             Schizophrenia Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Psychiatrist):          NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Therapy Sessions (CBT, Counseling):          NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Medications (Antipsychotics):               NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Hospitalization (if severe psychotic episode): NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                              NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 2,000 to NPR 50,000+" << endl;
}
else if (suggestionName == "Dementia") {
    cout << "                             Dementia Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):            NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Cognitive Assessments, MRI, CT): NPR 5,000 - NPR 50,000" << endl;
    cout << "                             Medications (Cognitive Enhancers):           NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Therapy & Rehabilitation:                     NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Hospitalization (if complications):          NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                              NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 2,000 to NPR 50,000+" << endl;
}



        getchar();
        getchar();
    }
}

