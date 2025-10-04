#include "cls.h"
 
 void detail::money2(pair<string,float> best){
 	if(best.first == "Lung Cancer" || best.first == "Diabetes" || best.first == "Thyroid Disorder" || best.first == "Obesity" 
   || best.first == "Metabolic Syndrome" || best.first == "Gastritis / Acid Reflux (GERD)" || best.first == "Peptic Ulcer" 
   || best.first == "Liver Diseases" || best.first == "Gallstones" || best.first == "Irritable Bowel Syndrome (IBS)" 
   || best.first == "Colorectal Cancer" || best.first == "Migraine / Headache Disorders" || best.first == "Epilepsy" 
   || best.first == "Alzheimer's Disease / Dementia" || best.first == "Parkinson's Disease" 
   || best.first == "Multiple Sclerosis" || best.first == "Osteoarthritis" || best.first == "Rheumatoid Arthritis" 
   || best.first == "Osteoporosis" || best.first == "Gout") {

    cout << endl << endl << endl;
    cout << "\n\n                                             ===== " << best.first << " ======" << endl << endl;

    if(best.first == "Lung Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - MEDICINES / CHEMOTHERAPY:                 RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS / SCANS:                            RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Diabetes"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 10,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / INSULIN:                      RS: 500 - RS: 7,000\n";
        cout << "                             - TESTS (Blood Sugar, HbA1c):              RS: 500 - RS: 1,500\n";
    }
    else if(best.first == "Thyroid Disorder"){
        cout << "\n                               Estimated Cost:                    RS: 1,000 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES (Thyroxine, etc.):             RS: 500 - RS: 3,000\n";
        cout << "                             - TESTS (TSH, T3, T4):                     RS: 0 - RS: 1,000\n";
    }
    else if(best.first == "Obesity"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - DIET / FITNESS PROGRAM:                   RS: 0 - RS: 4,000\n";
        cout << "                             - OPTIONAL TESTS (BMI, Blood Sugar):       RS: 0 - RS: 500\n";
    }
    else if(best.first == "Metabolic Syndrome"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 8,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES:                                RS: 500 - RS: 5,000\n";
        cout << "                             - TESTS (Blood Sugar, Cholesterol, BP):    RS: 500 - RS: 1,500\n";
    }
    else if(best.first == "Gastritis / Acid Reflux (GERD)"){
        cout << "\n                               Estimated Cost:                    RS: 800 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (Antacids, PPIs):              RS: 200 - RS: 3,000\n";
        cout << "                             - TESTS (Endoscopy optional):              RS: 100 - RS: 500\n";
    }
    else if(best.first == "Peptic Ulcer"){
        cout << "\n                               Estimated Cost:                    RS: 1,000 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES (Antacids, Antibiotics):       RS: 500 - RS: 3,000\n";
        cout << "                             - TESTS (Endoscopy):                        RS: 0 - RS: 1,500\n";
    }
    else if(best.first == "Liver Diseases"){
        cout << "\n                               Estimated Cost:                    RS: 3,000 - RS: 15,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES:                                RS: 1,500 - RS: 10,000\n";
        cout << "                             - TESTS (LFT, Ultrasound, CT):             RS: 1,000 - RS: 3,500\n";
    }
    else if(best.first == "Gallstones"){
        cout << "\n                               Estimated Cost:                    RS: 3,000 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - SURGERY / MEDICINES:                      RS: 2,500 - RS: 20,000\n";
        cout << "                             - TESTS (Ultrasound, Blood Tests):         RS: 0 - RS: 3,000\n";
    }
    else if(best.first == "Irritable Bowel Syndrome (IBS)"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / DIETARY MANAGEMENT:          RS: 0 - RS: 3,000\n";
        cout << "                             - TESTS (Optional blood / stool tests):    RS: 0 - RS: 500\n";
    }
    else if(best.first == "Colorectal Cancer"){
        cout << "\n                               Estimated Cost:                    RS: 15,000 - RS: 80,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,500 - RS: 5,000\n";
        cout << "                             - SURGERY / CHEMOTHERAPY:                  RS: 10,000 - RS: 60,000\n";
        cout << "                             - TESTS (Colonoscopy, Imaging):            RS: 3,500 - RS: 15,000\n";
    }
    else if(best.first == "Migraine / Headache Disorders"){
        cout << "\n                               Estimated Cost:                    RS: 500 - RS: 5,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES:                                RS: 0 - RS: 3,000\n";
        cout << "                             - TESTS (Optional MRI/CT):                 RS: 0 - RS: 500\n";
    }
    else if(best.first == "Epilepsy"){
        cout << "\n                               Estimated Cost:                    RS: 2,000 - RS: 15,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES (Antiepileptics):              RS: 1,000 - RS: 10,000\n";
        cout << "                             - TESTS (EEG, MRI optional):               RS: 500 - RS: 3,000\n";
    }
    else if(best.first == "Alzheimer's Disease / Dementia"){
        cout << "\n                               Estimated Cost:                    RS: 2,000 - RS: 20,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES:                                RS: 1,000 - RS: 15,000\n";
        cout << "                             - TESTS (CT/MRI, Cognitive Assessment):    RS: 500 - RS: 3,000\n";
    }
    else if(best.first == "Parkinson's Disease"){
        cout << "\n                               Estimated Cost:                    RS: 2,500 - RS: 25,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES:                                RS: 1,500 - RS: 20,000\n";
        cout << "                             - TESTS (MRI, Blood Tests):                 RS: 500 - RS: 3,000\n";
    }
    else if(best.first == "Multiple Sclerosis"){
        cout << "\n                               Estimated Cost:                    RS: 10,000 - RS: 60,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 1,000 - RS: 3,000\n";
        cout << "                             - MEDICINES / THERAPIES:                    RS: 7,000 - RS: 50,000\n";
        cout << "                             - TESTS (MRI, Blood Tests):                 RS: 2,000 - RS: 7,000\n";
    }
    else if(best.first == "Osteoarthritis"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 10,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
        cout << "                             - MEDICINES / PHYSIOTHERAPY:               RS: 500 - RS: 7,000\n";
        cout << "                             - TESTS (X-ray, Blood Tests optional):     RS: 500 - RS: 1,500\n";
    }
    else if(best.first == "Rheumatoid Arthritis"){
        cout << "\n                               Estimated Cost:                    RS: 2,500 - RS: 15,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 2,000\n";
        cout << "                             - MEDICINES / DMARDs:                       RS: 1,500 - RS: 10,000\n";
        cout << "                             - TESTS (Blood Tests, X-ray):              RS: 500 - RS: 3,000\n";
    }
    else if(best.first == "Osteoporosis"){
        cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 8,000\n\n\n";
        cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,000\n";
        cout << "                             - MEDICINES / SUPPLEMENTS:                  RS: 500 - RS: 5,000\n";
        cout << "                             - TESTS (DEXA Scan optional):              RS: 500 - RS: 2,000\n";
    }
    else if(best.first == "Gout"){
    cout << "\n                               Estimated Cost:                    RS: 1,500 - RS: 8,000\n\n\n";
    cout << "                             - DOCTOR CONSULTATION:                      RS: 500 - RS: 1,500\n";
    cout << "                             - MEDICINES / Diet Management:              RS: 500 - RS: 5,000\n";
    cout << "                             - TESTS (Blood Tests optional):             RS: 0 - RS: 1,500\n";
}

}
 }
