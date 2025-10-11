#include "cls.h"

  //------------------ Result 1 -------------------------
  void detail::result1(pair<string,float> best){
  			if(best.first == "Common Cold" || best.first == "Dengue" || best.first == "Influenza (flu)" || best.first == "COVID-19" || best.first == "Tuberculosis (TB)"
			|| best.first == "Hepatitis" || best.first == "Measles" || best.first == "Chicken pox" || best.first == "Malaria" || best.first == "HIV/AIDS"
			|| best.first == "Hypertension (High Blood Pressure)" || best.first == "Coronary Artery Disease" || best.first == "Arrhythmias (Irregular Heartbeat)" 
			|| best.first == "Heart Failure" || best.first == "Stroke" || best.first == "Peripheral Artery Disease" || best.first == "Asthma" || 
			best.first == "Chronic Obstructive Pulmonary Disease" 
			|| best.first == "Pneumonia" || best.first == "Bronchitis" 
			   ){
			  cout<<endl<<endl<<endl;
 	cout<<"                                    ========== Health Analysis =========="<<endl<<endl;
 	cout<<"                                     Illness: "<<best.first<<endl;
 	cout<<"                                     Percentage: "<<best.second<<"%"<<endl<<endl;
 	
 	cout<<"                                    ========== Recommendation ============="<<endl<<endl;
 	cout<<"                                   Age: "<<age<<"      Duration: "<<duration<<" Days        Severity: "<<severity<<endl<<endl;
 	
 	// ---------------- Common Cold ----------------------
 	if(best.first == "Common Cold"){
 	 if(age <= 5) {
            if(severity == "minor") {
            if(duration <= 3){
            	cout<<"            Young child with a minor headache for a short duration." << endl;
                cout<<"            Rest, hydrate, and monitor symptoms."<<endl;
			}
                else
                cout<<"            ALERT: Young child has had a minor headache for 3 or more days. " << endl;
                cout<<"            Monitor closely and consult a doctor if it continues."<<endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Young child with a moderate headache for a short duration.  " << endl;
                cout << "            Keep them rested and hydrated."<<endl;
                cout << "            Consult a doctor if symptoms persist or worsen."<<endl;
             } else
                cout << "            ALERT: Young child has had a moderate headache for 3 or more days. " << endl;
                cout << "            Seek medical advice promptly."<<endl;
        }
        else if(severity == "serious") {
            if(duration <= 3){
                cout << "            Young child with a serious headache. " << endl;
                cout << "            Seek medical attention immediately!"<<endl;
            } else
                cout << "            EMERGENCY: Young child has had a serious headache for 3 or more days! Seek immediate medical help!" << endl;
        }
    }
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3){
                cout << "            Adult with a minor headache for a short duration." << endl;
                cout << "            Rest, hydrate, and monitor symptoms."<<endl;
            } else
                cout << "            Adult with a minor headache lasting 3 or more days. " << endl;
                cout << "            Monitor symptoms and consult a doctor if it continues." <<endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3){
                cout << "            Adult with a moderate headache for a short duration. Rest, avoid stress, and consult a doctor if it persists." << endl;
            } else
                cout << "            Adult with a moderate headache lasting 3 or more days. Seek medical advice promptly." << endl;
        }
        else if(severity == "serious") {
            if(duration <= 3)
                cout << "            Adult with a serious headache for a short duration. Seek medical attention immediately!" << endl;
            else
                cout << "            EMERGENCY: Adult with a serious headache lasting 3 or more days! Go to the hospital immediately." << endl;
        }
    }
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with a minor headache for a short duration. Rest, hydrate, and monitor symptoms closely." << endl;
            else
                cout << "            Elderly person with a minor headache lasting 3 or more days. Monitor symptoms carefully and consult a doctor." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Elderly person with a moderate headache for a short duration. Rest and consult a doctor if it persists." << endl;
            else
                cout << "            Elderly person with a moderate headache lasting 3 or more days. Seek medical advice promptly." << endl;
        }
        else if(severity == "serious") {
            if(duration <= 3)
                cout << "            Elderly person with a serious headache. Seek medical attention immediately!" << endl;
            else
                cout << "            EMERGENCY: Elderly person with a serious headache lasting 3 or more days! Go to the hospital immediately." << endl;
        }
    }
 	cout<<endl;
 	cout<<"                                   ========== The Common Cold ==========="<<endl<<endl;
 	cout<<"      - The common cold is one of the most frequent illnesses caused by viruses, especially rhinoviruses."<<endl;
	cout<<"        It spreads through droplets when an infected person coughs, sneezes, or touches surfaces."<<endl;
	cout<<"        Symptoms usually include a runny or blocked nose, sneezing, sore throat, mild headache,"<<endl; 
	cout<<"        cough, and sometimes tiredness or low-grade fever."<<endl<<endl;
    cout<<"        It is generally not serious and improves within 1–2 weeks without special treatment."<<endl;
    cout<<"        Rest, drinking plenty of fluids, and over-the-counter remedies can help relieve discomfort."<<endl;
    cout<<"        Unlike bacterial infections, antibiotics are not effective against the common cold."<<endl;
	 }
 
 //---------------------- Dengue ---------------------------
  if(best.first == "Dengue"){
  	if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Young child with minor dengue symptoms for short duration. Rest, hydrate, monitor closely, and consult a pediatrician." << endl;
            else
                cout << "            ALERT: Child has dengue symptoms for 3+ days. Immediate doctor consultation is necessary." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate dengue symptoms. HIGH RISK: Take to hospital immediately for evaluation." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with serious dengue symptoms. CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Adults (5–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with minor dengue symptoms for short duration. Rest, drink fluids, and monitor platelet count." << endl;
            else
                cout << "            Adult with dengue symptoms lasting 3+ days. URGENT: Seek medical checkup and blood tests." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Adult with moderate dengue symptoms. Hospital evaluation recommended immediately." << endl;
            else
                cout << "            Adult with moderate symptoms lasting 3+ days. EMERGENCY: Go to hospital immediately!" << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe dengue symptoms (bleeding, dehydration, or persistent vomiting). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with mild dengue symptoms. Rest, hydration, and close monitoring are essential." << endl;
            else
                cout << "            Elderly person with dengue symptoms lasting 3+ days. URGENT: Visit hospital for tests immediately." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate dengue symptoms. HIGH RISK: Hospital care required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe dengue symptoms. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }
    	cout<<endl;
 	cout<<"                                   ========== Dengue Fever ==========="<<endl<<endl;
 	cout<<"      - Dengue fever is a mosquito-borne viral infection mainly spread by Aedes aegypti mosquitoes."<<endl;
	cout<<"        It causes sudden high fever, severe headache, pain behind the eyes, joint and muscle pain,"<<endl;
	cout<<"        skin rashes, nausea, and sometimes mild bleeding like nosebleeds or gum bleeding."<<endl<<endl;
    cout<<"        Most cases recover in about 1–2 weeks with proper rest, hydration, and medical care."<<endl;
    cout<<"        However, severe dengue can be life-threatening, leading to bleeding, low blood pressure,"<<endl;
    cout<<"        and organ damage, so timely medical attention is very important."<<endl;
    cout<<"        Unlike common cold, dengue does not spread directly from person to person but only through mosquito bites."<<endl;
  }
  
  //----------- COVID-19 -------------
  //---------------------- COVID-19 ---------------------------
if(best.first == "COVID-19"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Young child with minor COVID-19 symptoms for short duration. Rest, hydration, and monitor breathing closely. Pediatric consultation advised." << endl;
            else
                cout << "            ALERT: Child has COVID-19 symptoms for 3+ days. Consult a pediatrician immediately for testing and evaluation." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate COVID-19 symptoms. HIGH RISK: Take to hospital immediately for oxygen monitoring and treatment." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with serious COVID-19 symptoms (difficulty breathing, high fever, persistent cough). CALL AMBULANCE & GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Adults (5–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with minor COVID-19 symptoms for short duration. Isolate, rest, hydrate, and monitor oxygen levels." << endl;
            else
                cout << "            Adult with symptoms lasting 3+ days. URGENT: Get tested, seek medical checkup, and monitor oxygen saturation." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 3)
                cout << "            Adult with moderate COVID-19 symptoms. Hospital evaluation recommended immediately for oxygen and vital monitoring." << endl;
            else
                cout << "            Adult with moderate symptoms lasting 3+ days. EMERGENCY: Go to hospital immediately for possible admission!" << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe COVID-19 symptoms (low oxygen, chest pain, confusion). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Elderly person with mild COVID-19 symptoms. Rest, hydration, and monitor oxygen levels closely." << endl;
            else
                cout << "            Elderly person with COVID-19 symptoms lasting 3+ days. URGENT: Visit hospital for tests and evaluation immediately." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate COVID-19 symptoms. HIGH RISK: Hospital care required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe COVID-19 symptoms. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== COVID-19 ===========" << endl << endl;
    cout << "      - COVID-19 is a contagious respiratory illness caused by the SARS-CoV-2 virus." << endl;
    cout << "        It spreads mainly through respiratory droplets, close contact, and contaminated surfaces." << endl;
    cout << "        Common symptoms include fever, cough, sore throat, body aches, fatigue, and loss of smell or taste." << endl << endl;
    cout << "        Most cases are mild to moderate and recover within 1–2 weeks with rest, fluids, and monitoring." << endl;
    cout << "        Severe cases may cause pneumonia, low oxygen levels, organ failure, and can be life-threatening," << endl;
    cout << "        especially in elderly or people with chronic diseases (diabetes, heart, lung conditions)." << endl;
    cout << "        Preventive measures include vaccination, wearing masks, hand hygiene, and social distancing." << endl;
}

  
  //----------- Tuberculosis -------------
  //---------------------- Tuberculosis ---------------------------
if(best.first == "Tuberculosis (TB)"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Young child with minor TB symptoms for short duration (cough, mild fever). Pediatric checkup required for early detection." << endl;
            else
                cout << "            ALERT: Child has persistent TB-like symptoms for more than a week. URGENT pediatric consultation and TB testing required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate TB symptoms (weight loss, persistent cough, fever). HIGH RISK: Hospital visit and TB tests required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe TB symptoms (chronic cough with blood, difficulty breathing). Hospitalization required immediately!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Adult with minor TB symptoms (mild cough, low fever). Suggest medical checkup and sputum test for TB confirmation." << endl;
            else
                cout << "            Adult with cough/fever lasting more than a week. URGENT: Medical checkup and TB test highly recommended." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 7)
                cout << "            Adult with moderate TB symptoms (weight loss, persistent cough). Medical evaluation required immediately." << endl;
            else
                cout << "            Adult with TB symptoms persisting 7+ days. EMERGENCY: Go to hospital for chest X-ray and TB treatment." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe TB symptoms (bloody cough, chest pain, night sweats). HOSPITALIZATION REQUIRED IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Elderly person with mild TB symptoms (cough, weakness). Immediate TB screening advised." << endl;
            else
                cout << "            Elderly person with persistent cough/fever for more than a week. URGENT: Hospital visit and TB evaluation required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate TB symptoms (weight loss, fatigue, cough). HIGH RISK: Hospital care and TB treatment required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe TB symptoms (blood in cough, chest pain, breathing difficulty). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== Tuberculosis (TB) ===========" << endl << endl;
    cout << "      - Tuberculosis (TB) is a serious infectious disease caused by the bacteria *Mycobacterium tuberculosis*." << endl;
    cout << "        It mainly affects the lungs but can also damage other parts of the body (bones, kidneys, brain)." << endl;
    cout << "        Symptoms include a persistent cough (2+ weeks), chest pain, fever, night sweats, weight loss, and coughing blood." << endl << endl;
    cout << "        TB spreads from person to person through the air when an infected person coughs, sneezes, or speaks." << endl;
    cout << "        Early diagnosis through sputum test, X-ray, or PCR test is essential." << endl;
    cout << "        TB is treatable and curable with a full course of antibiotics (DOTS therapy), usually lasting 6 months or more." << endl;
    cout << "        Untreated TB can be life-threatening and may spread to others, so timely treatment is very important." << endl;
}

  
  //----------- Hepatitis -------------
  //---------------------- Hepatitis ---------------------------
if(best.first == "Hepatitis"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Young child with minor Hepatitis symptoms (mild fever, tiredness, poor appetite). Rest, hydration, and pediatric consultation advised." << endl;
            else
                cout << "            ALERT: Child has persistent Hepatitis symptoms for more than a week. URGENT: Pediatric evaluation and liver function tests required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate Hepatitis symptoms (jaundice, vomiting, abdominal pain). HIGH RISK: Take to hospital immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe Hepatitis (extreme weakness, confusion, severe jaundice). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Adult with minor Hepatitis symptoms (fatigue, nausea, mild fever). Rest, hydration, and liver tests recommended." << endl;
            else
                cout << "            Adult with symptoms lasting more than a week. URGENT: Visit hospital for liver function tests and Hepatitis screening." << endl;
        }
        else if(severity == "moderate") {
            if(duration <= 7)
                cout << "            Adult with moderate Hepatitis symptoms (jaundice, abdominal pain, vomiting). Hospital evaluation required immediately." << endl;
            else
                cout << "            Adult with prolonged moderate symptoms. EMERGENCY: Hospital admission for monitoring and treatment required." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe Hepatitis (severe jaundice, liver failure signs, confusion). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            if(duration <= 7)
                cout << "            Elderly person with mild Hepatitis symptoms (tiredness, low appetite). Rest and medical consultation advised." << endl;
            else
                cout << "            Elderly person with symptoms persisting more than a week. URGENT: Hospital visit and liver function tests required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate Hepatitis symptoms (jaundice, abdominal pain). HIGH RISK: Immediate hospital care required." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe Hepatitis (confusion, liver failure, bleeding). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== Hepatitis ===========" << endl << endl;
    cout << "      - Hepatitis is an inflammation of the liver, usually caused by viral infection (Hepatitis A, B, C, D, or E)," << endl;
    cout << "        but it may also result from alcohol use, toxins, or autoimmune conditions." << endl;
    cout << "        Symptoms include fatigue, nausea, loss of appetite, fever, dark urine, pale stools, and jaundice (yellowing of skin/eyes)." << endl << endl;
    cout << "        Hepatitis A and E generally spread through contaminated food or water and can improve with proper care." << endl;
    cout << "        Hepatitis B, C, and D usually spread through blood, unsafe injections, or unprotected sex and can cause chronic liver damage." << endl;
    cout << "        Early diagnosis is important. Some forms are preventable by vaccination (Hepatitis A and B)." << endl;
    cout << "        Chronic untreated Hepatitis may lead to cirrhosis, liver failure, or liver cancer." << endl;
}

  
  //----------- Measles -------------
  //---------------------- Measles ---------------------------
if(best.first == "Measles"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 5)
                cout << "            Young child with minor measles symptoms (fever, runny nose, mild rash). Rest, fluids, and pediatric monitoring advised." << endl;
            else
                cout << "            ALERT: Child has measles symptoms for 5+ days. Pediatric consultation and monitoring required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate measles (rash spreading, high fever). HIGH RISK: Take to hospital immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe measles (breathing difficulty, pneumonia signs, seizures). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 5)
                cout << "            Adult with minor measles symptoms (rash, fever, cough). Rest, fluids, and isolation required." << endl;
            else
                cout << "            Adult with prolonged measles symptoms. URGENT: Seek medical attention for complications." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Adult with moderate measles (rash covering large body area, high fever). Hospital checkup strongly advised." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe measles (difficulty breathing, neurological symptoms). GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild measles symptoms. Rest and immediate medical consultation recommended." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate measles symptoms. HIGH RISK: Visit hospital immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe measles. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== Measles ===========" << endl << endl;
    cout << "      - Measles is a highly contagious viral disease spread through coughing and sneezing." << endl;
    cout << "        Symptoms include high fever, cough, runny nose, red eyes, and a widespread skin rash." << endl << endl;
    cout << "        Complications may include pneumonia, ear infections, diarrhea, or brain inflammation (encephalitis)." << endl;
    cout << "        Measles can be prevented with the MMR (Measles, Mumps, Rubella) vaccine." << endl;
    cout << "        Early medical care and supportive treatment are important to prevent serious complications." << endl;
}

  
  //----------- Chicken pox -------------
  //---------------------- Chickenpox ---------------------------
if(best.first == "Chickenpox"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 5)
                cout << "            Young child with mild chickenpox (few blisters, mild fever). Rest, fluids, and itch relief recommended." << endl;
            else
                cout << "            ALERT: Child with chickenpox symptoms lasting more than 5 days. Pediatric consultation advised." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate chickenpox (many blisters, fever, discomfort). Monitor closely and seek hospital if worsening." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe chickenpox (breathing problems, persistent vomiting, or infected blisters). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 5)
                cout << "            Adult with mild chickenpox (fever, rash, mild discomfort). Rest, fluids, and antihistamines for itching recommended." << endl;
            else
                cout << "            Adult with chickenpox lasting more than 5 days. URGENT: Seek medical advice as adult cases can be more severe." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Adult with moderate chickenpox (high fever, widespread rash). Hospital evaluation recommended." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe chickenpox (lung infection, confusion, severe rash). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild chickenpox. Medical consultation is essential due to higher complication risk." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate chickenpox symptoms. HIGH RISK: Hospital evaluation required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe chickenpox (lung involvement, neurological signs). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== Chickenpox ===========" << endl << endl;
    cout << "      - Chickenpox is a contagious viral infection caused by the varicella-zoster virus." << endl;
    cout << "        It spreads easily through coughing, sneezing, or direct contact with blisters." << endl;
    cout << "        Symptoms include fever, tiredness, loss of appetite, and an itchy blister-like rash." << endl << endl;
    cout << "        Most children recover within 1–2 weeks, but adults and elderly may experience more severe complications." << endl;
    cout << "        Vaccination is available to prevent chickenpox and reduce its severity." << endl;
    cout << "        Serious complications can include pneumonia, skin infections, or brain inflammation (encephalitis)." << endl;
}

  
  //----------- Malaria -------------
  //---------------------- Malaria ---------------------------
if(best.first == "Malaria"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Young child with minor malaria symptoms (fever, chills). Rest, hydration, and immediate malaria test required." << endl;
            else
                cout << "            ALERT: Child with fever/chills lasting more than 3 days. URGENT: Pediatric checkup and malaria treatment needed." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate malaria symptoms (recurrent fever, vomiting). HIGH RISK: Take to hospital immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe malaria (convulsions, breathing difficulty, anemia). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            if(duration <= 3)
                cout << "            Adult with mild malaria symptoms (fever, headache, chills). Malaria test and medication required." << endl;
            else
                cout << "            Adult with prolonged fever for more than 3 days. URGENT: Hospital checkup and blood test needed." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Adult with moderate malaria symptoms (high fever, sweating, weakness). Hospital evaluation recommended immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with severe malaria (severe anemia, confusion, organ failure). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild malaria symptoms. Medical consultation required immediately due to higher risk." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate malaria symptoms. HIGH RISK: Hospital care required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with severe malaria (multi-organ complications). CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== Malaria ===========" << endl << endl;
    cout << "      - Malaria is a mosquito-borne disease caused by *Plasmodium* parasites, spread by female Anopheles mosquitoes." << endl;
    cout << "        Symptoms include fever, chills, sweating, headache, nausea, and fatigue." << endl << endl;
    cout << "        Severe malaria can cause anemia, seizures, organ failure, or death if untreated." << endl;
    cout << "        Diagnosis requires blood tests, and treatment involves antimalarial drugs." << endl;
    cout << "        Prevention includes mosquito nets, repellents, and controlling mosquito breeding sites." << endl;
}

  
  //----------- HIV/AIDS -------------
  //---------------------- HIV/AIDS ---------------------------
if(best.first == "HIV/AIDS"){
    // Young children (=5 years)
    if(age <= 5) {
        if(severity == "minor") {
            cout << "            Child with early HIV symptoms (recurrent infections, poor growth). Pediatric HIV care and testing required immediately." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Child with moderate HIV/AIDS symptoms (chronic diarrhea, weight loss). HIGH RISK: Immediate hospital care required." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Child with severe HIV/AIDS symptoms (opportunistic infections, severe malnutrition). Specialized hospital care needed immediately!" << endl;
        }
    }

    // Adults (6–60 years)
    else if(age > 5 && age <= 60) {
        if(severity == "minor") {
            cout << "            Adult with minor HIV symptoms (fever, fatigue, swollen lymph nodes). HIV testing and early medical care required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Adult with moderate HIV/AIDS symptoms (chronic infections, weight loss). URGENT: Begin antiretroviral therapy (ART) under doctor’s guidance." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Adult with advanced AIDS symptoms (severe infections, neurological problems, wasting). Hospitalization and ART required immediately!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60) {
        if(severity == "minor") {
            cout << "            Elderly person with mild HIV symptoms. Medical evaluation and HIV screening required." << endl;
        }
        else if(severity == "moderate") {
            cout << "            Elderly person with moderate HIV/AIDS symptoms. HIGH RISK: Specialized hospital care required immediately." << endl;
        }
        else if(severity == "serious") {
            cout << "            EMERGENCY: Elderly person with advanced AIDS symptoms. Immediate hospitalization necessary!" << endl;
        }
    }

    cout << endl;
    cout << "                                   ========== HIV / AIDS ===========" << endl << endl;
    cout << "      - HIV (Human Immunodeficiency Virus) attacks the immune system, weakening the body’s ability to fight infections." << endl;
    cout << "        If untreated, HIV progresses to AIDS (Acquired Immunodeficiency Syndrome), where the immune system becomes severely damaged." << endl;
    cout << "        Symptoms may include fever, fatigue, weight loss, frequent infections, night sweats, and swollen lymph nodes." << endl << endl;
    cout << "        HIV spreads through unprotected sex, sharing needles, blood transfusions (unsafe), and from mother to child during childbirth or breastfeeding." << endl;
    cout << "        There is no cure, but Antiretroviral Therapy (ART) allows people with HIV to live long, healthy lives." << endl;
    cout << "        Prevention includes safe sex practices, regular testing, avoiding needle sharing, and HIV awareness." << endl;
}

  
  //----------- Hypertension -------------
  //----------- Hypertension -------------
if(best.first == "Hypertension"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child/Teen with slightly high BP. Encourage healthy diet, reduce salt, and regular monitoring." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child/Teen with moderately high BP. URGENT: Pediatric checkup needed to prevent complications." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Critically high BP in child/teen. Hospital care required immediately!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild high blood pressure. Lifestyle change (diet, exercise, stress control) is recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate hypertension. URGENT: Consult doctor for medicines and tests." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Critically high blood pressure. Risk of stroke/heart attack. Go to hospital immediately!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild hypertension. Regular monitoring and lifestyle care advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly person with moderate hypertension. HIGH RISK: Doctor consultation strongly advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe hypertension. CALL AMBULANCE immediately!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Hypertension ==========="<<endl<<endl;
    cout<<"        Hypertension means persistently high blood pressure. It may not show clear symptoms but increases the risk of"<<endl;
    cout<<"        stroke, heart attack, kidney failure, and other cardiovascular problems. Common risk factors include high salt"<<endl;
    cout<<"        intake, stress, obesity, lack of exercise, smoking, and family history."<<endl<<endl;
    cout<<"        Mild cases may be managed with lifestyle changes, but moderate to severe cases require medical treatment."<<endl;
}

  
  //----------- Coronary Artery -------------
  //----------- Coronary Artery Disease -------------
if(best.first == "Coronary Artery"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children, but if diagnosed, urgent pediatric cardiology consultation is necessary." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild chest discomfort. Get ECG, blood tests, and consult cardiologist." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with chest pain on exertion. URGENT: Hospital evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Severe chest pain, shortness of breath, sweating. Possible heart attack. CALL AMBULANCE!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild CAD symptoms. Must consult doctor and monitor regularly." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate CAD symptoms. HIGH RISK: Hospital evaluation immediately required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Severe chest pain in elderly. Possible cardiac arrest. CALL AMBULANCE IMMEDIATELY!" << endl;
        }
    }

    cout<<endl;
    cout<<"                            ========== Coronary Artery Disease ==========="<<endl<<endl;
    cout<<"        Coronary Artery Disease occurs when the arteries supplying blood to the heart become narrowed or blocked."<<endl;
    cout<<"        This reduces blood flow and can cause chest pain (angina), shortness of breath, or heart attacks."<<endl<<endl;
    cout<<"        Risk factors include hypertension, high cholesterol, smoking, diabetes, obesity, and sedentary lifestyle."<<endl;
    cout<<"        Treatment ranges from medicines, lifestyle change, to surgery (bypass, stent)."<<endl;
}

  
  //----------- Arrhythmias -------------
  //----------- Arrhythmias -------------
else if(best.first == "Arrhythmias"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with occasional irregular heartbeat. Needs pediatric cardiac evaluation." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with frequent arrhythmias. URGENT: ECG and pediatric cardiology checkup required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Severe arrhythmias in child (fainting, chest pain, breathing difficulty). CALL AMBULANCE!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with minor irregular heartbeat. ECG and lifestyle management needed." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with frequent irregular heart rhythm. URGENT hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Severe arrhythmias (dizziness, fainting, chest pain). HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with minor arrhythmias. Regular monitoring and cardiologist advice needed." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate arrhythmias. HIGH RISK: Immediate hospital care required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Severe arrhythmias in elderly (possible cardiac arrest). CALL AMBULANCE IMMEDIATELY!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Arrhythmias ==========="<<endl<<endl;
    cout<<"        Arrhythmias are abnormal heart rhythms where the heart may beat too fast, too slow, or irregularly."<<endl;
    cout<<"        They may cause palpitations, dizziness, fainting, shortness of breath, or chest pain. Severe arrhythmias"<<endl;
    cout<<"        can be life-threatening and may lead to cardiac arrest."<<endl<<endl;
    cout<<"        Diagnosis requires ECG, Holter monitoring, and treatment may include medicines, pacemaker, or ablation therapy."<<endl;
}

  
  //----------- Heart failure -------------
if(best.first == "Heart Failure"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild heart failure symptoms (fatigue, mild shortness of breath). Pediatric cardiology evaluation required." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate heart failure symptoms (swelling, difficulty breathing). URGENT: Hospital evaluation needed." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe heart failure (severe breathlessness, fluid accumulation, fatigue). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild heart failure symptoms. Lifestyle changes, medication, and cardiologist follow-up recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate heart failure symptoms (shortness of breath, swelling). URGENT hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe heart failure (fluid retention, breathing difficulty). GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild heart failure symptoms. Regular monitoring and cardiologist consultation needed." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly person with moderate heart failure. HIGH RISK: Hospital evaluation immediately required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe heart failure. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Heart Failure ==========="<<endl<<endl;
    cout<<"        Heart failure occurs when the heart cannot pump blood efficiently, leading to fatigue, breathlessness, and fluid retention."<<endl;
    cout<<"        Causes include coronary artery disease, hypertension, valvular heart disease, or cardiomyopathy."<<endl<<endl;
    cout<<"        Early detection and treatment (medications, lifestyle changes, and sometimes surgery) can prevent progression."<<endl;
    cout<<"        Severe cases require immediate hospitalization to prevent life-threatening complications."<<endl;
}

  
  //----------- Stroke / Peripheral Artery Disease (PAD) -------------
else if(best.first == "Stroke Peripheral Artery Disease"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children, but if stroke or PAD symptoms appear (numbness, weakness, limb pain), urgent hospital evaluation is required." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild stroke or PAD symptoms (numbness, tingling, mild limb pain). Medical consultation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (weakness, intermittent claudication, balance issues). URGENT: Hospital evaluation needed." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe stroke (facial droop, speech difficulty, paralysis) or severe PAD (critical limb ischemia). CALL AMBULANCE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild stroke or PAD symptoms. Medical consultation and regular monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly person with moderate stroke or PAD symptoms. HIGH RISK: Hospital evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe stroke or PAD (paralysis, critical limb ischemia). CALL AMBULANCE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                      ========== Stroke / Peripheral Artery Disease (PAD) ==========="<<endl<<endl;
    cout<<"        Stroke occurs when blood flow to the brain is blocked or reduced, causing brain damage."<<endl;
    cout<<"        PAD occurs when arteries in the limbs are narrowed, leading to reduced blood flow, pain, or tissue damage."<<endl<<endl;
    cout<<"        Risk factors include hypertension, diabetes, high cholesterol, smoking, obesity, and sedentary lifestyle."<<endl;
    cout<<"        Early detection, medications, and lifestyle changes can prevent serious complications."<<endl;
    cout<<"        Severe cases require immediate hospitalization to prevent permanent disability or death."<<endl;
}

  
  //----------- Pneumonia -------------
if(best.first == "Pneumonia"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild pneumonia symptoms (cough, low-grade fever). Rest, hydration, and pediatric consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate pneumonia (persistent fever, difficulty breathing). URGENT: Hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe pneumonia (rapid breathing, chest pain, cyanosis). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild pneumonia symptoms. Rest, fluids, and medical consultation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate pneumonia (fever, persistent cough, shortness of breath). URGENT hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe pneumonia (difficulty breathing, high fever, confusion). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild pneumonia symptoms. Close monitoring and doctor consultation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate pneumonia. HIGH RISK: Hospital evaluation required immediately." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe pneumonia. CALL AMBULANCE & GO TO HOSPITAL NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Pneumonia ==========="<<endl<<endl;
    cout<<"        Pneumonia is an infection of the lungs causing inflammation, cough, fever, and difficulty breathing."<<endl;
    cout<<"        It can be caused by bacteria, viruses, or fungi. Severe pneumonia can lead to respiratory failure."<<endl;
    cout<<"        Early diagnosis, antibiotics (if bacterial), and supportive care can prevent complications."<<endl;
}

  
//----------- Bronchitis -------------
else if(best.first == "Bronchitis"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild bronchitis (cough, mild wheezing). Rest, fluids, and medical observation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate bronchitis (persistent cough, mild shortness of breath). URGENT: Pediatric consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe bronchitis (trouble breathing, chest tightness). CALL AMBULANCE & HOSPITALIZE!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild bronchitis symptoms (cough, sputum). Rest, fluids, and medical checkup recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate bronchitis (persistent cough, shortness of breath). URGENT hospital evaluation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe bronchitis (breathing difficulty, high fever). HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild bronchitis symptoms. Medical monitoring recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate bronchitis. HIGH RISK: Hospital evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe bronchitis. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Bronchitis ==========="<<endl<<endl;
    cout<<"        Bronchitis is inflammation of the bronchial tubes, causing cough, mucus production, and sometimes wheezing."<<endl;
    cout<<"        Acute bronchitis is usually viral and resolves with rest, fluids, and supportive care, while chronic bronchitis"<<endl;
    cout<<"        may require long-term management and medications."<<endl;
}
//----------- Asthma -------------
if(best.first == "Asthma"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild asthma (occasional wheezing or shortness of breath). Monitor symptoms, use inhaler if prescribed, and avoid triggers." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate asthma (frequent wheezing, coughing, shortness of breath). URGENT: Pediatric evaluation needed." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe asthma attack (difficulty breathing, chest tightness). CALL AMBULANCE & HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild asthma. Use prescribed inhaler, avoid triggers, and monitor breathing regularly." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate asthma (frequent symptoms or mild activity limitation). URGENT hospital consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe asthma attack (severe shortness of breath, wheezing, chest tightness). GO TO HOSPITAL IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild asthma. Regular monitoring and medication adherence recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate asthma. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe asthma attack. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Asthma ==========="<<endl<<endl;
    cout<<"        Asthma is a chronic respiratory condition that causes inflammation and narrowing of the airways, leading to wheezing,"<<endl;
    cout<<"        coughing, shortness of breath, and chest tightness. Symptoms can be triggered by allergens, cold air, exercise,"<<endl;
    cout<<"        or respiratory infections."<<endl<<endl;
    cout<<"        Management includes inhalers (relievers and preventers), avoiding triggers, regular monitoring, and urgent care"<<endl;
    cout<<"        during severe attacks to prevent life-threatening complications."<<endl;
}

   
  
  
  
  
  
  
  
  
}
  }



