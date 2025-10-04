#include "cls.h"
void detail::suggestion2(pair<string,float> best){
 if(best.first == "Lung Cancer" || best.first == "Diabetes" || best.first == "Thyroid Disorder" || best.first == "Obesity" 
   || best.first == "Metabolic Syndrome" || best.first == "Gastritis / Acid Reflux (GERD)" || best.first == "Peptic Ulcer" 
   || best.first == "Liver Diseases" || best.first == "Gallstones" || best.first == "Irritable Bowel Syndrome (IBS)" 
   || best.first == "Colorectal Cancer" || best.first == "Migraine / Headache Disorders" || best.first == "Epilepsy" 
   || best.first == "Alzheimer's Disease / Dementia" || best.first == "Parkinson's Disease" 
   || best.first == "Multiple Sclerosis" || best.first == "Osteoarthritis" || best.first == "Rheumatoid Arthritis" 
   || best.first == "Osteoporosis" || best.first == "Gout") {

    cout << endl << endl << endl;
    cout << "                                    ========== Suggestion For " << best.first << " ==========" << endl << endl;

    if(best.first == "Lung Cancer"){
        cout << "                                      - FOLLOW ONCOLOGIST RECOMMENDATIONS." << endl;
        cout << "                                      - AVOID SMOKING AND POLLUTION." << endl;
        cout << "                                      - REGULARLY MONITOR LUNG FUNCTION." << endl;
    }
    else if(best.first == "Diabetes"){
        cout << "                                      - MONITOR BLOOD SUGAR REGULARLY." << endl;
        cout << "                                      - FOLLOW DIET AND MEDICATION PLAN." << endl;
        cout << "                                      - EXERCISE REGULARLY AND AVOID SUGAR-RICH FOODS." << endl;
    }
    else if(best.first == "Thyroid Disorder"){
        cout << "                                      - TAKE PRESCRIBED MEDICATION REGULARLY." << endl;
        cout << "                                      - MONITOR THYROID LEVELS PERIODICALLY." << endl;
    }
    else if(best.first == "Obesity"){
        cout << "                                      - FOLLOW A HEALTHY DIET AND EXERCISE PLAN." << endl;
        cout << "                                      - REGULARLY MONITOR WEIGHT AND BMI." << endl;
    }
    else if(best.first == "Metabolic Syndrome"){
        cout << "                                      - CONTROL BLOOD PRESSURE, BLOOD SUGAR AND CHOLESTEROL." << endl;
        cout << "                                      - MAINTAIN HEALTHY WEIGHT AND EXERCISE REGULARLY." << endl;
    }
    else if(best.first == "Gastritis / Acid Reflux (GERD)"){
        cout << "                                      - AVOID SPICY, FRIED AND ACIDIC FOODS." << endl;
        cout << "                                      - EAT SMALL FREQUENT MEALS AND AVOID LATE NIGHT EATING." << endl;
        cout << "                                      - TAKE ANTACID OR PRESCRIBED MEDICATION." << endl;
    }
    else if(best.first == "Peptic Ulcer"){
        cout << "                                      - AVOID NSAIDs AND SPICY FOODS." << endl;
        cout << "                                      - FOLLOW DOCTOR’S MEDICATION AND DIET PLAN." << endl;
    }
    else if(best.first == "Liver Diseases"){
        cout << "                                      - AVOID ALCOHOL AND HEPATOTOXIC DRUGS." << endl;
        cout << "                                      - MAINTAIN NUTRITION AND HYDRATION." << endl;
        cout << "                                      - REGULARLY MONITOR LIVER FUNCTION TESTS." << endl;
    }
    else if(best.first == "Gallstones"){
        cout << "                                      - FOLLOW LOW-FAT DIET." << endl;
        cout << "                                      - CONSULT SURGEON IF SEVERE PAIN OCCURS." << endl;
    }
    else if(best.first == "Irritable Bowel Syndrome (IBS)"){
        cout << "                                      - AVOID TRIGGER FOODS LIKE DAIRY OR SPICY FOODS." << endl;
        cout << "                                      - MANAGE STRESS AND FOLLOW DIETARY CHANGES." << endl;
    }
    else if(best.first == "Colorectal Cancer"){
        cout << "                                      - FOLLOW ONCOLOGIST RECOMMENDATIONS." << endl;
        cout << "                                      - REGULAR SCREENING AND MONITORING IS ESSENTIAL." << endl;
    }
    else if(best.first == "Migraine / Headache Disorders"){
        cout << "                                      - AVOID TRIGGERS LIKE STRESS, Caffeine, AND SLEEP DEPRIVATION." << endl;
        cout << "                                      - USE PRESCRIBED MEDICATION FOR ATTACKS." << endl;
    }
    else if(best.first == "Epilepsy"){
        cout << "                                      - TAKE ANTIEPILEPTIC MEDICATION REGULARLY." << endl;
        cout << "                                      - AVOID TRIGGERS LIKE SLEEP DEPRIVATION OR ALCOHOL." << endl;
    }
    else if(best.first == "Alzheimer's Disease / Dementia"){
        cout << "                                      - PROVIDE A SAFE ENVIRONMENT AND REGULAR SUPERVISION." << endl;
        cout << "                                      - ENGAGE IN COGNITIVE ACTIVITIES AND REGULAR CHECKUPS." << endl;
    }
    else if(best.first == "Parkinson's Disease"){
        cout << "                                      - FOLLOW NEUROLOGIST ADVICE AND MEDICATION PLAN." << endl;
        cout << "                                      - ENGAGE IN PHYSICAL AND OCCUPATIONAL THERAPY." << endl;
    }
    else if(best.first == "Multiple Sclerosis"){
        cout << "                                      - FOLLOW NEUROLOGIST PRESCRIBED TREATMENT." << endl;
        cout << "                                      - MANAGE SYMPTOMS WITH PHYSICAL THERAPY." << endl;
    }
    else if(best.first == "Osteoarthritis"){
        cout << "                                      - FOLLOW PHYSICAL THERAPY AND EXERCISE REGIMEN." << endl;
        cout << "                                      - TAKE PAIN RELIEF MEDICATION AS PRESCRIBED." << endl;
    }
    else if(best.first == "Rheumatoid Arthritis"){
        cout << "                                      - FOLLOW IMMUNOSUPPRESSANT OR DMARD MEDICATIONS." << endl;
        cout << "                                      - REGULARLY MONITOR JOINT HEALTH AND INFLAMMATION." << endl;
    }
    else if(best.first == "Osteoporosis"){
        cout << "                                      - TAKE CALCIUM AND VITAMIN D SUPPLEMENTS." << endl;
        cout << "                                      - ENGAGE IN WEIGHT-BEARING EXERCISE." << endl;
    }
    else if(best.first == "Gout"){
        cout << "                                      - AVOID PURINE-RICH FOODS LIKE RED MEAT AND SEAFOOD." << endl;
        cout << "                                      - STAY HYDRATED AND TAKE MEDICATION AS PRESCRIBED." << endl;
    }
}

 }
