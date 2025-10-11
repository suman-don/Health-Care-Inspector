#include "cls.h"

// Healthinfo1: Common Cold
pair<string,float> detail::healthinfo1() {
	//--------------- Weight of symptom ----------------
	    const int abdominalpain=2, anxiety=1, bleeding=3, blisters=2, blurredvision=3, bodyaches=1,
              breathless=3, chestdiscomfort=2, chestpain=3, chills=2, coldfeet=1, confusion=3,
              cough=1, coughingblood=3, cramps=2, darkurine=2, difficultbreathing=3, 
              difficultylyingflat=2, difficultysleeping=1, diarrhea=2, dizziness=2, drycough=1,
              facialdroop=3, fainting=3, fatigue=1, fever=2, hairloss=1, headache=1, 
              irregularheartbeat=3, irritability=1, itching=1, itchyrash=2, jaundice=3, 
              jointpain=2, legpain=2, lossappetite=2, lossbalance=3, lossofsmell=2, 
              lossoftaste=2, lossweight=3, mildcough=1, mouthsores=2, mucus=1, muscleaches=2, 
              musclepain=2, nausea=2, nightssweats=2, numbness=3, painbehindtheeyes=2, 
              palpitations=3, palpitationsduringactivity=3, persistentcough=2, rapidbreathing=3, 
              rapidheartbeat=3, rash=2, redeyes=1, recurrentinfections=3, runnynose=1, 
              shortnessofbreath=3, skincolorchange=3, skinrash=2, slightfever=1, slowhealing=2, 
              sneezing=1, sorethroat=1, suddenweakness=3, sweating=2, swellinglegs=2,
              tightchest=3, tiredness=1, troubleseeing=3, troublesleeping=1, troublespeaking=3, 
              troublewalking=3, vomiting=2, wakingupatnight=1, wateryeyes=1, weakness=2, 
              weakpulse=3, weightloss=3, wheezing=3, wounds=2,
		/* new declared*/	  swollenlymphnodes=3, nosebleeds=3,severeheadache =4;
	
	//----------------- Common Cold -----------------------
    int coldMatch = 0;
    coldMatch += (symptom.find("runnynose") != string::npos) ? runnynose : 0;
    coldMatch += (symptom.find("sneezing") != string::npos) ? sneezing : 0;
    coldMatch += (symptom.find("sorethroat") != string::npos) ? sorethroat : 0;
    coldMatch += (symptom.find("cough") != string::npos) ? cough : 0;
    coldMatch += (symptom.find("wateryeyes") != string::npos) ? wateryeyes : 0;
    coldMatch += (symptom.find("headache") != string::npos) ? headache : 0;
    coldMatch += (symptom.find("bodyaches") != string::npos) ? bodyaches : 0;
    coldMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
    coldMatch += (symptom.find("fever") != string::npos) ? fever : 0;
    
    float coldPlus = 0;
    if(symptom.find("fever") != string::npos){
     coldPlus += fever-1;	
	}
    
    float coldPercentage = (float) coldMatch/(count+coldPlus)*100;
    
    	//----------------- Dengue -----------------------
   int dengueMatch = 0;
dengueMatch += (symptom.find("fever") != string::npos) ? fever : 0;
dengueMatch += (symptom.find("painbehindtheeyes") != string::npos) ? painbehindtheeyes : 0;
dengueMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
dengueMatch += (symptom.find("musclepain") != string::npos) ? musclepain : 0;
dengueMatch += (symptom.find("headache") != string::npos) ? headache : 0;
dengueMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
dengueMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
dengueMatch += (symptom.find("skinrash") != string::npos) ? skinrash : 0;
dengueMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
dengueMatch += (symptom.find("bleeding") != string::npos) ? bleeding : 0; // nose/gums bleeding

 float denguePlus = 0;
 if(symptom.find("fever") != string::npos){
 	denguePlus += fever-1;
 }
 if(symptom.find("painbehindtheeyes") != string::npos){
 	denguePlus += painbehindtheeyes-1;
 }
  if(symptom.find("jointpain") != string::npos){
 	denguePlus += jointpain-1;
 }
  if(symptom.find("musclepain") != string::npos){
 	denguePlus += musclepain-1;
 }
  if(symptom.find("nausea") != string::npos){
 	denguePlus += nausea-1;
 }
  if(symptom.find("vomiting") != string::npos){
 	denguePlus += vomiting-1;
 }
  if(symptom.find("skinrash") != string::npos){
 	denguePlus += skinrash-1;
 }
  if(symptom.find("bleeding") != string::npos){
 	denguePlus += bleeding-1;
 }
 
 float denguePercentage = ((float)dengueMatch / (count + denguePlus)) * 100;


//----------------- COVID-19 -----------------------
int covidMatch = 0;
covidMatch += (symptom.find("fever") != string::npos) ? fever : 0;
covidMatch += (symptom.find("drycough") != string::npos) ? drycough : 0;
covidMatch += (symptom.find("tiredness") != string::npos) ? tiredness : 0;
covidMatch += (symptom.find("lossoftaste") != string::npos) ? lossoftaste : 0;
covidMatch += (symptom.find("lossofsmell") != string::npos) ? lossofsmell : 0;
covidMatch += (symptom.find("sorethroat") != string::npos) ? sorethroat : 0;
covidMatch += (symptom.find("headache") != string::npos) ? headache : 0;
covidMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
covidMatch += (symptom.find("muscleaches") != string::npos) ? muscleaches : 0;
covidMatch += (symptom.find("chills") != string::npos) ? chills : 0;

float covidPlus = 0;

if(symptom.find("fever") != string::npos && fever > 1){
    covidPlus += fever - 1;
}
if(symptom.find("lossoftaste") != string::npos && lossoftaste > 1){
    covidPlus += lossoftaste - 1;
}
if(symptom.find("lossofsmell") != string::npos && lossofsmell > 1){
    covidPlus += lossofsmell - 1;
}
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1){
    covidPlus += shortnessofbreath - 1;
}
if(symptom.find("muscleaches") != string::npos && muscleaches > 1){
    covidPlus += muscleaches - 1;
}
if(symptom.find("chills") != string::npos && chills > 1){
    covidPlus += chills - 1;
}

// Calculate weighted percentage
float covidPercentage = (float)covidMatch / (count + covidPlus) * 100;


//----------------- Tuberculosis (TB) -----------------------
int tbMatch = 0;
tbMatch += (symptom.find("fever") != string::npos) ? fever : 0;
tbMatch += (symptom.find("nightssweats") != string::npos) ? nightssweats : 0;
tbMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
tbMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
tbMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
tbMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
tbMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
tbMatch += (symptom.find("coughingblood") != string::npos) ? coughingblood : 0 ||(symptom.find("cough") != string::npos) ? cough : 0;
tbMatch += (symptom.find("chills") != string::npos) ? chills : 0;

// Extra weight only for symptoms with value >1
float tbPlus = 0;
if(symptom.find("fever") != string::npos){
tbPlus += fever - 1;	
} 
if(symptom.find("nightssweats") != string::npos){
tbPlus += nightssweats - 1;	
} 
if(symptom.find("weightloss") != string::npos){
tbPlus += weightloss - 1;	
} 
if(symptom.find("chestpain") != string::npos){
	tbPlus += chestpain - 1;
} 
if(symptom.find("lossappetite") != string::npos){
	tbPlus += lossappetite - 1;
} 
if(symptom.find("shortnessofbreath") != string::npos) {
	tbPlus += shortnessofbreath - 1;
}
if(symptom.find("coughingblood") != string::npos){
 tbPlus += coughingblood - 1;	
}
if(symptom.find("chills") != string::npos){
	tbPlus += chills - 1;
} 

// Calculate weighted percentage
float tbPercentage = (float)tbMatch / (count + tbPlus) * 100;

//----------------- Hepatitis -----------------------
int hepatitisMatch = 0;
hepatitisMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
hepatitisMatch += (symptom.find("fever") != string::npos) ? fever : 0;
hepatitisMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
hepatitisMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
hepatitisMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
hepatitisMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
hepatitisMatch += (symptom.find("darkurine") != string::npos) ? darkurine : 0;
hepatitisMatch += (symptom.find("jaundice") != string::npos) ? jaundice : 0;
hepatitisMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
hepatitisMatch += (symptom.find("itching") != string::npos) ? itching : 0;

// Extra weight only for symptoms with value >1
float hepatitisPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) hepatitisPlus += fever - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) hepatitisPlus += lossappetite - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) hepatitisPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) hepatitisPlus += vomiting - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) hepatitisPlus += abdominalpain - 1;
if(symptom.find("darkurine") != string::npos && darkurine > 1) hepatitisPlus += darkurine - 1;
if(symptom.find("jaundice") != string::npos && jaundice > 1) hepatitisPlus += jaundice - 1;
if(symptom.find("jointpain") != string::npos && jointpain > 1) hepatitisPlus += jointpain - 1;

// Calculate weighted percentage
float hepatitisPercentage = (float)hepatitisMatch / (count + hepatitisPlus) * 100;

//---------------- Measles ---------------
int measlesMatch = 0;
measlesMatch += (symptom.find("fever") != string::npos) ? fever : 0;
measlesMatch += (symptom.find("cough") != string::npos) ? cough : 0;
measlesMatch += (symptom.find("runnynose") != string::npos) ? runnynose : 0;
measlesMatch += (symptom.find("redeyes") != string::npos) ? redeyes : 0;
measlesMatch += (symptom.find("rash") != string::npos) ? rash : 0;
measlesMatch += (symptom.find("sorethroat") != string::npos) ? sorethroat : 0;
measlesMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
measlesMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
measlesMatch += (symptom.find("diarrhea") != string::npos) ? diarrhea : 0;
measlesMatch += (symptom.find("headache") != string::npos) ? headache : 0;

float measlesPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) measlesPlus += fever - 1;
if(symptom.find("cough") != string::npos && cough > 1) measlesPlus += cough - 1;
if(symptom.find("runnynose") != string::npos && runnynose > 1) measlesPlus += runnynose - 1;
if(symptom.find("redeyes") != string::npos && redeyes > 1) measlesPlus += redeyes - 1;
if(symptom.find("rash") != string::npos && rash > 1) measlesPlus += rash - 1;
if(symptom.find("sorethroat") != string::npos && sorethroat > 1) measlesPlus += sorethroat - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) measlesPlus += lossappetite - 1;
if(symptom.find("diarrhea") != string::npos && diarrhea > 1) measlesPlus += diarrhea - 1;
if(symptom.find("headache") != string::npos && headache > 1) measlesPlus += headache - 1;

float measlesPercentage = ((float)measlesMatch / (count + measlesPlus)) * 100;


 //---------------- Chickenpox ---------------
int chickenpoxMatch = 0;
chickenpoxMatch += (symptom.find("fever") != string::npos) ? fever : 0;
chickenpoxMatch += (symptom.find("itchyrash") != string::npos) ? itchyrash : 0;
chickenpoxMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
chickenpoxMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
chickenpoxMatch += (symptom.find("headache") != string::npos) ? headache : 0;
chickenpoxMatch += (symptom.find("blisters") != string::npos) ? blisters : 0;
chickenpoxMatch += (symptom.find("sorethroat") != string::npos) ? sorethroat : 0;
chickenpoxMatch += (symptom.find("mildcough") != string::npos) ? mildcough : 0;
chickenpoxMatch += (symptom.find("chills") != string::npos) ? chills : 0;
chickenpoxMatch += (symptom.find("muscleaches") != string::npos) ? muscleaches : 0;

float chickenpoxPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) chickenpoxPlus += fever - 1;
if(symptom.find("itchyrash") != string::npos && itchyrash > 1) chickenpoxPlus += itchyrash - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) chickenpoxPlus += lossappetite - 1;
if(symptom.find("headache") != string::npos && headache > 1) chickenpoxPlus += headache - 1;
if(symptom.find("blisters") != string::npos && blisters > 1) chickenpoxPlus += blisters - 1;
if(symptom.find("sorethroat") != string::npos && sorethroat > 1) chickenpoxPlus += sorethroat - 1;
if(symptom.find("mildcough") != string::npos && mildcough > 1) chickenpoxPlus += mildcough - 1;
if(symptom.find("chills") != string::npos && chills > 1) chickenpoxPlus += chills - 1;
if(symptom.find("muscleaches") != string::npos && muscleaches > 1) chickenpoxPlus += muscleaches - 1;

float chickenpoxPercentage = ((float)chickenpoxMatch / (count + chickenpoxPlus)) * 100;


  //---------------- Malaria ---------------
int malariaMatch = 0;
malariaMatch += (symptom.find("fever") != string::npos) ? fever : 0;
malariaMatch += (symptom.find("chills") != string::npos) ? chills : 0;
malariaMatch += (symptom.find("sweating") != string::npos) ? sweating : 0;
malariaMatch += (symptom.find("headache") != string::npos) ? headache : 0;
malariaMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
malariaMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
malariaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
malariaMatch += (symptom.find("musclepain") != string::npos) ? musclepain : 0;
malariaMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
malariaMatch += (symptom.find("diarrhea") != string::npos) ? diarrhea : 0;

float malariaPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) malariaPlus += fever - 1;
if(symptom.find("chills") != string::npos && chills > 1) malariaPlus += chills - 1;
if(symptom.find("sweating") != string::npos && sweating > 1) malariaPlus += sweating - 1;
if(symptom.find("musclepain") != string::npos && musclepain > 1) malariaPlus += musclepain - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) malariaPlus += abdominalpain - 1;

float malariaPercentage = ((float)malariaMatch / (count + malariaPlus)) * 100;


      //---------------- HIV/AIDS ---------------
int hivMatch = 0;
hivMatch += (symptom.find("fever") != string::npos) ? fever : 0;
hivMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
hivMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
hivMatch += (symptom.find("swollenlymphnodes") != string::npos) ? swollenlymphnodes : 0;
hivMatch += (symptom.find("nightssweats") != string::npos) ? nightssweats : 0;
hivMatch += (symptom.find("diarrhea") != string::npos) ? diarrhea : 0;
hivMatch += (symptom.find("mouthsores") != string::npos) ? mouthsores : 0;
hivMatch += (symptom.find("skinrash") != string::npos) ? skinrash : 0;
hivMatch += (symptom.find("recurrentinfections") != string::npos) ? recurrentinfections : 0;
hivMatch += (symptom.find("persistentcough") != string::npos) ? persistentcough : 0;

float hivPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) hivPlus += fever - 1;
if(symptom.find("weightloss") != string::npos && weightloss > 1) hivPlus += weightloss - 1;
if(symptom.find("swollenlymphnodes") != string::npos && swollenlymphnodes > 1) hivPlus += swollenlymphnodes - 1;
if(symptom.find("nightssweats") != string::npos && nightssweats > 1) hivPlus += nightssweats - 1;
if(symptom.find("diarrhea") != string::npos && diarrhea > 1) hivPlus += diarrhea - 1;
if(symptom.find("mouthsores") != string::npos && mouthsores > 1) hivPlus += mouthsores - 1;
if(symptom.find("skinrash") != string::npos && skinrash > 1) hivPlus += skinrash - 1;
if(symptom.find("recurrentinfections") != string::npos && recurrentinfections > 1) hivPlus += recurrentinfections - 1;
if(symptom.find("persistentcough") != string::npos && persistentcough > 1) hivPlus += persistentcough - 1;

float hivPercentage = ((float)hivMatch / (count + hivPlus)) * 100;


        //---------------- Hypertension (High Blood Pressure) ---------------
int hypertensionMatch = 0;
hypertensionMatch += (symptom.find("headache") != string::npos) ? headache : 0;
hypertensionMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
hypertensionMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
hypertensionMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
hypertensionMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
hypertensionMatch += (symptom.find("nosebleeds") != string::npos) ? nosebleeds : 0;
hypertensionMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
hypertensionMatch += (symptom.find("irritability") != string::npos) ? irritability : 0;
hypertensionMatch += (symptom.find("palpitations") != string::npos) ? palpitations : 0;
hypertensionMatch += (symptom.find("difficultysleeping") != string::npos) ? difficultysleeping : 0;

float hypertensionPlus = 0;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) hypertensionPlus += blurredvision - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) hypertensionPlus += chestpain - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) hypertensionPlus += shortnessofbreath - 1;
if(symptom.find("palpitations") != string::npos && palpitations > 1) hypertensionPlus += palpitations - 1;

float hypertensionPercentage = ((float)hypertensionMatch / (count + hypertensionPlus)) * 100;


  //---------------- Coronary Artery Disease (CAD) ---------------
int cadMatch = 0;
cadMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
cadMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
cadMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
cadMatch += (symptom.find("palpitations") != string::npos) ? palpitations : 0;
cadMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
cadMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
cadMatch += (symptom.find("sweating") != string::npos) ? sweating : 0;
cadMatch += (symptom.find("rapidheartbeat") != string::npos) ? rapidheartbeat : 0;
cadMatch += (symptom.find("anxiety") != string::npos) ? anxiety : 0;
cadMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;

// Extra weight only for symptoms >1
float cadPlus = 0;
if(symptom.find("chestpain") != string::npos && chestpain > 1) cadPlus += chestpain - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) cadPlus += shortnessofbreath - 1;
if(symptom.find("palpitations") != string::npos && palpitations > 1) cadPlus += palpitations - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) cadPlus += dizziness - 1;
if(symptom.find("rapidheartbeat") != string::npos && rapidheartbeat > 1) cadPlus += rapidheartbeat - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) cadPlus += weakness - 1;

float cadPercentage = (float)cadMatch / (count + cadPlus) * 100;

//---------------- Arrhythmias ---------------
int arrhythmiaMatch = 0;
arrhythmiaMatch += (symptom.find("palpitations") != string::npos) ? palpitations : 0;
arrhythmiaMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
arrhythmiaMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
arrhythmiaMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
arrhythmiaMatch += (symptom.find("fainting") != string::npos) ? fainting : 0;
arrhythmiaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
arrhythmiaMatch += (symptom.find("irregularheartbeat") != string::npos) ? irregularheartbeat : 0;
arrhythmiaMatch += (symptom.find("anxiety") != string::npos) ? anxiety : 0;
arrhythmiaMatch += (symptom.find("palpitationsduringactivity") != string::npos) ? palpitationsduringactivity : 0;
arrhythmiaMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;

// Extra weight only for symptoms >1
float arrhythmiaPlus = 0;
if(symptom.find("palpitations") != string::npos && palpitations > 1) arrhythmiaPlus += palpitations - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) arrhythmiaPlus += dizziness - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) arrhythmiaPlus += shortnessofbreath - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) arrhythmiaPlus += chestpain - 1;
if(symptom.find("fainting") != string::npos && fainting > 1) arrhythmiaPlus += fainting - 1;
if(symptom.find("irregularheartbeat") != string::npos && irregularheartbeat > 1) arrhythmiaPlus += irregularheartbeat - 1;
if(symptom.find("palpitationsduringactivity") != string::npos && palpitationsduringactivity > 1) arrhythmiaPlus += palpitationsduringactivity - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) arrhythmiaPlus += weakness - 1;

float arrhythmiaPercentage = (float)arrhythmiaMatch / (count + arrhythmiaPlus) * 100;

//---------------- Heart Failure ---------------
int heartFailureMatch = 0;
heartFailureMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
heartFailureMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
heartFailureMatch += (symptom.find("swellinglegs") != string::npos) ? swellinglegs : 0;
heartFailureMatch += (symptom.find("rapidheartbeat") != string::npos) ? rapidheartbeat : 0;
heartFailureMatch += (symptom.find("persistentcough") != string::npos) ? persistentcough : 0;
heartFailureMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
heartFailureMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
heartFailureMatch += (symptom.find("difficultylyingflat") != string::npos) ? difficultylyingflat : 0;
heartFailureMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
heartFailureMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;

// Extra weight only for symptoms >1
float heartFailurePlus = 0;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) heartFailurePlus += shortnessofbreath - 1;
if(symptom.find("swellinglegs") != string::npos && swellinglegs > 1) heartFailurePlus += swellinglegs - 1;
if(symptom.find("rapidheartbeat") != string::npos && rapidheartbeat > 1) heartFailurePlus += rapidheartbeat - 1;
if(symptom.find("persistentcough") != string::npos && persistentcough > 1) heartFailurePlus += persistentcough - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) heartFailurePlus += chestpain - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) heartFailurePlus += dizziness - 1;
if(symptom.find("difficultylyingflat") != string::npos && difficultylyingflat > 1) heartFailurePlus += difficultylyingflat - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) heartFailurePlus += nausea - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) heartFailurePlus += lossappetite - 1;

float heartFailurePercentage = (float)heartFailureMatch / (count + heartFailurePlus) * 100;

//---------------- Stroke ---------------
int strokeMatch = 0;
strokeMatch += (symptom.find("suddenweakness") != string::npos) ? suddenweakness : 0;
strokeMatch += (symptom.find("numbness") != string::npos) ? numbness : 0;
strokeMatch += (symptom.find("troublespeaking") != string::npos) ? troublespeaking : 0;
strokeMatch += (symptom.find("troubleseeing") != string::npos) ? troubleseeing : 0;
strokeMatch += (symptom.find("troublewalking") != string::npos) ? troublewalking : 0;
strokeMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
strokeMatch += (symptom.find("severeheadache") != string::npos) ? severeheadache : 0;
strokeMatch += (symptom.find("lossbalance") != string::npos) ? lossbalance : 0;
strokeMatch += (symptom.find("confusion") != string::npos) ? confusion : 0;
strokeMatch += (symptom.find("facialdroop") != string::npos) ? facialdroop : 0;

// Extra weight only for symptoms >1
float strokePlus = 0;
if(symptom.find("numbness") != string::npos && numbness > 1) strokePlus += numbness - 1;
if(symptom.find("troublespeaking") != string::npos && troublespeaking > 1) strokePlus += troublespeaking - 1;
if(symptom.find("troubleseeing") != string::npos && troubleseeing > 1) strokePlus += troubleseeing - 1;
if(symptom.find("troublewalking") != string::npos && troublewalking > 1) strokePlus += troublewalking - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) strokePlus += dizziness - 1;
if(symptom.find("lossbalance") != string::npos && lossbalance > 1) strokePlus += lossbalance - 1;
if(symptom.find("confusion") != string::npos && confusion > 1) strokePlus += confusion - 1;
if(symptom.find("facialdroop") != string::npos && facialdroop > 1) strokePlus += facialdroop - 1;

float strokePercentage = (float)strokeMatch / (count + strokePlus) * 100;


     //---------------- Periphoral Artery Disease (PAD) ---------------
int padMatch = 0;
padMatch += (symptom.find("legpain") != string::npos) ? legpain : 0;
padMatch += (symptom.find("cramps") != string::npos) ? cramps : 0;
padMatch += (symptom.find("numbness") != string::npos) ? numbness : 0;
padMatch += (symptom.find("coldfeet") != string::npos) ? coldfeet : 0;
padMatch += (symptom.find("wounds") != string::npos) ? wounds : 0;
padMatch += (symptom.find("skincolorchange") != string::npos) ? skincolorchange : 0;
padMatch += (symptom.find("weakpulse") != string::npos) ? weakpulse : 0;
padMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
padMatch += (symptom.find("slowhealing") != string::npos) ? slowhealing : 0;
padMatch += (symptom.find("hairloss") != string::npos) ? hairloss : 0;

// Extra weight only for symptoms >1
float padPlus = 0;
if(symptom.find("legpain") != string::npos && legpain > 1) padPlus += legpain - 1;
if(symptom.find("cramps") != string::npos && cramps > 1) padPlus += cramps - 1;
if(symptom.find("numbness") != string::npos && numbness > 1) padPlus += numbness - 1;
if(symptom.find("coldfeet") != string::npos && coldfeet > 1) padPlus += coldfeet - 1;
if(symptom.find("wounds") != string::npos && wounds > 1) padPlus += wounds - 1;
if(symptom.find("skincolorchange") != string::npos && skincolorchange > 1) padPlus += skincolorchange - 1;
if(symptom.find("weakpulse") != string::npos && weakpulse > 1) padPlus += weakpulse - 1;
if(symptom.find("slowhealing") != string::npos && slowhealing > 1) padPlus += slowhealing - 1;
if(symptom.find("hairloss") != string::npos && hairloss > 1) padPlus += hairloss - 1;

float padPercentage = (float)padMatch / (count + padPlus) * 100;

//---------------- Asthma ---------------
int asthmaMatch = 0;
asthmaMatch += (symptom.find("breathless") != string::npos) ? breathless : 0;
asthmaMatch += (symptom.find("wheezing") != string::npos) ? wheezing : 0;
asthmaMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
asthmaMatch += (symptom.find("cough") != string::npos) ? cough : 0;
asthmaMatch += (symptom.find("troublesleeping") != string::npos) ? difficultysleeping : 0;
asthmaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
asthmaMatch += (symptom.find("tightchest") != string::npos) ? tightchest : 0;
asthmaMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
asthmaMatch += (symptom.find("difficultybreathing") != string::npos) ? difficultbreathing : 0;
asthmaMatch += (symptom.find("wakingupatnight") != string::npos) ? wakingupatnight : 0;

// Extra weight only for symptoms >1
float asthmaPlus = 0;
if(symptom.find("breathless") != string::npos && breathless > 1) asthmaPlus += breathless - 1;
if(symptom.find("wheezing") != string::npos && wheezing > 1) asthmaPlus += wheezing - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) asthmaPlus += chestpain - 1;
if(symptom.find("cough") != string::npos && cough > 1) asthmaPlus += cough - 1;
if(symptom.find("tightchest") != string::npos && tightchest > 1) asthmaPlus += tightchest - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) asthmaPlus += shortnessofbreath - 1;
if(symptom.find("difficultybreathing") != string::npos && difficultbreathing > 1) asthmaPlus += difficultbreathing - 1;
if(symptom.find("wakingupatnight") != string::npos && wakingupatnight > 1) asthmaPlus += wakingupatnight - 1;

float asthmaPercentage = (float)asthmaMatch / (count + asthmaPlus) * 100;

//---------------- Pneumonia ---------------
int pneumoniaMatch = 0;
pneumoniaMatch += (symptom.find("fever") != string::npos) ? fever : 0;
pneumoniaMatch += (symptom.find("cough") != string::npos) ? cough : 0;
pneumoniaMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
pneumoniaMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
pneumoniaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
pneumoniaMatch += (symptom.find("rapidbreathing") != string::npos) ? rapidbreathing : 0;
pneumoniaMatch += (symptom.find("sweating") != string::npos) ? sweating : 0;
pneumoniaMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
pneumoniaMatch += (symptom.find("confusion") != string::npos) ? confusion : 0;
pneumoniaMatch += (symptom.find("chills") != string::npos) ? chills : 0;

// Extra weight only for symptoms >1
float pneumoniaPlus = 0;
if(symptom.find("fever") != string::npos && fever > 1) pneumoniaPlus += fever - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) pneumoniaPlus += chestpain - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) pneumoniaPlus += shortnessofbreath - 1;
if(symptom.find("rapidbreathing") != string::npos && rapidbreathing > 1) pneumoniaPlus += rapidbreathing - 1;
if(symptom.find("sweating") != string::npos && sweating > 1) pneumoniaPlus += sweating - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) pneumoniaPlus += lossappetite - 1;
if(symptom.find("confusion") != string::npos && confusion > 1) pneumoniaPlus += confusion - 1;
if(symptom.find("chills") != string::npos && chills > 1) pneumoniaPlus += chills - 1;

float pneumoniaPercentage = (float)pneumoniaMatch / (count + pneumoniaPlus) * 100;

//---------------- Bronchitis ---------------
int bronchitisMatch = 0;
bronchitisMatch += (symptom.find("cough") != string::npos) ? cough : 0;
bronchitisMatch += (symptom.find("mucus") != string::npos) ? mucus : 0;
bronchitisMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
bronchitisMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
bronchitisMatch += (symptom.find("slightfever") != string::npos) ? slightfever : 0;
bronchitisMatch += (symptom.find("chestdiscomfort") != string::npos) ? chestdiscomfort : 0;
bronchitisMatch += (symptom.find("wheezing") != string::npos) ? wheezing : 0;
bronchitisMatch += (symptom.find("sorethroat") != string::npos) ? sorethroat : 0;
bronchitisMatch += (symptom.find("nasalcongestion") != string::npos) ? 0 : 0; // nasalcongestion not in your symptom list
bronchitisMatch += (symptom.find("headache") != string::npos) ? headache : 0;

// Extra weight only for symptoms >1
float bronchitisPlus = 0;
if(symptom.find("chestdiscomfort") != string::npos && chestdiscomfort > 1) bronchitisPlus += chestdiscomfort - 1;
if(symptom.find("wheezing") != string::npos && wheezing > 1) bronchitisPlus += wheezing - 1;

float bronchitisPercentage = (float)bronchitisMatch / (count + bronchitisPlus) * 100;

    
   string highestMatch;
float highestPercentage = 0;

if(coldPercentage > highestPercentage){
    highestMatch = "Common Cold";
    highestPercentage = coldPercentage;
}
if(denguePercentage > highestPercentage){
    highestMatch = "Dengue";
    highestPercentage = denguePercentage;
}
if(asthmaPercentage > highestPercentage){
    highestMatch = "Asthma";
    highestPercentage = asthmaPercentage;
}
if(covidPercentage > highestPercentage){
    highestMatch = "COVID-19";
    highestPercentage = covidPercentage;
}
if(tbPercentage > highestPercentage){
    highestMatch = "Tuberculosis (TB)";
    highestPercentage = tbPercentage;
}
if(hepatitisPercentage > highestPercentage){
    highestMatch = "Hepatitis";
    highestPercentage = hepatitisPercentage;
}
if(measlesPercentage > highestPercentage){
    highestMatch = "Measles";
    highestPercentage = measlesPercentage;
}
if(chickenpoxPercentage > highestPercentage){
    highestMatch = "Chicken pox";
    highestPercentage = chickenpoxPercentage;
}
if(malariaPercentage > highestPercentage){
    highestMatch = "Malaria";
    highestPercentage = malariaPercentage;
}
if(hivPercentage > highestPercentage){
    highestMatch = "HIV/AIDS";
    highestPercentage = hivPercentage;
}
if(hypertensionPercentage > highestPercentage){
    highestMatch = "Hypertension (High Blood Pressure)";
    highestPercentage = hypertensionPercentage;
}
if(cadPercentage > highestPercentage){
    highestMatch = "Coronary Artery Disease";
    highestPercentage = cadPercentage;
}
if(arrhythmiaPercentage > highestPercentage){
    highestMatch = "Arrhythmias (Irregular Heartbeat)";
    highestPercentage = arrhythmiaPercentage;
}
if(heartFailurePercentage > highestPercentage){
    highestMatch = "Heart Failure";
    highestPercentage = heartFailurePercentage;
}
if(strokePercentage > highestPercentage){
    highestMatch = "Stroke";
    highestPercentage = strokePercentage;
}
if(padPercentage > highestPercentage){
    highestMatch = "Peripheral Artery Disease";
    highestPercentage = padPercentage;
}
if(pneumoniaPercentage > highestPercentage){
    highestMatch = "Pneumonia";
    highestPercentage = pneumoniaPercentage;
}
if(bronchitisPercentage > highestPercentage){
    highestMatch = "Bronchitis";
    highestPercentage = bronchitisPercentage;
}

return {highestMatch, highestPercentage};

    
}


