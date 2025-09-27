#include "cls.h"

void detail::money2() {
    if (!matched && !matched2) {

        cout << "\n\n                                             ESTIMATED MONEY REQUIREMENTS\n";
        cout << "\n\n                                       BASED ON GENERAL TREATMENT COSTS IN NEPAL\n";

        if (suggestionName == "Dengue") {
            cout << "\n\n                                       Illness: " << suggestionName;
            cout << "\n                                       Estimated Cost:                    RS: 8,000 - RS: 15,000\n\n\n";
            cout << "                             - DIAGNOSTIC TESTS:                      RS: 2,000 - RS: 5,000\n";
            cout << "                             - HOSPITAL ADMISSION & BED CHARGES:       RS: 3,000 - RS: 12,000\n";
            cout << "                             - MEDICINES & FLUIDS:                     RS: 1,500 - RS: 5,000\n";
            cout << "                             - ADDITIONAL COSTS:                       RS: 3,000 - RS: 6,000\n";
            cout << "\n\n                             PRICES VARY BASED ON HOSPITAL TYPE (GOVERNMENT OR PRIVATE) AND LOCATION.\n";
            cout << "                             GOVERNMENT HOSPITAL ARE CHEAPER OR MAY PROVIDE FREE SERVICES IN CASES.\n";
            cout << "                             ALWAYS CARRY YOUR CITIZENSHIP CARD OR ANY HEALTH INSURANCES IF AVAILABLE.\n";
        }
else if (suggestionName == "Gastritis / GERD") {
    cout << "                             Gastritis / GERD Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Gastroenterologist):     NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Endoscopy, H. Pylori test): NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Antacids, PPIs, H2 Blockers):    NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):            NPR 15,000 - NPR 75,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 2,000 to NPR 75,000+" << endl;
}
else if (suggestionName == "Peptic Ulcer") {
    cout << "                             Peptic Ulcer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Gastroenterologist):     NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Endoscopy, H. Pylori test): NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Antacids, PPIs, H2 Blockers):    NPR 1,500 - NPR 12,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):            NPR 15,000 - NPR 80,000 per day" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 2,000 to NPR 80,000+" << endl;
}
else if (suggestionName == "Liver Disease") {
    cout << "                             Liver Disease Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Hepatologist/Gastroenterologist):  NPR 1,500 - NPR 6,000" << endl;
    cout << "                             Diagnostic Tests (Liver Function, Ultrasound, Fibroscan): NPR 5,000 - NPR 30,000" << endl;
    cout << "                             Medications (Hepatitis antivirals, supplements):           NPR 2,000 - NPR 15,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):                        NPR 20,000 - NPR 100,000 per day" << endl;
    cout << "                             Follow-up Visits:                                        NPR 500 - NPR 3,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                               NPR 3,000 to NPR 100,000+" << endl;
}
else if (suggestionName == "Gallstones") {
    cout << "                             Gallstones Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Gastroenterologist/Surgeon):  NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Ultrasound, CT Scan):             NPR 3,000 - NPR 15,000" << endl;
    cout << "                             Medications (Pain relief, bile acid therapy):      NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Surgery (Cholecystectomy, if needed):             NPR 50,000 - NPR 200,000" << endl;
    cout << "                             Follow-up Visits:                                 NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                        NPR 5,000 to NPR 200,000+" << endl;
}
else if (suggestionName == "Irritable Bowel Syndrome (IBS)") {
    cout << "                             IBS Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Gastroenterologist):    NPR 1,000 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood, Stool, Colonoscopy): NPR 3,000 - NPR 20,000" << endl;
    cout << "                             Medications (Antispasmodics, Fiber supplements): NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 2,000 to NPR 20,000+" << endl;
}
else if (suggestionName == "Colorectal Cancer") {
    cout << "                             Colorectal Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Oncologist/Surgeon):       NPR 2,000 - NPR 8,000" << endl;
    cout << "                             Diagnostic Tests (Colonoscopy, CT, Biopsy):     NPR 10,000 - NPR 50,000" << endl;
    cout << "                             Surgery (if needed):                             NPR 150,000 - NPR 500,000" << endl;
    cout << "                             Chemotherapy / Radiation:                        NPR 50,000 - NPR 300,000 per cycle" << endl;
    cout << "                             Follow-up Visits:                                NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 50,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Migraine / Headache Disorders") {
    cout << "                             Migraine / Headache Disorders Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):          NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (MRI, CT Scan, Blood tests): NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Pain relief, Triptans, Preventive drugs): NPR 1,500 - NPR 12,000 per month" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                    NPR 2,000 to NPR 25,000+" << endl;
}
else if (suggestionName == "Epilepsy") {
    cout << "                             Epilepsy Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):          NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (EEG, MRI, Blood tests):     NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Antiepileptics):               NPR 2,000 - NPR 15,000 per month" << endl;
    cout << "                             Hospital Stay (if complications):           NPR 15,000 - NPR 50,000 per day" << endl;
    cout << "                             Follow-up Visits:                             NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 2,000 to NPR 50,000+" << endl;
}
else if (suggestionName == "Alzheimer's Disease") {
    cout << "                             Alzheimer's Disease Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist/Geriatrician):   NPR 2,000 - NPR 6,000" << endl;
    cout << "                             Diagnostic Tests (MRI, CT, Cognitive Assessment):  NPR 10,000 - NPR 50,000" << endl;
    cout << "                             Medications (Cholinesterase inhibitors, Memantine): NPR 2,000 - NPR 15,000 per month" << endl;
    cout << "                             Caregiver & Support Services:                     NPR 5,000 - NPR 25,000 per month" << endl;
    cout << "                             Follow-up Visits:                                NPR 500 - NPR 3,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 2,000 to NPR 50,000+ per month" << endl;
}
else if (suggestionName == "Parkinson's Disease") {
    cout << "                             Parkinson's Disease Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):          NPR 2,000 - NPR 6,000" << endl;
    cout << "                             Diagnostic Tests (MRI, CT, Blood tests):     NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Levodopa, Dopamine agonists): NPR 3,000 - NPR 15,000 per month" << endl;
    cout << "                             Physiotherapy & Rehabilitation:             NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Follow-up Visits:                             NPR 500 - NPR 3,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 3,000 to NPR 25,000+ per month" << endl;
}
else if (suggestionName == "Stroke / Cerebrovascular Accident (CVA)") {
    cout << "                             Stroke / Cerebrovascular Accident (CVA) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):         NPR 2,000 - NPR 6,000" << endl;
    cout << "                             Diagnostic Tests (CT, MRI, Blood tests):    NPR 10,000 - NPR 50,000" << endl;
    cout << "                             Medications (Clot-busters, Anticoagulants): NPR 2,000 - NPR 15,000 per month" << endl;
    cout << "                             Hospital Stay & Surgery (if needed):        NPR 50,000 - NPR 200,000" << endl;
    cout << "                             Rehabilitation & Physiotherapy:             NPR 5,000 - NPR 25,000 per month" << endl;
    cout << "                             Follow-up Visits:                            NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 10,000 to NPR 200,000+" << endl;
}
else if (suggestionName == "Multiple Sclerosis (MS)") {
    cout << "                             Multiple Sclerosis (MS) Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Neurologist):          NPR 2,000 - NPR 6,000" << endl;
    cout << "                             Diagnostic Tests (MRI, Blood tests, Evoked potentials): NPR 10,000 - NPR 50,000" << endl;
    cout << "                             Medications (Immunomodulators, Disease-modifying drugs): NPR 15,000 - NPR 100,000 per month" << endl;
    cout << "                             Physiotherapy & Rehabilitation:             NPR 5,000 - NPR 20,000 per month" << endl;
    cout << "                             Follow-up Visits:                             NPR 1,000 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 15,000 to NPR 100,000+ per month" << endl;
}
else if (suggestionName == "Osteoarthritis") {
    cout << "                             Osteoarthritis Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Rheumatologist/Orthopedist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (X-ray, MRI, Blood tests):        NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Painkillers, Anti-inflammatories):   NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Physiotherapy & Rehabilitation:                  NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Surgery (Joint Replacement, if needed):         NPR 150,000 - NPR 500,000" << endl;
    cout << "                             Follow-up Visits:                                NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 2,000 to NPR 500,000+" << endl;
}
else if (suggestionName == "Rheumatoid Arthritis") {
    cout << "                             Rheumatoid Arthritis Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Rheumatologist):          NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (X-ray, Blood tests, MRI):     NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (DMARDs, Biologics, NSAIDs):       NPR 5,000 - NPR 50,000 per month" << endl;
    cout << "                             Physiotherapy & Rehabilitation:                NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 5,000 to NPR 50,000+ per month" << endl;
}
else if (suggestionName == "Osteoporosis") {
    cout << "                             Osteoporosis Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Endocrinologist/Rheumatologist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (DEXA scan, Blood tests, X-rays):    NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Bisphosphonates, Calcium, Vitamin D):  NPR 2,000 - NPR 15,000 per month" << endl;
    cout << "                             Physiotherapy & Exercise Programs:                 NPR 2,000 - NPR 10,000 per month" << endl;
    cout << "                             Follow-up Visits:                                   NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                         NPR 2,000 to NPR 25,000+ per month" << endl;
}
else if (suggestionName == "Gout") {
    cout << "                             Gout Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Rheumatologist/Physician): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Blood tests, Joint fluid analysis): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (NSAIDs, Colchicine, Urate-lowering drugs): NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Physiotherapy & Lifestyle Management:            NPR 1,500 - NPR 5,000 per month" << endl;
    cout << "                             Follow-up Visits:                                NPR 500 - NPR 2,500 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 1,500 to NPR 10,000+ per month" << endl;
}
else if (suggestionName == "Acne") {
    cout << "                             Acne Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist):           NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (if needed, e.g., hormone tests): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Topical creams, Oral medications):  NPR 500 - NPR 5,000 per month" << endl;
    cout << "                             Procedures (Chemical peel, Laser therapy):       NPR 5,000 - NPR 25,000 per session" << endl;
    cout << "                             Follow-up Visits:                                NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                      NPR 500 to NPR 25,000+" << endl;
}
else if (suggestionName == "Eczema / Dermatitis") {
    cout << "                             Eczema / Dermatitis Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist):         NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Allergy tests, Skin biopsy): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Topical creams, Oral steroids, Antihistamines): NPR 500 - NPR 5,000 per month" << endl;
    cout << "                             Moisturizers & Skincare Products:           NPR 500 - NPR 3,000 per month" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                 NPR 500 to NPR 10,000+ per month" << endl;
}
else if (suggestionName == "Psoriasis") {
    cout << "                             Psoriasis Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist):          NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Skin biopsy, Blood tests):   NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Topical creams, Oral meds, Biologics): NPR 1,500 - NPR 20,000 per month" << endl;
    cout << "                             Phototherapy & Laser Treatment:               NPR 5,000 - NPR 25,000 per session" << endl;
    cout << "                             Follow-up Visits:                             NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 1,500 to NPR 25,000+ per month" << endl;
}
else if (suggestionName == "Skin Cancer") {
    cout << "                             Skin Cancer Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist/Oncologist): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Diagnostic Tests (Biopsy, Imaging, Blood tests):  NPR 5,000 - NPR 25,000" << endl;
    cout << "                             Medications (Chemotherapy, Immunotherapy, Targeted Therapy): NPR 10,000 - NPR 100,000 per cycle" << endl;
    cout << "                             Surgery (Excision, Mohs Surgery):               NPR 50,000 - NPR 250,000" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 5,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 5,000 to NPR 250,000+" << endl;
}
else if (suggestionName == "Fungal Infection") {
    cout << "                             Fungal Infection Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Dermatologist):         NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Skin scraping, Culture):    NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Medications (Topical/Oral Antifungals):       NPR 500 - NPR 5,000 per month" << endl;
    cout << "                             Follow-up Visits:                             NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 500 to NPR 5,000+ per month" << endl;
}
else if (suggestionName == "Cataract") {
    cout << "                             Cataract Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Ophthalmologist):     NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Eye exam, Lens evaluation): NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Surgery (Phacoemulsification / IOL):       NPR 20,000 - NPR 100,000 per eye" << endl;
    cout << "                             Post-Operative Medications:                NPR 1,500 - NPR 5,000 per month" << endl;
    cout << "                             Follow-up Visits:                           NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                 NPR 20,000 to NPR 100,000+ per eye" << endl;
}
else if (suggestionName == "Glaucoma") {
    cout << "                             Glaucoma Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Ophthalmologist):          NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Tonometry, Visual Field, OCT): NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Eye drops, Oral meds):             NPR 1,500 - NPR 10,000 per month" << endl;
    cout << "                             Laser/Surgical Procedures:                      NPR 20,000 - NPR 100,000" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 1,500 to NPR 100,000+" << endl;
}
else if (suggestionName == "Macular Degeneration") {
    cout << "                             Macular Degeneration Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (Ophthalmologist):          NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (OCT, Fundus Imaging):          NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Medications (Anti-VEGF injections):             NPR 10,000 - NPR 50,000 per injection" << endl;
    cout << "                             Laser Therapy Procedures:                       NPR 5,000 - NPR 25,000 per session" << endl;
    cout << "                             Follow-up Visits:                               NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                     NPR 10,000 to NPR 50,000+ per injection" << endl;
}
else if (suggestionName == "Hearing Loss / Ear Infection") {
    cout << "                             Hearing Loss / Ear Infection Treatment Cost Estimates (in NPR):" << endl;
    cout << "                          -----------------------------------------------------------------------------" << endl;
    cout << "                             Doctor Consultation (ENT Specialist):         NPR 1,000 - NPR 3,000" << endl;
    cout << "                             Diagnostic Tests (Audiometry, Tympanometry):  NPR 1,500 - NPR 5,000" << endl;
    cout << "                             Medications (Ear drops, Antibiotics):        NPR 500 - NPR 3,000 per month" << endl;
    cout << "                             Minor Procedures (Ear cleaning, Drainage):   NPR 2,000 - NPR 10,000" << endl;
    cout << "                             Follow-up Visits:                             NPR 500 - NPR 2,000 per visit" << endl;
    cout << "                          ------------------------------------------------------------------------------" << endl << endl;
    cout << "                             Total Estimated Cost Range:                  NPR 500 to NPR 10,000+" << endl;
}




        getchar();
        getchar();
    }
}

