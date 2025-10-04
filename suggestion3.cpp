#include "cls.h"
void detail::suggestion3(pair<string,float> best){
if(best.first == "Acne" || best.first == "Eczema / Dermatitis" || best.first == "Psoriasis" || best.first == "Skin Cancer" 
   || best.first == "Fungal Infections" || best.first == "Cataract" || best.first == "Glaucoma" 
   || best.first == "Macular Degeneration" || best.first == "Hearing Loss / Ear Infections" 
   || best.first == "Urinary Tract Infection (UTI)" || best.first == "Kidney Stones" 
   || best.first == "Chronice Kidney Disease (CKD)" || best.first == "Anemia" || best.first == "Leukemia / Lymphoma" 
   || best.first == "Hemophilia" || best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)" 
   || best.first == "Breast Cancer" || best.first == "Colon Cancer" || best.first == "Prostate Cancer") {

    cout << endl << endl << endl;
    cout << "                                    ========== Suggestion For " << best.first << " ==========" << endl << endl;

    if(best.first == "Acne"){
        cout << "                                      - KEEP SKIN CLEAN AND WASH FACE REGULARLY." << endl;
        cout << "                                      - AVOID OILY AND HEAVY COSMETICS." << endl;
        cout << "                                      - USE PRESCRIBED TOPICAL OR ORAL MEDICATION." << endl;
    }
    else if(best.first == "Eczema / Dermatitis"){
        cout << "                                      - KEEP SKIN MOISTURIZED." << endl;
        cout << "                                      - AVOID TRIGGERS LIKE ALLERGENS OR HARSH SOAPS." << endl;
        cout << "                                      - USE PRESCRIBED CREAMS OR MEDICATIONS." << endl;
    }
    else if(best.first == "Psoriasis"){
        cout << "                                      - USE MEDICATIONS OR CREAMS AS PRESCRIBED." << endl;
        cout << "                                      - AVOID STRESS AND TRIGGERS." << endl;
    }
    else if(best.first == "Skin Cancer"){
        cout << "                                      - AVOID EXCESSIVE SUN EXPOSURE; USE SUNSCREEN." << endl;
        cout << "                                      - REGULARLY MONITOR SKIN FOR NEW LESIONS." << endl;
        cout << "                                      - CONSULT DERMATOLOGIST REGULARLY." << endl;
    }
    else if(best.first == "Fungal Infections"){
        cout << "                                      - KEEP AFFECTED AREA CLEAN AND DRY." << endl;
        cout << "                                      - USE ANTIFUNGAL CREAMS OR MEDICATION." << endl;
    }
    else if(best.first == "Cataract"){
        cout << "                                      - REGULAR EYE CHECKUPS." << endl;
        cout << "                                      - SURGERY IF VISION IS SIGNIFICANTLY IMPAIRED." << endl;
    }
    else if(best.first == "Glaucoma"){
        cout << "                                      - REGULAR EYE CHECKUPS AND INTRAOCULAR PRESSURE MONITORING." << endl;
        cout << "                                      - USE PRESCRIBED EYE DROPS REGULARLY." << endl;
    }
    else if(best.first == "Macular Degeneration"){
        cout << "                                      - REGULAR EYE CHECKUPS." << endl;
        cout << "                                      - FOLLOW DIETARY AND MEDICATION ADVICE." << endl;
    }
    else if(best.first == "Hearing Loss / Ear Infections"){
        cout << "                                      - AVOID LOUD NOISE EXPOSURE." << endl;
        cout << "                                      - CONSULT ENT FOR INFECTIONS OR HEARING ISSUES." << endl;
    }
    else if(best.first == "Urinary Tract Infection (UTI)"){
        cout << "                                      - DRINK PLENTY OF WATER." << endl;
        cout << "                                      - COMPLETE PRESCRIBED ANTIBIOTICS COURSE." << endl;
    }
    else if(best.first == "Kidney Stones"){
        cout << "                                      - DRINK LOTS OF WATER." << endl;
        cout << "                                      - AVOID FOODS HIGH IN OXALATE IF ADVISED." << endl;
    }
    else if(best.first == "Chronice Kidney Disease (CKD)"){
        cout << "                                      - FOLLOW RENAL DIET AND MEDICATION." << endl;
        cout << "                                      - REGULARLY MONITOR KIDNEY FUNCTION." << endl;
    }
    else if(best.first == "Anemia"){
        cout << "                                      - INCREASE IRON-RICH FOODS IN DIET." << endl;
        cout << "                                      - TAKE IRON OR VITAMIN SUPPLEMENTS AS PRESCRIBED." << endl;
    }
    else if(best.first == "Leukemia / Lymphoma"){
        cout << "                                      - FOLLOW ONCOLOGIST RECOMMENDATIONS." << endl;
        cout << "                                      - REGULAR CHECKUPS AND TREATMENT PLAN." << endl;
    }
    else if(best.first == "Hemophilia"){
        cout << "                                      - AVOID INJURIES AND BLEEDING RISKS." << endl;
        cout << "                                      - FOLLOW PRESCRIBED FACTOR REPLACEMENT THERAPY." << endl;
    }
    else if(best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)"){
        cout << "                                      - FOLLOW IMMUNOSUPPRESSANT MEDICATION PLAN." << endl;
        cout << "                                      - REGULARLY MONITOR SYMPTOMS AND CONSULT DOCTOR." << endl;
    }
    else if(best.first == "Breast Cancer"){
        cout << "                                      - FOLLOW ONCOLOGIST TREATMENT PLAN." << endl;
        cout << "                                      - REGULARLY CHECK BREASTS AND MONITOR SYMPTOMS." << endl;
    }
    else if(best.first == "Colon Cancer"){
        cout << "                                      - FOLLOW ONCOLOGIST RECOMMENDATIONS." << endl;
        cout << "                                      - REGULAR SCREENING AND MONITORING." << endl;
    }
    else if(best.first == "Prostate Cancer"){
        cout << "                                      - FOLLOW UROLOGIST OR ONCOLOGIST ADVICE." << endl;
        cout << "                                      - REGULAR SCREENING AND MONITORING." << endl;
    }
}

 }
