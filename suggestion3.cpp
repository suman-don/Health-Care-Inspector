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
else if (suggestionName == "Urinary Tract Infection (UTI)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT DOCTOR OR UROLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - TAKE PRESCRIBED ANTIBIOTICS COMPLETELY AS ADVISED." << endl;
    cout << "          - DRINK PLENTY OF WATER AND MAINTAIN HYGIENE." << endl;
    cout << "          - AVOID HOLDING URINE FOR LONG PERIODS." << endl;
    cout << "          - FOLLOW-UP TESTS TO ENSURE INFECTION IS CLEARED." << endl;
}
else if (suggestionName == "Kidney Stones") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEPHROLOGIST OR UROLOGIST FOR ACCURATE DIAGNOSIS AND TREATMENT." << endl;
    cout << "          - DRINK PLENTY OF WATER TO HELP PASS SMALL STONES." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS TO MANAGE PAIN OR STONE FORMATION." << endl;
    cout << "          - MAINTAIN DIETARY CHANGES AS ADVISED (REDUCE SALT, OXALATE-RICH FOODS)." << endl;
    cout << "          - SEEK IMMEDIATE CARE IF SEVERE PAIN, BLOOD IN URINE, OR FEVER OCCURS." << endl;
}
else if (suggestionName == "Chronic Kidney Disease (CKD)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEPHROLOGIST FOR REGULAR MONITORING AND TREATMENT." << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS AND DIETARY RESTRICTIONS." << endl;
    cout << "          - CONTROL BLOOD PRESSURE AND BLOOD SUGAR IF APPLICABLE." << endl;
    cout << "          - MAINTAIN HYDRATION AND AVOID NEPHROTOXIC DRUGS." << endl;
    cout << "          - REGULARLY MONITOR KIDNEY FUNCTION THROUGH BLOOD AND URINE TESTS." << endl;
}
else if (suggestionName == "Anemia") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT DOCTOR FOR DIAGNOSIS AND IRON/BLOOD TESTS." << endl;
    cout << "          - FOLLOW PRESCRIBED IRON OR VITAMIN SUPPLEMENTS." << endl;
    cout << "          - EAT IRON-RICH FOODS LIKE MEAT, SPINACH, AND LEGUMES." << endl;
    cout << "          - MANAGE ANY UNDERLYING CONDITIONS CAUSING ANEMIA." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO MONITOR HEMOGLOBIN LEVELS." << endl;
}
else if (suggestionName == "Leukemia / Lymphoma") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT HEMATOLOGIST OR ONCOLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED CHEMOTHERAPY, MEDICATIONS, OR IMMUNOTHERAPY." << endl;
    cout << "          - MAINTAIN GOOD NUTRITION AND HYDRATION DURING TREATMENT." << endl;
    cout << "          - MONITOR FOR SIGNS OF INFECTION OR BLEEDING." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO ASSESS TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Hemophilia") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT HEMATOLOGIST FOR DIAGNOSIS AND REGULAR MONITORING." << endl;
    cout << "          - AVOID INJURY AND TAKE PREVENTIVE MEASURES TO REDUCE BLEEDING RISK." << endl;
    cout << "          - USE PRESCRIBED CLOTTING FACTOR REPLACEMENT OR MEDICATIONS." << endl;
    cout << "          - MONITOR JOINT HEALTH AND MANAGE BLEEDING PROMPTLY." << endl;
    cout << "          - SEEK IMMEDIATE CARE IF SEVERE BLEEDING OCCURS." << endl;
}
else if (suggestionName == "Autoimmune Disorders (Lupus, Multiple Sclerosis)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT RHEUMATOLOGIST OR NEUROLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED IMMUNOSUPPRESSIVE OR DISEASE-MODIFYING MEDICATIONS." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND HYDRATION." << endl;
    cout << "          - AVOID INFECTIONS AND MANAGE STRESS EFFECTIVELY." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO MONITOR DISEASE PROGRESSION." << endl;
}
else if (suggestionName == "Lung Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT ONCOLOGIST FOR ACCURATE DIAGNOSIS AND TREATMENT PLAN." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS LIKE SURGERY, CHEMOTHERAPY, OR RADIOTHERAPY." << endl;
    cout << "          - AVOID SMOKING AND EXPOSURE TO LUNG IRRITANTS." << endl;
    cout << "          - MAINTAIN NUTRITION AND HYDRATION DURING TREATMENT." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO MONITOR TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Breast Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT ONCOLOGIST FOR ACCURATE DIAGNOSIS AND TREATMENT PLAN." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS LIKE SURGERY, CHEMOTHERAPY, OR RADIOTHERAPY." << endl;
    cout << "          - MONITOR BREAST HEALTH REGULARLY AND REPORT ANY CHANGES PROMPTLY." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND HYDRATION DURING TREATMENT." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO ASSESS TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Colon Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT ONCOLOGIST FOR ACCURATE DIAGNOSIS AND TREATMENT PLAN." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS LIKE SURGERY, CHEMOTHERAPY, OR RADIOTHERAPY." << endl;
    cout << "          - MONITOR BOWEL HABITS AND REPORT ANY CHANGES PROMPTLY." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND HYDRATION DURING TREATMENT." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO ASSESS TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Prostate Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT ONCOLOGIST FOR ACCURATE DIAGNOSIS AND TREATMENT PLAN." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS LIKE SURGERY, RADIOTHERAPY, OR HORMONAL THERAPY." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND HYDRATION DURING TREATMENT." << endl;
    cout << "          - MONITOR URINARY SYMPTOMS AND REPORT ANY CHANGES PROMPTLY." << endl;
    cout << "          - REGULAR FOLLOW-UP TESTS TO ASSESS TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Skin Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT DERMATOLOGIST OR ONCOLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS LIKE SURGERY, RADIOTHERAPY, OR IMMUNOTHERAPY." << endl;
    cout << "          - PROTECT SKIN FROM SUN EXPOSURE AND USE SUNSCREEN REGULARLY." << endl;
    cout << "          - MONITOR SKIN LESIONS AND REPORT ANY CHANGES PROMPTLY." << endl;
    cout << "          - REGULAR FOLLOW-UP VISITS TO MONITOR TREATMENT RESPONSE." << endl;
}
else if (suggestionName == "Depression") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT PSYCHIATRIST OR CLINICAL PSYCHOLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED THERAPIES INCLUDING COUNSELING, CBT, OR MEDICATIONS." << endl;
    cout << "          - MAINTAIN HEALTHY SLEEP, DIET, AND EXERCISE ROUTINE." << endl;
    cout << "          - AVOID ALCOHOL AND DRUGS THAT MAY WORSEN DEPRESSION." << endl;
    cout << "          - SEEK IMMEDIATE HELP IF SUICIDAL THOUGHTS OR SEVERE SYMPTOMS OCCUR." << endl;
}
else if (suggestionName == "Anxiety Disorders") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT PSYCHIATRIST OR CLINICAL PSYCHOLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED THERAPIES INCLUDING COUNSELING, CBT, OR MEDICATIONS." << endl;
    cout << "          - PRACTICE RELAXATION TECHNIQUES, DEEP BREATHING, AND MINDFULNESS." << endl;
    cout << "          - MAINTAIN HEALTHY SLEEP, DIET, AND EXERCISE ROUTINE." << endl;
    cout << "          - SEEK IMMEDIATE HELP IF SEVERE SYMPTOMS OR PANIC ATTACKS OCCUR." << endl;
}
else if (suggestionName == "Bipolar Disorder") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT PSYCHIATRIST OR CLINICAL PSYCHOLOGIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED TREATMENTS INCLUDING MEDICATIONS (MOOD STABILIZERS) AND PSYCHOTHERAPY." << endl;
    cout << "          - MAINTAIN REGULAR SLEEP, DIET, AND EXERCISE ROUTINE." << endl;
    cout << "          - MONITOR MOOD CHANGES AND REPORT ANY EXTREME BEHAVIOR PROMPTLY." << endl;
    cout << "          - SEEK IMMEDIATE HELP IF SUICIDAL THOUGHTS OR MANIC EPISODES OCCUR." << endl;
}
else if (suggestionName == "Schizophrenia") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT PSYCHIATRIST FOR ACCURATE DIAGNOSIS AND MANAGEMENT." << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS (ANTIPSYCHOTICS) AND PSYCHOTHERAPY." << endl;
    cout << "          - MAINTAIN CONSISTENT ROUTINE, HEALTHY DIET, AND SLEEP HABITS." << endl;
    cout << "          - MONITOR SYMPTOMS AND REPORT ANY SEVERE PSYCHOTIC EPISODES PROMPTLY." << endl;
    cout << "          - SUPPORT FROM FAMILY AND CAREGIVERS IS IMPORTANT." << endl;
}
else if (suggestionName == "Dementia") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEUROLOGIST OR GERIATRIC SPECIALIST FOR ACCURATE DIAGNOSIS." << endl;
    cout << "          - FOLLOW PRESCRIBED MEDICATIONS TO SLOW COGNITIVE DECLINE." << endl;
    cout << "          - ENGAGE IN COGNITIVE THERAPY, PUZZLES, AND MEMORY EXERCISES." << endl;
    cout << "          - MAINTAIN HEALTHY LIFESTYLE, DIET, AND SOCIAL INTERACTIONS." << endl;
    cout << "          - MONITOR SAFETY AND DAILY FUNCTIONALITY; PROVIDE CAREGIVER SUPPORT." << endl;
}



        getchar();
        getchar();
    }
}

