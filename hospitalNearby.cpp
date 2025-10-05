#include "cls.h"
void detail::hospital1(pair<string,float> best){
	string district="";
  	string location="";
  	cout<<"\n\n\n";
  	cout<<"                                             ---------- Nearby Hospital -----------"<<endl;
  	cout<<"\n\n\n";
  	cout<<"                                                District: ";
  	cin>>district;
  	cout<<"\n";
  	cout<<"                                                Location: ";
  	cin>>location;
  	
  		system("cls");
  			cout<<"\n\n\n";
  	if(district == "kathmandu"){
  		    cout<<"                              ---------- Nearby Hospital in Kathmandu:-----------"<<endl<<endl;
  		if(location == "boudha"){
            cout<<"                                         1. Stupa Community Hospital\n";
            cout<<"                                         2. Khangri International Hospital Pvt. Ltd\n";
            cout<<"                                         3. Boudha Stupa Polyclinic\n";
            cout<<"                                         4. Bir Hospital (Shree Birendra Hospital)\n";
            cout<<"                                         5. Tribhuvan University Teaching Hospital (TUTH)\n";
		  } else if(location == "jorpati"){
		  	cout << "                                         1. Khangri International Hospital Pvt. Ltd\n";
cout << "                                         2. Nepal Orthopaedic Hospital\n";
cout << "                                         3. Norvic International Hospital (Thapathali)\n";
cout << "                                         4. Boudha Stupa Polyclinic\n";
cout << "                                         5. Civil Service Hospital\n";
		  }
	  }
	  
	  
//--------------- Heart Attack / Cardiac Care ----------------------
if (best.first == "Heart Attack") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Shahid Gangalal National Heart Centre (Bansbari, Kathmandu)\n";
    cout << "                                         - National Cardiac Centre (Bansbari, Kathmandu)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
}

//--------------- Infectious Diseases ----------------------
if (best.first == "Infectious Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Sukraraj Tropical and Infectious Disease Hospital (Teku, Kathmandu)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - CIWEC Clinic (Thamel, Kathmandu)\n";
    cout << "                                         - Patan Hospital (Patan, Lalitpur)\n";
    cout << "                                         - Shree Harsha Hospital (Balkumari, Lalitpur)\n";
}

//--------------- Kidney / Urinary Tract Diseases ----------------------
if (best.first == "Kidney Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Hamro Hospital (Balkumari, Lalitpur)\n";
    cout << "                                         - Shree Harsha Hospital (Balkumari, Lalitpur)\n";
}

//--------------- Blood / Immune System Diseases ----------------------
if (best.first == "Blood Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Blood Hospital (Jawalakhel, Lalitpur)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
}

//--------------- Skin / Dermatological Diseases ----------------------
if (best.first == "Skin Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Skin Hospital (New Baneshwor, Kathmandu)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Aesthetic Aura Clinic (Kathmandu)\n";
    cout << "                                         - DI Skin Hospital (Kathmandu)\n";
    cout << "                                         - Dhulikhel Hospital (Dhulikhel, Kavre)\n";
}

//--------------- Eye and Ear Disorder Diseases ----------------------
if (best.first == "Eye Disorders") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Eye Hospital (Lazimpat, Kathmandu)\n";
    cout << "                                         - ASG Eye Hospital (Kathmandu)\n";
    cout << "                                         - Drishti Eye Care System (Kathmandu)\n";
    cout << "                                         - Matrika Eye Center (Kathmandu)\n";
    cout << "                                         - Biratnagar Eye Hospital (Biratnagar, Morang)\n";
}

if (best.first == "Ear Disorders") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Kathmandu ENT Hospital (Kathmandu)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Clinic One (Kathmandu)\n";
    cout << "                                         - Nepal ENT Center (Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
}

//--------------- Gastrointestinal Diseases ----------------------
if (best.first == "Gastrointestinal Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Frontline Hospital (Old Baneshwor, Kathmandu)\n";
    cout << "                                         - Clinic One (Kathmandu)\n";
}

//--------------- Neurological Diseases ----------------------
if (best.first == "Neurological Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Shree Harsha Hospital (Balkumari, Lalitpur)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
    cout << "                                         - Kathmandu Medical College Teaching Hospital (Kathmandu)\n";
}

//--------------- Musculoskeletal Diseases ----------------------
if (best.first == "Musculoskeletal Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Orthopaedic Hospital (Kathmandu)\n";
    cout << "                                         - KIST Medical College & Teaching Hospital (Imadol, Lalitpur)\n";
    cout << "                                         - Norvic International Hospital (Thapathali, Kathmandu)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
}

//--------------- Metabolic / Endocrine Diseases ----------------------
if (best.first == "Metabolic Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
}

//--------------- Respiratory Diseases ----------------------
if (best.first == "Respiratory Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Shree Harsha Hospital (Balkumari, Lalitpur)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
    cout << "                                         - Kathmandu Medical College Teaching Hospital (Kathmandu)\n";
}


	  
//--------------- Kidney / Urinary Tract Diseases ----------------------
if (best.first == "Kidney Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Venus Hospital (Devkota Sadak, Kathmandu)\n";
    cout << "                                         - Hamro Hospital (Balkumari, Lalitpur)\n";
    cout << "                                         - Shree Harsha Hospital (Balkumari, Lalitpur)\n";
}

//--------------- Blood / Immune System Diseases ----------------------
if (best.first == "Blood Diseases") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Blood Hospital (Jawalakhel, Lalitpur)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Grande International Hospital (Anamnagar, Kathmandu)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
}

//--------------- Cancer / Oncology Diseases ----------------------
if (best.first == "Cancer") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Kathmandu Cancer Center (Tathali, Bhaktapur)\n";
    cout << "                                         - B.P. Koirala Memorial Cancer Hospital (Chitwan)\n";
    cout << "                                         - Binaytara Cancer Hospital (Janakpur)\n";
    cout << "                                         - Kathmandu Medical College Teaching Hospital (Kathmandu)\n";
    cout << "                                         - Civil Service Hospital (Bansbari, Kathmandu)\n";
}

//--------------- Mental Health / Psychiatric Diseases ----------------------
if (best.first == "Mental Health") {
    cout << "                             ---------- Best Recommendation Hospital for " << best.first << " ----------" << endl << endl;
    cout << "                                         - Beautiful Mind Institute of Psychiatry (Chitwan)\n";
    cout << "                                         - Rhythm Neuropsychiatry Hospital (Kathmandu)\n";
    cout << "                                         - Tranquility Hospital & Research Center (Lalitpur)\n";
    cout << "                                         - Nepal Mediciti Hospital (Karyabinayak, Lalitpur)\n";
    cout << "                                         - Om Hospital & Research Centre (Chabahil, Kathmandu)\n";
}

	  
	  
	  
	  getchar();
	  getchar();
	  system("cls");
}
