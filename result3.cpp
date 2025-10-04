#include "cls.h"

 void detail::result3(pair<string,float> best){
 	if(best.first == "Acne" || best.first == "Eczema / Dermatitis" || best.first == "Psoriasis" || best.first == "Skin Cancer" || best.first == "Fungal Infections" ||
 	   best.first == "Cataract" || best.first == "Glaucoma" || best.first == "Macular Degeneration" || best.first == "Hearing Loss / Ear Infections" || 
		best.first == "Urinary Tract Infection (UTI)" ||
 	   best.first == "Kidney Stones" || best.first == "Chronice Kidney Disease (CKD)" || best.first == "Anemia" || best.first == "Leukemia / Lymphoma" || best.first == "Hemophilia" ||
 	   best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)" || best.first == "Breast Cancer" || best.first == "Colon Cancer" || best.first == "Prostate Cancer" || 
		best.first == "Skin Cancer"
	 ) {
	 	  cout<<endl<<endl<<endl;
 	cout<<"                                    ========== Health Analysis =========="<<endl<<endl;
 	cout<<"                                     Illness: "<<best.first<<endl;
 	cout<<"                                     Percentage: "<<best.second<<"%"<<endl<<endl;
 	
 	cout<<"                                    ========== Recommendation ============="<<endl<<endl;
 	cout<<"                                   Age: "<<age<<"      Duration: "<<duration<<" Days        Severity: "<<severity<<endl<<endl;
 	
 //----------- Acne -------------
if(best.first == "Acne"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Teenager with mild acne. Maintain proper skin hygiene, gentle cleansing, and over-the-counter topical treatments recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Teenager with moderate acne (inflammatory pimples). Consult a dermatologist for treatment." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Teenager with severe acne (cystic or nodular). Dermatology intervention required immediately!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild acne. Maintain skincare routine and consider topical treatments." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate acne. Dermatology consultation advised for oral or topical medications." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe acne complications (scarring, infection). HOSPITALIZE OR CONSULT DERMATOLOGIST IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild acne. Monitor skin health and maintain hygiene." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate acne. Dermatology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe acne. URGENT dermatology care required!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Acne ==========="<<endl<<endl;
    cout<<"        Acne is a common skin condition causing pimples, blackheads, and whiteheads. Proper hygiene, topical/oral medications,"<<endl;
    cout<<"        and dermatology guidance help manage symptoms and prevent scarring."<<endl;
}

//----------- Eczema / Dermatitis -------------
else if(best.first == "Eczema / Dermatitis"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild eczema (itchy, dry skin). Moisturizers and gentle skincare advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate eczema (red, inflamed patches). URGENT pediatric dermatologist consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe eczema (infection, severe inflammation). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild eczema. Moisturizers, avoiding triggers, and skincare routine advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate eczema. Dermatology consultation recommended for treatment." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe eczema complications (infection, extensive inflammation). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild eczema. Skin care and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate eczema. Dermatology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe eczema. URGENT hospital care required!" << endl;
        }
    }

    cout<<endl;
    cout<<"                         ========== Eczema / Dermatitis ==========="<<endl<<endl;
    cout<<"        Eczema (dermatitis) is a skin condition causing redness, itching, and inflammation. Management includes moisturizers,"<<endl;
    cout<<"        avoiding triggers, medications, and dermatology guidance for severe cases."<<endl;
}

 	//----------- Psoriasis -------------
if(best.first == "Psoriasis"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild psoriasis (small red patches, scaling). Moisturizers and gentle skin care advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate psoriasis (larger plaques, itching). Pediatric dermatologist consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe psoriasis (extensive skin involvement, infection risk). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild psoriasis. Topical treatments, moisturizers, and regular skin care advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate psoriasis (larger plaques, inflammation). Dermatology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe psoriasis complications (extensive skin involvement or infection). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild psoriasis. Skin care and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate psoriasis. Dermatology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe psoriasis complications. URGENT hospital care required!" << endl;
        }
    }

    cout<<endl;
    cout<<"                               ========== Psoriasis ==========="<<endl<<endl;
    cout<<"        Psoriasis is a chronic skin condition causing red, scaly patches. Management includes topical/oral medications,"<<endl;
    cout<<"        moisturizers, lifestyle modifications, and urgent dermatology care for severe cases."<<endl;
}

 //----------- Skin Cancer -------------
else if(best.first == "Skin Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any suspicious mole or skin lesion requires URGENT pediatric dermatology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with minor suspicious skin lesion. Dermatology evaluation recommended for early detection." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate skin lesion (changes in color, size, or shape). URGENT dermatology consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe skin cancer symptoms (rapid growth, ulceration). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with minor suspicious skin lesion. Dermatology evaluation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate skin lesion. HIGH RISK: Immediate medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe skin cancer. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                               ========== Skin Cancer ==========="<<endl<<endl;
    cout<<"        Skin cancer is the uncontrolled growth of abnormal skin cells. Early detection, medical evaluation, treatment (surgery, radiation, chemotherapy),"<<endl;
    cout<<"        and regular dermatology follow-up are crucial for effective management."<<endl;
}

 	//----------- Fungal Infections -------------
if(best.first == "Fungal Infections"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild fungal infection (skin rashes, mild itching). Topical antifungal creams and hygiene advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate fungal infection (spreading rash, persistent itching). URGENT pediatric dermatology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe fungal infection (widespread or systemic). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild fungal infection. Topical antifungal treatment and hygiene advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate fungal infection. Dermatology consultation recommended for systemic or persistent infections." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe fungal infection (widespread or systemic). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild fungal infection. Skin care and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate fungal infection. Dermatology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe fungal infection. URGENT hospital care required!" << endl;
        }
    }

    cout<<endl;
    cout<<"                            ========== Fungal Infections ==========="<<endl<<endl;
    cout<<"        Fungal infections are caused by fungi affecting skin, nails, or mucous membranes. Management includes topical/oral antifungal medications,"<<endl;
    cout<<"        maintaining hygiene, and urgent care for severe or systemic infections."<<endl;
}

 //----------- Cataract -------------
else if(best.first == "Cataract"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any vision problems or lens opacity require URGENT pediatric ophthalmology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early cataract (slight vision blurring). Regular eye exams and monitoring recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate cataract (noticeable vision impairment). Ophthalmology consultation advised for potential surgery." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe cataract causing significant vision loss. SURGERY may be required urgently!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild cataract. Regular eye check-ups and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate cataract. Ophthalmology evaluation recommended for timely intervention." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe cataract causing major vision impairment. SURGERY needed urgently!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                  ========== Cataract ==========="<<endl<<endl;
    cout<<"        Cataract is the clouding of the eye lens leading to blurred vision. Management includes regular eye exams,"<<endl;
    cout<<"        medications if applicable, and surgical removal for advanced cases."<<endl;
}

 	//----------- Glaucoma -------------
if(best.first == "Glaucoma"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any vision loss or eye pain requires URGENT pediatric ophthalmology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early glaucoma (slight increase in eye pressure). Regular eye exams and monitoring recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate glaucoma (increased pressure, early vision loss). URGENT ophthalmology consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe glaucoma (advanced vision loss). HOSPITALIZE OR SEEK IMMEDIATE EYE CARE!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild glaucoma. Regular monitoring and medications advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate glaucoma. HIGH RISK: Immediate ophthalmology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe glaucoma causing vision loss. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                ========== Glaucoma ==========="<<endl<<endl;
    cout<<"        Glaucoma is an eye condition causing increased intraocular pressure and potential vision loss. Management includes medications,"<<endl;
    cout<<"        regular eye check-ups, laser treatment, or surgery for advanced cases."<<endl;
}

 //----------- Macular Degeneration -------------
else if(best.first == "Macular Degeneration"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any vision changes require URGENT pediatric ophthalmology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early macular degeneration (slight central vision changes). Regular eye exams recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate macular degeneration (noticeable central vision loss). Ophthalmology consultation advised." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe macular degeneration (significant vision loss). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild macular degeneration. Regular monitoring and eye care advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate macular degeneration. HIGH RISK: Immediate ophthalmology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe macular degeneration causing major vision loss. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                        ========== Macular Degeneration ==========="<<endl<<endl;
    cout<<"        Macular degeneration is a progressive eye disorder causing central vision loss. Management includes regular eye exams,"<<endl;
    cout<<"        lifestyle changes, medications, and urgent ophthalmology care for advanced stages."<<endl;
}

 	//----------- Hearing Loss / Ear Infections -------------
if(best.first == "Hearing Loss / Ear Infections"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild ear infection (mild pain, slight hearing difficulty). Home care and ENT follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate ear infection (moderate pain, fluid buildup). URGENT pediatric ENT consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe ear infection (high fever, severe pain, hearing loss). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild ear infection or slight hearing loss. ENT consultation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate ear infection (pain, fluid, hearing impairment). URGENT ENT evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe ear infection or sudden hearing loss. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild ear infection or hearing loss. ENT follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate ear infection or hearing issues. URGENT evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe ear infection or sudden hearing loss. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                     ========== Hearing Loss / Ear Infections ==========="<<endl<<endl;
    cout<<"        Hearing loss and ear infections can be caused by infections, fluid buildup, or other conditions. Management includes medications,"<<endl;
    cout<<"        ENT consultation, and urgent care for severe symptoms."<<endl;
}

 //----------- Urinary Tract Infection (UTI) -------------
else if(best.first == "Urinary Tract Infection (UTI)"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild UTI (burning sensation, mild discomfort). Hydration and pediatric evaluation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate UTI (painful urination, fever). URGENT pediatric consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe UTI (high fever, kidney involvement). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild UTI. Hydration, hygiene, and medical consultation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate UTI (burning, fever). URGENT medical evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe UTI (kidney infection, high fever). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild UTI. Hydration and regular monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate UTI symptoms. URGENT evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe UTI complications. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                       ========== Urinary Tract Infection (UTI) ==========="<<endl<<endl;
    cout<<"        UTI is an infection of the urinary system causing pain, burning, and sometimes fever. Management includes antibiotics, hydration,"<<endl;
    cout<<"        and urgent care for severe or complicated infections."<<endl;
}

 //----------- Kidney Stones -------------
if(best.first == "Kidney Stones"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with small kidney stones. Hydration and pediatric nephrology follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate kidney stones (pain, hematuria). URGENT pediatric nephrology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with large or obstructive kidney stones. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with small kidney stones. Hydration, pain management, and urology follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate kidney stones (pain, urinary blockage). URGENT urology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with large or obstructive kidney stones causing severe pain. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with small kidney stones. Hydration and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate kidney stones. URGENT medical evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with large kidney stones or obstruction. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                               ========== Kidney Stones ==========="<<endl<<endl;
    cout<<"        Kidney stones are hard deposits formed in the kidneys causing pain, hematuria, and urinary blockage. Management includes hydration,"<<endl;
    cout<<"        pain control, medical or surgical intervention for severe cases."<<endl;
}

 //----------- Chronic Kidney Disease (CKD) -------------
else if(best.first == "Chronic Kidney Disease (CKD)"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any signs of kidney dysfunction require URGENT pediatric nephrology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage CKD. Regular monitoring, medications, and lifestyle changes advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate CKD (reduced kidney function). URGENT nephrology consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe CKD (risk of kidney failure). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with early-stage CKD. Regular monitoring and medications advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate CKD. URGENT nephrology evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe CKD (risk of kidney failure). CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                        ========== Chronic Kidney Disease (CKD) ==========="<<endl<<endl;
    cout<<"        CKD is the gradual loss of kidney function over time. Management includes medications, lifestyle modifications,"<<endl;
    cout<<"        regular nephrology follow-up, and urgent care for advanced stages."<<endl;
}

 	//----------- Anemia -------------
if(best.first == "Anemia"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild anemia (slight fatigue, pallor). Iron-rich diet and pediatric evaluation advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate anemia (fatigue, weakness). URGENT pediatric consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe anemia (very low hemoglobin, shortness of breath). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild anemia. Iron supplements, diet, and medical follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate anemia. URGENT medical evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe anemia (very low hemoglobin, severe fatigue). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild anemia. Diet, supplements, and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate anemia. URGENT evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe anemia. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Anemia ==========="<<endl<<endl;
    cout<<"        Anemia is a condition with low red blood cell count or hemoglobin causing fatigue, pallor, and weakness."<<endl;
    cout<<"        Management includes iron-rich diet, supplements, and urgent care for severe cases."<<endl;
}

 	//----------- Leukemia / Lymphoma -------------
else if(best.first == "Leukemia / Lymphoma"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild symptoms (fatigue, mild lymph node swelling). Pediatric hematology evaluation recommended." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate symptoms (persistent fatigue, enlarged lymph nodes). URGENT pediatric hematology consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe leukemia/lymphoma symptoms (bleeding, extreme fatigue). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild leukemia/lymphoma symptoms. Hematology evaluation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (persistent fatigue, lymph node enlargement). URGENT hematology consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe leukemia/lymphoma (bleeding, severe weakness). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild symptoms. Hematology evaluation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate symptoms. URGENT hematology consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe leukemia/lymphoma. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                        ========== Leukemia / Lymphoma ==========="<<endl<<endl;
    cout<<"        Leukemia and lymphoma are cancers of the blood and lymphatic system causing fatigue, swollen lymph nodes, and bleeding."<<endl;
    cout<<"        Management includes hematology evaluation, medications, chemotherapy, and urgent care for severe cases."<<endl;
}

 	//----------- Hemophilia -------------
if(best.first == "Hemophilia"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild hemophilia. Avoid injuries, monitor bleeding, and consult pediatric hematologist." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate hemophilia. URGENT hematology consultation required for bleeding management." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe hemophilia (spontaneous or uncontrolled bleeding). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild hemophilia. Avoid trauma, monitor bleeding, and follow hematology advice." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate hemophilia. URGENT hematology evaluation for bleeding management recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe hemophilia (spontaneous or excessive bleeding). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly with mild hemophilia. Monitor bleeding and follow hematology guidance." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate hemophilia. URGENT evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe hemophilia. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Hemophilia ==========="<<endl<<endl;
    cout<<"        Hemophilia is a bleeding disorder caused by lack of clotting factors. Management includes avoiding injuries, regular hematology follow-up,"<<endl;
    cout<<"        and urgent care for severe bleeding episodes."<<endl;
}

 	//----------- Autoimmune Disorders (Lupus, Multiple Sclerosis) -------------
else if(best.first == "Autoimmune Disorders (Lupus, Multiple Sclerosis)"){
    // Children / Teenagers
    if(age <= 18){
        if(severity == "minor"){
            cout << "            Child with mild autoimmune disorder symptoms. Pediatric rheumatology/neurology follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Child with moderate symptoms (fatigue, joint pain, neurological issues). URGENT specialist consultation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Child with severe autoimmune flare (organ involvement, severe neurological deficits). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with mild autoimmune disorder symptoms. Specialist follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate symptoms (joint pain, fatigue, neurological issues). URGENT specialist consultation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with severe autoimmune disorder flare. HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with mild autoimmune disorder symptoms. Specialist follow-up advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate symptoms. URGENT evaluation recommended." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with severe autoimmune disorder flare. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"        ========== Autoimmune Disorders (Lupus, Multiple Sclerosis) ==========="<<endl<<endl;
    cout<<"        Autoimmune disorders occur when the immune system attacks the body, causing fatigue, joint pain, and organ or neurological involvement."<<endl;
    cout<<"        Management includes medications, specialist follow-up, and urgent care for severe flares."<<endl;
}

 //----------- Breast Cancer -------------
if(best.first == "Breast Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any breast lumps or changes require URGENT pediatric oncology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage breast cancer (small lump, no spread). Oncology consultation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate breast cancer (larger lump, possible lymph node involvement). URGENT oncology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with advanced breast cancer (rapid growth or metastasis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with early-stage breast cancer. Oncology follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate breast cancer. URGENT oncology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with advanced breast cancer. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Breast Cancer ==========="<<endl<<endl;
    cout<<"        Breast cancer is a malignant tumor of breast tissue. Management includes surgery, chemotherapy, radiotherapy, and regular oncology follow-up."<<endl;
}

 //----------- Colon Cancer -------------
else if(best.first == "Colon Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any persistent abdominal symptoms or changes in bowel habits require URGENT pediatric oncology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage colon cancer. Oncology consultation and regular monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate colon cancer (tumor progression, early spread). URGENT oncology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with advanced colon cancer (obstruction, metastasis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with early-stage colon cancer. Oncology follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate colon cancer. URGENT oncology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with advanced colon cancer. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Colon Cancer ==========="<<endl<<endl;
    cout<<"        Colon cancer is a malignant tumor of the large intestine. Management includes surgery, chemotherapy, radiotherapy, and regular oncology follow-up."<<endl;
}

 //----------- Prostate Cancer -------------
if(best.first == "Prostate Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Extremely rare in children. Any urinary issues or prostate abnormalities require URGENT pediatric urology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage prostate cancer. Urology consultation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate prostate cancer (tumor progression). URGENT urology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with advanced prostate cancer (obstruction or metastasis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with early-stage prostate cancer. Urology follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate prostate cancer. URGENT urology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with advanced prostate cancer. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Prostate Cancer ==========="<<endl<<endl;
    cout<<"        Prostate cancer is a malignant tumor of the prostate gland. Management includes surgery, radiotherapy, chemotherapy, and regular urology follow-up."<<endl;
}

 //----------- Skin Cancer -------------
else if(best.first == "Skin Cancer"){
    // Children / Teenagers
    if(age <= 18){
        cout << "            Rare in children. Any suspicious skin lesions or moles require URGENT dermatology evaluation." << endl;
    }

    // Adults (19–60 years)
    else if(age > 18 && age <= 60){
        if(severity == "minor"){
            cout << "            Adult with early-stage skin cancer (small lesion). Dermatology consultation and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Adult with moderate skin cancer (spreading lesion). URGENT dermatology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Adult with advanced skin cancer (rapid growth or metastasis). HOSPITALIZE IMMEDIATELY!" << endl;
        }
    }

    // Elderly (>60 years)
    else if(age > 60){
        if(severity == "minor"){
            cout << "            Elderly person with early-stage skin cancer. Dermatology follow-up and monitoring advised." << endl;
        }
        else if(severity == "moderate"){
            cout << "            Elderly with moderate skin cancer. URGENT dermatology evaluation required." << endl;
        }
        else if(severity == "serious"){
            cout << "            EMERGENCY: Elderly with advanced skin cancer. CALL AMBULANCE & HOSPITALIZE NOW!" << endl;
        }
    }

    cout<<endl;
    cout<<"                                   ========== Skin Cancer ==========="<<endl<<endl;
    cout<<"        Skin cancer is a malignant growth of skin cells. Management includes surgical removal, chemotherapy, radiotherapy, and regular dermatology follow-up."<<endl;
}

 	
 	
 	
	 }
 }
