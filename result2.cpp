#include "cls.h"

 void detail::result2(pair<string,float> best){
 	if(best.first == "Lung Cancer" || best.first=="Diabetes" || best.first =="Thyroid Disorder" || best.first == "Obesity" || best.first == "Metabolic Syndrome"
	 || best.first =="Gastritis / Acid Reflux (GERD)" || best.first == "Peptic Ulcer" || best.first == "Liver Diseases" || best.first== "Gallstones" ||
	  best.first == "Irritable Bowel Syndrome (IBS)" ||
	  best.first =="Colorectal Cancer" || best.first == "Migraine / Headache Disorders" || best.first == "Epilepsy" || best.first== "Alzheimer's Disease / Dementia" 
	  || best.first == "Parkinson's Disease" ||
	   best.first =="Multiple Sclerosis" || best.first == "Osteoarthritis" || best.first == "Rheumatoid Arthritis" || best.first== "Osteoporosis" || best.first == "Gout"
	 ){
 		cout<<endl<<endl<<endl;
 	cout<<"                                    ========== Health Analysis =========="<<endl<<endl;
 	cout<<"                                     Illness: "<<best.first<<endl;
 	cout<<"                                     Percentage: "<<best.second<<"%"<<endl<<endl;
 	
 	cout<<"                                    ========== Recommendation ============="<<endl<<endl;
 	cout<<"                                   Age: "<<age<<"      Duration: "<<duration<<" Days        Severity: "<<severity<<endl<<endl;
 	
 //----------- Lung Cancer -------------
if(best.first == "Lung Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. If any persistent cough, chest pain, or unexplained weight loss occurs, URGENT pediatric evaluation required." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage lung cancer symptoms (mild cough, occasional shortness of breath). Medical consultation and imaging recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (persistent cough, chest pain, weight loss). URGENT hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe lung cancer symptoms (difficulty breathing, severe chest pain, hemoptysis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild lung cancer symptoms. Regular monitoring and specialist consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate symptoms. HIGH RISK: Hospital evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe lung cancer symptoms. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Lung Cancer ==========="<<endl<<endl;
    cout<<"        Lung cancer occurs when abnormal cells grow uncontrollably in the lungs. Symptoms include persistent cough, chest pain,"<<endl;
    cout<<"        shortness of breath, weight loss, and sometimes coughing blood. Smoking is the primary risk factor."<<endl<<endl;
    cout<<"        Early detection with imaging and biopsy improves treatment outcomes, which may include surgery, chemotherapy, or radiation."<<endl;
}

   
  //----------- Diabetes -------------
else if(best.first == "Diabetes"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild diabetes (occasional high blood sugar). Monitor glucose levels, maintain healthy diet, and consult pediatric endocrinologist." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate diabetes. URGENT: Regular insulin or medication management required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe diabetes complications (DKA, extreme hyperglycemia). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild diabetes. Lifestyle changes (diet, exercise) and regular glucose monitoring recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate diabetes (high blood sugar or early complications). URGENT medical follow-up required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe diabetes complications (DKA, hyperosmolar crisis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild diabetes. Regular monitoring and dietary control advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate diabetes. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe diabetes complications. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Diabetes ==========="<<endl<<endl;
    cout<<"        Diabetes is a chronic condition where blood sugar levels are high due to insulin deficiency or resistance."<<endl;
    cout<<"        Symptoms include frequent urination, excessive thirst, fatigue, and blurred vision. Long-term uncontrolled diabetes"<<endl;
    cout<<"        can lead to kidney disease, heart problems, nerve damage, and vision loss."<<endl<<endl;
    cout<<"        Management involves healthy diet, regular exercise, glucose monitoring, medications, or insulin therapy as prescribed."<<endl;
}

   
   //----------- Thyroid Disorder -------------
if(best.first == "Thyroid Disorder"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild thyroid disorder (slight fatigue, weight changes). Monitor symptoms and consult pediatric endocrinologist." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate thyroid symptoms (growth delay, significant fatigue). URGENT: Pediatric evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe thyroid disorder (severe hypo- or hyperthyroidism). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild thyroid disorder (slight fatigue, weight fluctuation). Medical follow-up and lab tests advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate thyroid symptoms (palpitations, significant fatigue, weight change). URGENT doctor consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe thyroid disorder (thyroid storm, myxedema). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild thyroid issues. Regular monitoring and medication adherence advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate thyroid disorder. HIGH RISK: Medical evaluation needed immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe thyroid complications. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Thyroid Disorder ==========="<<endl<<endl;
    cout<<"        Thyroid disorders occur when the thyroid gland produces too much (hyperthyroidism) or too little (hypothyroidism) hormone."<<endl;
    cout<<"        Symptoms include fatigue, weight changes, palpitations, heat/cold intolerance, and mood changes."<<endl<<endl;
    cout<<"        Management includes medication, lifestyle adjustments, and regular monitoring of thyroid hormone levels."<<endl;
}

   
   //----------- Obesity -------------
else if(best.first == "Obesity"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild obesity. Encourage balanced diet, physical activity, and monitor weight regularly." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate obesity. URGENT: Pediatric nutritional and lifestyle intervention advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe obesity leading to health complications. Hospital evaluation required immediately!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild obesity. Lifestyle modification, diet, and exercise recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate obesity. URGENT medical advice and intervention needed." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe obesity and complications (diabetes, heart disease). Hospitalization may be required!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild obesity. Regular monitoring, diet, and exercise advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate obesity. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe obesity and related health complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Obesity ==========="<<endl<<endl;
    cout<<"        Obesity is excessive body fat accumulation that increases the risk of heart disease, diabetes, hypertension, and other health problems."<<endl;
    cout<<"        Management involves balanced diet, regular physical activity, behavioral therapy, and in severe cases, medical or surgical intervention."<<endl;
}

   
//----------- Metabolic Syndrome -------------
if(best.first == "Metabolic Syndrome"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild metabolic syndrome risk factors (slightly high BMI, mild hypertension). Lifestyle guidance advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate metabolic syndrome (high blood pressure, elevated glucose, obesity). URGENT: Pediatric evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe metabolic syndrome and complications (pre-diabetes, severe obesity). Hospital evaluation needed immediately!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild metabolic syndrome risk factors. Lifestyle modification (diet, exercise) recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate metabolic syndrome (obesity, high BP, impaired glucose). URGENT medical follow-up required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe metabolic syndrome and complications (diabetes, heart disease). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild metabolic syndrome. Regular monitoring and lifestyle changes advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate metabolic syndrome. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe metabolic syndrome complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                           ========== Metabolic Syndrome ==========="<<endl<<endl;
    cout<<"        Metabolic syndrome is a cluster of conditions including high blood pressure, high blood sugar, excess body fat,"<<endl;
    cout<<"        and abnormal cholesterol levels, increasing the risk of heart disease, stroke, and diabetes."<<endl;
    cout<<"        Early lifestyle interventions and medical management can prevent serious complications."<<endl;
}

   
   //----------- Gastritis / Acid Reflux (GERD) -------------
else if(best.first == "Gastritis / Acid Reflux"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild gastritis or acid reflux. Avoid spicy/fatty foods, eat small meals, and monitor symptoms." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate gastritis (persistent stomach pain, nausea). URGENT pediatric consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe gastritis or complications (vomiting blood, severe dehydration). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild gastritis/GERD. Avoid trigger foods, eat smaller meals, and take antacids if prescribed." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (persistent heartburn, nausea, mild pain). URGENT medical consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe gastritis/GERD complications (vomiting blood, severe pain). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild gastritis or reflux. Regular monitoring and dietary care advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate symptoms. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe gastritis/GERD complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                    ========== Gastritis / Acid Reflux (GERD) ==========="<<endl<<endl;
    cout<<"        Gastritis is inflammation of the stomach lining, and GERD occurs when stomach acid flows back into the esophagus."<<endl;
    cout<<"        Symptoms include stomach pain, heartburn, nausea, and vomiting. Severe cases may cause bleeding or ulcers."<<endl;
    cout<<"        Management involves diet modification, medications (antacids, proton pump inhibitors), and lifestyle changes."<<endl;
}

   
   //----------- Peptic Ulcer -------------
if(best.first == "Peptic Ulcer"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild peptic ulcer symptoms (occasional stomach pain, mild nausea). Dietary adjustments and medical consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate ulcer symptoms (frequent pain, loss of appetite). URGENT pediatric evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe peptic ulcer (vomiting blood, severe pain). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild peptic ulcer. Avoid spicy/acidic foods, take prescribed medications, and monitor symptoms." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate ulcer symptoms (frequent pain, nausea). URGENT medical consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe peptic ulcer complications (bleeding, perforation). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild peptic ulcer. Dietary control and regular monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate ulcer symptoms. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe peptic ulcer complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Peptic Ulcer ==========="<<endl<<endl;
    cout<<"        Peptic ulcers are open sores that develop on the inner lining of the stomach or upper small intestine."<<endl;
    cout<<"        Symptoms include stomach pain, nausea, bloating, and in severe cases, bleeding or perforation."<<endl;
    cout<<"        Management includes medications to reduce acid, lifestyle and dietary modifications, and urgent care for complications."<<endl;
}

   
  //----------- Liver Diseases -------------
else if(best.first == "Liver Diseases"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild liver disorder (slight fatigue, mild jaundice). Regular monitoring and pediatric consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate liver symptoms (yellowing of skin/eyes, nausea). URGENT pediatric evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe liver disease (severe jaundice, bleeding, confusion). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild liver disorder. Avoid alcohol, maintain healthy diet, and regular monitoring recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate liver disease (fatigue, jaundice). URGENT medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe liver disease (hepatic failure, severe jaundice, bleeding). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild liver disorder. Regular monitoring, diet control, and medication adherence advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate liver disease. HIGH RISK: Immediate hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe liver disease complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Liver Diseases ==========="<<endl<<endl;
    cout<<"        Liver diseases include hepatitis, fatty liver, cirrhosis, and other conditions affecting liver function."<<endl;
    cout<<"        Symptoms include fatigue, jaundice, nausea, abdominal pain, and swelling. Severe liver disease can lead to organ failure."<<endl;
    cout<<"        Management includes lifestyle modifications, medications, monitoring liver function, and urgent care for severe complications."<<endl;
}

   
   
//----------- Gallstones -------------
if(best.first == "Gallstones"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild gallstone symptoms (occasional abdominal discomfort). Dietary adjustments and medical consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate symptoms (frequent abdominal pain, nausea). URGENT pediatric evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe gallstone complications (cholecystitis, severe pain). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild gallstone symptoms. Avoid fatty foods, maintain hydration, and consult a doctor." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate gallstone symptoms (pain attacks, nausea). URGENT medical consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe gallstone complications (cholecystitis, jaundice). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild gallstone symptoms. Regular monitoring and dietary adjustments advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate gallstone symptoms. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe gallstone complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Gallstones ==========="<<endl<<endl;
    cout<<"        Gallstones are hardened deposits that form in the gallbladder, causing abdominal pain, nausea, and sometimes jaundice."<<endl;
    cout<<"        Severe cases can lead to inflammation, infection, or blockage of the bile ducts. Management includes diet modification,"<<endl;
    cout<<"        medications, or surgical removal of the gallbladder in complicated cases."<<endl;
}

   
  //----------- Irritable Bowel Syndrome (IBS) -------------
else if(best.first == "Irritable Bowel Syndrome"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild IBS symptoms (occasional abdominal pain, bloating). Dietary adjustments and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate IBS (frequent discomfort, changes in bowel habits). URGENT pediatric consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe IBS complications (severe pain, dehydration). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild IBS symptoms (bloating, mild abdominal pain). Dietary modification, hydration, and stress management recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate IBS (persistent discomfort, diarrhea or constipation). URGENT medical follow-up advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe IBS complications (severe pain, dehydration). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild IBS symptoms. Regular monitoring and dietary management advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate IBS symptoms. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe IBS complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                    ========== Irritable Bowel Syndrome (IBS) ==========="<<endl<<endl;
    cout<<"        IBS is a chronic gastrointestinal disorder causing abdominal pain, bloating, diarrhea, and constipation."<<endl;
    cout<<"        Symptoms are often triggered by diet, stress, or infections. Management includes dietary modification, hydration,"<<endl;
    cout<<"        medications for symptom relief, and stress management. Severe complications require urgent care."<<endl;
}

   
//----------- Colorectal Cancer -------------
if(best.first == "Colorectal Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Persistent abdominal pain, blood in stool, or unexplained weight loss requires URGENT pediatric evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage colorectal cancer symptoms (mild changes in bowel habits, occasional blood in stool). Medical evaluation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (persistent changes in bowel habits, abdominal pain). URGENT hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe colorectal cancer complications (obstruction, severe bleeding). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild colorectal cancer symptoms. Early detection and regular monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate symptoms. HIGH RISK: Hospital evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe colorectal cancer complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                           ========== Colorectal Cancer ==========="<<endl<<endl;
    cout<<"        Colorectal cancer occurs when abnormal cells grow in the colon or rectum. Symptoms include changes in bowel habits,"<<endl;
    cout<<"        abdominal pain, blood in stool, and unexplained weight loss. Early detection through screening improves treatment outcomes."<<endl;
    cout<<"        Management may involve surgery, chemotherapy, radiation, and lifestyle adjustments."<<endl;
}

 //----------- Migraine / Headache Disorders -------------
else if(best.first == "Migraine / Headache Disorders"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild headache or migraine. Rest, hydration, and over-the-counter pain relief recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate migraine (frequent headaches, nausea). URGENT pediatric evaluation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe migraine or neurological symptoms (confusion, vision loss). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild headache or migraine. Rest, hydration, and OTC pain relief recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate migraine (frequent attacks, nausea, light sensitivity). URGENT medical follow-up advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe migraine or neurological complications. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild headache/migraine. Regular monitoring and symptom management advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate headache/migraine. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe migraine complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                 ========== Migraine / Headache Disorders ==========="<<endl<<endl;
    cout<<"        Migraines and other headache disorders involve recurrent or severe head pain, often accompanied by nausea, vomiting,"<<endl;
    cout<<"        light or sound sensitivity, and sometimes visual disturbances. Management includes medications, lifestyle changes,"<<endl;
    cout<<"        stress management, and urgent care in severe cases."<<endl;
}

   
  //----------- Epilepsy -------------
if(best.first == "Epilepsy"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild epilepsy (occasional seizures). Medication adherence and regular pediatric neurology follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate epilepsy (frequent seizures). URGENT: Pediatric evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe or prolonged seizures (status epilepticus). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild epilepsy. Medication adherence and monitoring of seizure triggers recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate epilepsy (frequent or prolonged seizures). URGENT neurology consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe or status epilepticus seizures. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild epilepsy. Regular monitoring and medication adherence advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate seizures. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe epilepsy complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Epilepsy ==========="<<endl<<endl;
    cout<<"        Epilepsy is a neurological disorder characterized by recurrent seizures caused by abnormal electrical activity in the brain."<<endl;
    cout<<"        Management includes anti-seizure medications, avoiding triggers, lifestyle adjustments, and urgent care during severe seizures."<<endl;
}

//----------- Alzheimer's Disease / Dementia -------------
else if(best.first == "Alzheimer's Disease / Dementia"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any cognitive decline requires URGENT pediatric neurology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild cognitive decline. Regular monitoring, cognitive exercises, and medical follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate cognitive decline. URGENT neurologist consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe dementia symptoms (disorientation, inability to care for self). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild cognitive decline. Regular monitoring, memory exercises, and caregiver support recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate dementia. HIGH RISK: Medical evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe Alzheimer's/dementia complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                     ========== Alzheimer's Disease / Dementia ==========="<<endl<<endl;
    cout<<"        Alzheimer's disease is a progressive neurological disorder leading to memory loss, cognitive decline, and difficulty performing daily tasks."<<endl;
    cout<<"        Management involves medications, cognitive therapy, lifestyle adjustments, caregiver support, and urgent intervention in severe cases."<<endl;
}

   
  //----------- Parkinson's Disease -------------
if(best.first == "Parkinson's Disease"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any movement or neurological issues require URGENT pediatric neurology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild Parkinson's symptoms (slight tremor, stiffness). Regular monitoring and neurologist follow-up recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate Parkinson's (tremor, slowness of movement, balance issues). URGENT neurology consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe Parkinson's complications (falls, inability to move independently). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild Parkinson's symptoms. Regular monitoring, medications, and physiotherapy recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate Parkinson's. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe Parkinson's complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                ========== Parkinson's Disease ==========="<<endl<<endl;
    cout<<"        Parkinson's disease is a progressive neurological disorder affecting movement, causing tremors, stiffness, and balance issues."<<endl;
    cout<<"        Management includes medications, physiotherapy, lifestyle changes, and urgent care in severe cases."<<endl;
}

   
//----------- Multiple Sclerosis -------------
else if(best.first == "Multiple Sclerosis"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any neurological symptoms like weakness or numbness require URGENT pediatric neurology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild multiple sclerosis symptoms (occasional numbness or vision changes). Regular neurology follow-up recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate MS symptoms (frequent weakness, coordination problems). URGENT medical consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe MS complications (paralysis, severe neurological deficits). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild MS symptoms. Regular monitoring and medical follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate MS symptoms. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe MS complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                             ========== Multiple Sclerosis ==========="<<endl<<endl;
    cout<<"        Multiple Sclerosis (MS) is a chronic autoimmune disease affecting the central nervous system, leading to weakness,"<<endl;
    cout<<"        numbness, vision problems, and coordination difficulties. Management involves medications, physical therapy, lifestyle adjustments,"<<endl;
    cout<<"        and urgent care in severe cases."<<endl;
}

   
   //----------- Osteoarthritis -------------
if(best.first == "Osteoarthritis"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any joint pain or stiffness requires URGENT pediatric evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild osteoarthritis (occasional joint pain, stiffness). Lifestyle modifications and physiotherapy recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate osteoarthritis (persistent pain, reduced mobility). URGENT orthopedic consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe osteoarthritis complications (severe pain, joint deformity). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild osteoarthritis. Regular physiotherapy, joint care, and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate osteoarthritis. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe osteoarthritis complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                               ========== Osteoarthritis ==========="<<endl<<endl;
    cout<<"        Osteoarthritis is a degenerative joint disease causing pain, stiffness, and reduced mobility. Management includes physiotherapy,"<<endl;
    cout<<"        medications, lifestyle changes, and surgery in severe cases."<<endl;
}

   //----------- Rheumatoid Arthritis -------------
else if(best.first == "Rheumatoid Arthritis"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild rheumatoid arthritis. Regular pediatric rheumatology follow-up and medications advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate symptoms (joint pain, swelling). URGENT pediatric evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe rheumatoid arthritis complications. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild rheumatoid arthritis (joint pain, stiffness). Regular rheumatology follow-up and medications recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (persistent pain, swelling). URGENT medical consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe rheumatoid arthritis complications (joint deformity, severe pain). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild rheumatoid arthritis. Regular monitoring, medications, and physiotherapy advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate rheumatoid arthritis. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe rheumatoid arthritis complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                           ========== Rheumatoid Arthritis ==========="<<endl<<endl;
    cout<<"        Rheumatoid arthritis is an autoimmune disorder causing joint inflammation, pain, and potential deformity. Management involves medications,"<<endl;
    cout<<"        physiotherapy, lifestyle modifications, and urgent care for severe complications."<<endl;
}

   //----------- Osteoporosis -------------
if(best.first == "Osteoporosis"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any bone fragility or fractures require URGENT pediatric evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild osteoporosis (slight bone density loss). Calcium, vitamin D supplementation and lifestyle modifications advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate osteoporosis (increased fracture risk). URGENT medical evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe osteoporosis (fractures or severe bone loss). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild osteoporosis. Regular bone density monitoring and supplements advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate osteoporosis. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe osteoporosis complications (fractures). CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                               ========== Osteoporosis ==========="<<endl<<endl;
    cout<<"        Osteoporosis is a condition where bones become weak and brittle, increasing fracture risk. Management includes medications,"<<endl;
    cout<<"        supplements (calcium, vitamin D), lifestyle adjustments, and urgent care for severe fractures."<<endl;
}

  //----------- Gout -------------
else if(best.first == "Gout"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any sudden joint pain or swelling requires URGENT pediatric evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild gout (occasional joint pain, redness). Lifestyle modifications and medications advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate gout (frequent joint attacks). URGENT medical consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe gout complications (severe pain, joint deformity). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild gout. Regular monitoring, medications, and lifestyle adjustments advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate gout symptoms. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe gout complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Gout ==========="<<endl<<endl;
    cout<<"        Gout is a type of arthritis caused by uric acid crystal buildup in joints, leading to sudden pain, redness, and swelling."<<endl;
    cout<<"        Management includes medications, dietary changes, hydration, and urgent care during severe attacks."<<endl;
}

   	 
	 
	 
	 
 }
 }
