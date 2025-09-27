#include "cls.h"

void detail::suggestion2() {
    if (!matched && !matched2) {

        cout << "\n\n          SUGGESTION:" << endl << endl;
        cout << "          HELLO, " << name << " (AGE: " << age << ", " << gender << ")";
        cout << endl << "           YOU HAVE THE FOLLOWING SYMPTOMS: [" << symptom << "]" << endl;
        cout << endl << "          - DURATION: " << duration << " DAYS";
        cout << endl << "          - SEVERITY: " << severity << endl;

        cout << endl << endl << "          POSSIBLE CONDITIONS: ";
        cout << endl << "          - " << suggestionName << endl;

        if (suggestionName == "Dengue") {
            cout << endl << endl << "          SUGGESTIONS: " << endl;
            cout << "          - Drink lots of fluids (water, coconut water, ORS, juice) to avoid dehydration." << endl;
            cout << "          - Take enough rest. Avoid physical exertion." << endl;
            cout << "          - For fever and pain, take Paracetamol only." << endl;
            cout << "          - Keep track of fever, rashes, vomiting, and signs of bleeding (like gum or nose bleeds)." << endl;
            cout << "          - Papaya leaf juice is believed (not medically proven) to help increase platelet count." << endl;
        }
else if (suggestionName == "Gastritis / GERD") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID SPICY, OILY, AND ACIDIC FOODS." << endl;
    cout << "          - EAT SMALL FREQUENT MEALS AND AVOID LATE NIGHT EATING." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS LIKE ANTACIDS OR PROTON PUMP INHIBITORS." << endl;
    cout << "          - AVOID ALCOHOL, SMOKING, AND CAFFEINE." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF SYMPTOMS WORSEN OR BLEEDING OCCURS." << endl;
}
else if (suggestionName == "Peptic Ulcer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID SPICY, OILY, AND ACIDIC FOODS." << endl;
    cout << "          - AVOID NSAIDs (painkillers like ibuprofen) WITHOUT DOCTOR APPROVAL." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS LIKE ANTACIDS, H2 BLOCKERS, OR PROTON PUMP INHIBITORS." << endl;
    cout << "          - EAT SMALL FREQUENT MEALS AND AVOID LATE NIGHT EATING." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF BLEEDING, SEVERE PAIN, OR VOMITING OCCURS." << endl;
}
else if (suggestionName == "Liver Disease") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID ALCOHOL COMPLETELY." << endl;
    cout << "          - EAT A BALANCED DIET WITH LOW FAT AND HIGH FIBER." << endl;
    cout << "          - AVOID HEAVY OR FRIED FOODS." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS FOR HEPATITIS, CIRRHOSIS, OR FATTY LIVER." << endl;
    cout << "          - MONITOR WEIGHT AND BLOOD SUGAR REGULARLY." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF SWELLING, BLEEDING, OR CONFUSION OCCURS." << endl;
}
else if (suggestionName == "Gallstones") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID HIGH-FAT AND FRIED FOODS." << endl;
    cout << "          - EAT SMALL FREQUENT MEALS TO REDUCE BILE STASIS." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS IF DOCTOR RECOMMENDS (e.g., pain management or bile acid therapy)." << endl;
    cout << "          - SEEK SURGICAL CONSULTATION IF PAIN PERSISTS OR COMPLICATIONS OCCUR." << endl;
    cout << "          - MAINTAIN A HEALTHY WEIGHT AND REGULAR EXERCISE." << endl;
}
else if (suggestionName == "Irritable Bowel Syndrome (IBS)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - AVOID TRIGGER FOODS LIKE SPICY, FRIED, OR DAIRY PRODUCTS." << endl;
    cout << "          - EAT SMALL FREQUENT MEALS AND MAINTAIN HYDRATION." << endl;
    cout << "          - MANAGE STRESS, AS IT CAN TRIGGER SYMPTOMS." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS LIKE ANTISPASMODICS OR FIBER SUPPLEMENTS." << endl;
    cout << "          - KEEP A FOOD AND SYMPTOM DIARY TO IDENTIFY TRIGGERS." << endl;
    cout << "          - SEEK MEDICAL HELP IF SYMPTOMS PERSIST OR WORSEN." << endl;
}
else if (suggestionName == "Colorectal Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL EVALUATION AND COLONOSCOPY." << endl;
    cout << "          - FOLLOW DOCTOR'S TREATMENT PLAN (SURGERY, CHEMOTHERAPY, RADIATION IF NEEDED)." << endl;
    cout << "          - MAINTAIN A HIGH-FIBER, LOW-FAT DIET." << endl;
    cout << "          - AVOID SMOKING AND ALCOHOL." << endl;
    cout << "          - MONITOR SYMPTOMS AND FOLLOW-UP REGULARLY WITH ONCOLOGIST." << endl;
}
else if (suggestionName == "Migraine / Headache Disorders") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - IDENTIFY AND AVOID TRIGGERS (STRESS, CERTAIN FOODS, SLEEP DEPRIVATION)." << endl;
    cout << "          - TAKE PRESCRIBED MEDICATIONS LIKE PAINKILLERS, TRIPTANS, OR PREVENTIVE DRUGS." << endl;
    cout << "          - MAINTAIN REGULAR SLEEP, HYDRATION, AND NUTRITION." << endl;
    cout << "          - REST IN A DARK, QUIET ROOM DURING MIGRAINE ATTACKS." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF HEADACHE IS SUDDEN, SEVERE, OR DIFFERENT FROM USUAL." << endl;
}
else if (suggestionName == "Epilepsy") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - TAKE PRESCRIBED ANTIEPILEPTIC MEDICATIONS REGULARLY." << endl;
    cout << "          - AVOID SLEEP DEPRIVATION, ALCOHOL, AND STRESS." << endl;
    cout << "          - ENSURE SAFETY DURING SEIZURES (REMOVE SHARP OBJECTS, USE SOFT SURFACES)." << endl;
    cout << "          - MONITOR SEIZURE TRIGGERS AND KEEP A SEIZURE DIARY." << endl;
    cout << "          - SEEK MEDICAL HELP PROMPTLY IF SEIZURES INCREASE OR CHANGE IN CHARACTER OCCURS." << endl;
}
else if (suggestionName == "Alzheimer's Disease") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEUROLOGIST FOR DIAGNOSIS AND TREATMENT OPTIONS." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE CHOLINESTERASE INHIBITORS OR MEMANTINE." << endl;
    cout << "          - MAINTAIN COGNITIVE ACTIVITY THROUGH PUZZLES, READING, OR MEMORY EXERCISES." << endl;
    cout << "          - ENSURE A SAFE ENVIRONMENT TO PREVENT INJURIES." << endl;
    cout << "          - SUPPORT SOCIAL INTERACTIONS AND MONITOR MOOD CHANGES." << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL HELP IF SYMPTOMS WORSEN OR SAFETY IS COMPROMISED." << endl;
}
else if (suggestionName == "Parkinson's Disease") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEUROLOGIST FOR DIAGNOSIS AND MEDICATION MANAGEMENT." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE LEVODOPA, DOPAMINE AGONISTS, OR MAO-B INHIBITORS." << endl;
    cout << "          - ENGAGE IN PHYSICAL THERAPY, EXERCISE, AND BALANCE TRAINING." << endl;
    cout << "          - MAINTAIN SAFE ENVIRONMENT TO PREVENT FALLS." << endl;
    cout << "          - MONITOR SYMPTOMS AND ATTEND REGULAR FOLLOW-UP VISITS." << endl;
}
else if (suggestionName == "Stroke / Cerebrovascular Accident (CVA)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - SEEK IMMEDIATE MEDICAL ATTENTION; TIME IS CRITICAL." << endl;
    cout << "          - FOLLOW DOCTOR'S TREATMENT PLAN (MEDICATIONS, SURGERY, OR REHABILITATION)." << endl;
    cout << "          - CONTROL RISK FACTORS: HYPERTENSION, DIABETES, HIGH CHOLESTEROL." << endl;
    cout << "          - ENGAGE IN PHYSICAL THERAPY AND REHABILITATION POST-STROKE." << endl;
    cout << "          - MAINTAIN HEALTHY LIFESTYLE: BALANCED DIET, NO SMOKING, MODERATE EXERCISE." << endl;
}
else if (suggestionName == "Multiple Sclerosis (MS)") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT NEUROLOGIST FOR DIAGNOSIS AND MEDICATION MANAGEMENT." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE IMMUNOMODULATORS OR DISEASE-MODIFYING DRUGS." << endl;
    cout << "          - ENGAGE IN PHYSICAL THERAPY AND EXERCISE TO MAINTAIN MOBILITY." << endl;
    cout << "          - MANAGE FATIGUE AND STRESS; AVOID TRIGGERS THAT WORSEN SYMPTOMS." << endl;
    cout << "          - MONITOR SYMPTOMS AND ATTEND REGULAR FOLLOW-UP VISITS." << endl;
}
else if (suggestionName == "Osteoarthritis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - MAINTAIN HEALTHY WEIGHT TO REDUCE JOINT LOAD." << endl;
    cout << "          - ENGAGE IN LOW-IMPACT EXERCISES AND PHYSICAL THERAPY." << endl;
    cout << "          - USE PRESCRIBED PAINKILLERS OR ANTI-INFLAMMATORY MEDICATIONS." << endl;
    cout << "          - APPLY HEAT OR COLD THERAPY TO AFFECTED JOINTS." << endl;
    cout << "          - CONSIDER SURGERY (JOINT REPLACEMENT) IN SEVERE CASES." << endl;
}
else if (suggestionName == "Rheumatoid Arthritis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT RHEUMATOLOGIST FOR DIAGNOSIS AND MEDICATION MANAGEMENT." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE DMARDs, NSAIDs, OR BIOLOGICS." << endl;
    cout << "          - ENGAGE IN PHYSICAL THERAPY AND LOW-IMPACT EXERCISES." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND MANAGE STRESS." << endl;
    cout << "          - MONITOR SYMPTOMS AND ATTEND REGULAR FOLLOW-UP VISITS." << endl;
}
else if (suggestionName == "Osteoporosis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT DOCTOR FOR DIAGNOSIS AND MEDICATION MANAGEMENT." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE BISPHOSPHONATES, CALCIUM, VITAMIN D, OR HORMONE THERAPY." << endl;
    cout << "          - ENGAGE IN WEIGHT-BEARING EXERCISE TO STRENGTHEN BONES." << endl;
    cout << "          - MAINTAIN HEALTHY DIET RICH IN CALCIUM AND VITAMIN D." << endl;
    cout << "          - TAKE PRECAUTIONS TO AVOID FALLS AND INJURIES." << endl;
}
else if (suggestionName == "Gout") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT RHEUMATOLOGIST OR GENERAL PHYSICIAN FOR DIAGNOSIS AND MEDICATION." << endl;
    cout << "          - MEDICATIONS MAY INCLUDE NSAIDs, COLCHICINE, OR URATE-LOWERING DRUGS." << endl;
    cout << "          - AVOID PURINE-RICH FOODS (RED MEAT, SEAFOOD) AND ALCOHOL." << endl;
    cout << "          - MAINTAIN HEALTHY WEIGHT AND HYDRATION." << endl;
    cout << "          - MONITOR SYMPTOMS AND ATTEND REGULAR FOLLOW-UP VISITS." << endl;
}
else if (suggestionName == "Acne") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CLEANSE SKIN GENTLY TWICE DAILY AND AVOID HARSH SCRUBS." << endl;
    cout << "          - USE NON-COMEDOGENIC SKINCARE AND COSMETICS." << endl;
    cout << "          - CONSULT DERMATOLOGIST FOR PRESCRIPTION CREAMS OR ORAL MEDICATIONS." << endl;
    cout << "          - AVOID PICKING OR SQUEEZING PIMPLES TO PREVENT SCARRING." << endl;
    cout << "          - MAINTAIN HEALTHY DIET AND HYDRATION; REDUCE HIGH-SUGAR FOODS." << endl;
}
else if (suggestionName == "Eczema / Dermatitis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - KEEP SKIN MOISTURIZED USING EMOLLIENTS AND CREAMS." << endl;
    cout << "          - AVOID IRRITANTS AND ALLERGENS (HARSH SOAPS, CHEMICALS, CERTAIN FOODS)." << endl;
    cout << "          - CONSULT DERMATOLOGIST FOR TOPICAL STEROIDS OR ORAL MEDICATIONS." << endl;
    cout << "          - MANAGE ITCHING WITHOUT SCRATCHING TO PREVENT INFECTION." << endl;
    cout << "          - MAINTAIN GOOD HYGIENE AND AVOID EXTREME TEMPERATURES." << endl;
}
else if (suggestionName == "Psoriasis") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - KEEP SKIN MOISTURIZED AND AVOID DRYING SOAPS." << endl;
    cout << "          - CONSULT DERMATOLOGIST FOR TOPICAL MEDICATIONS OR PHOTOTHERAPY." << endl;
    cout << "          - MANAGE STRESS AND AVOID TRIGGERS (ALCOHOL, CERTAIN FOODS)." << endl;
    cout << "          - MONITOR NAILS AND JOINTS FOR PSORIATIC CHANGES." << endl;
    cout << "          - ATTEND REGULAR FOLLOW-UP VISITS TO TRACK PROGRESSION." << endl;
}
else if (suggestionName == "Skin Cancer") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT DERMATOLOGIST OR ONCOLOGIST IMMEDIATELY FOR DIAGNOSIS." << endl;
    cout << "          - DIAGNOSIS MAY INCLUDE BIOPSY, DERMOSCOPY, OR IMAGING STUDIES." << endl;
    cout << "          - TREATMENTS MAY INCLUDE SURGERY, RADIOTHERAPY, CHEMOTHERAPY, OR IMMUNOTHERAPY." << endl;
    cout << "          - AVOID EXCESSIVE SUN EXPOSURE AND USE SUNSCREEN REGULARLY." << endl;
    cout << "          - ATTEND REGULAR FOLLOW-UP VISITS TO MONITOR CONDITION." << endl;
}
else if (suggestionName == "Fungal Infection") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - KEEP AFFECTED AREA CLEAN AND DRY." << endl;
    cout << "          - USE TOPICAL ANTIFUNGAL CREAMS OR LOTIONS AS PRESCRIBED." << endl;
    cout << "          - AVOID SHARING PERSONAL ITEMS LIKE TOWELS OR CLOTHING." << endl;
    cout << "          - WEAR LOOSE AND BREATHABLE CLOTHING TO PREVENT MOISTURE BUILD-UP." << endl;
    cout << "          - CONSULT DERMATOLOGIST FOR SEVERE OR WIDESPREAD INFECTIONS." << endl;
}
else if (suggestionName == "Cataract") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT OPHTHALMOLOGIST FOR DIAGNOSIS AND SURGICAL PLANNING." << endl;
    cout << "          - SURGERY IS THE PRIMARY TREATMENT FOR SIGNIFICANT VISION IMPAIRMENT." << endl;
    cout << "          - REGULAR EYE EXAMINATIONS TO MONITOR PROGRESSION." << endl;
    cout << "          - USE ADEQUATE LIGHTING AND SPECTACLES TO MANAGE VISION CHANGES BEFORE SURGERY." << endl;
    cout << "          - MANAGE UNDERLYING CONDITIONS LIKE DIABETES TO SLOW PROGRESSION." << endl;
}
else if (suggestionName == "Glaucoma") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT OPHTHALMOLOGIST IMMEDIATELY FOR DIAGNOSIS AND TREATMENT." << endl;
    cout << "          - TREATMENT MAY INCLUDE EYE DROPS, ORAL MEDICATIONS, LASER OR SURGICAL PROCEDURES." << endl;
    cout << "          - MONITOR EYE PRESSURE REGULARLY AND ATTEND FOLLOW-UP VISITS." << endl;
    cout << "          - AVOID MEDICATIONS OR SUBSTANCES THAT MAY INCREASE EYE PRESSURE." << endl;
    cout << "          - MANAGE UNDERLYING CONDITIONS LIKE DIABETES OR HYPERTENSION." << endl;
}
else if (suggestionName == "Macular Degeneration") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT OPHTHALMOLOGIST FOR REGULAR MONITORING AND TREATMENT." << endl;
    cout << "          - TREATMENTS MAY INCLUDE ANTI-VEGF INJECTIONS, LASER THERAPY, OR SUPPLEMENTS." << endl;
    cout << "          - USE ADEQUATE LIGHTING AND MAGNIFYING DEVICES TO AID VISION." << endl;
    cout << "          - MAINTAIN HEALTHY LIFESTYLE: NO SMOKING, GOOD DIET, AND BLOOD PRESSURE CONTROL." << endl;
    cout << "          - ATTEND REGULAR FOLLOW-UP VISITS TO TRACK PROGRESSION." << endl;
}
else if (suggestionName == "Hearing Loss / Ear Infection") {
    cout << endl << endl << "          SUGGESTIONS: " << endl;
    cout << "          - CONSULT ENT SPECIALIST FOR ACCURATE DIAGNOSIS AND TREATMENT." << endl;
    cout << "          - USE PRESCRIBED EAR DROPS OR ANTIBIOTICS AS ADVISED." << endl;
    cout << "          - AVOID INSERTING OBJECTS INTO THE EAR CANAL." << endl;
    cout << "          - MANAGE ALLERGIES OR FLUID BUILD-UP THAT MAY CONTRIBUTE TO EAR PROBLEMS." << endl;
    cout << "          - REGULAR HEARING CHECKS IF HEARING LOSS PERSISTS." << endl;
}



        getchar();
        getchar();
    }
}

