#include "cls.h"

// Healthinfo1: Common Cold
pair<string,float> detail::healthinfo1() {
	//----------------- Common Cold -----------------------
    int coldMatch = 0;
    coldMatch += (symptom.find("runnynose") != string::npos);
    coldMatch += (symptom.find("sneezing") != string::npos);
    coldMatch += (symptom.find("sorethroat") != string::npos);
    coldMatch += (symptom.find("cough") != string::npos);
    coldMatch += (symptom.find("wateryeyes") != string::npos);
    coldMatch += (symptom.find("headache") != string::npos);
    coldMatch += (symptom.find("bodyaches") != string::npos);
    coldMatch += (symptom.find("fatigue") != string::npos);
    coldMatch += (symptom.find("fever") != string::npos);
    
    float coldPercentage = (float) coldMatch/count*100;
    
    	//----------------- Dengue -----------------------
   int dengueMatch = 0;
dengueMatch += (symptom.find("fever") != string::npos);
dengueMatch += (symptom.find("painbehindtheeyes") != string::npos);
dengueMatch += (symptom.find("jointpain") != string::npos);
dengueMatch += (symptom.find("musclepain") != string::npos);
dengueMatch += (symptom.find("headache") != string::npos);
dengueMatch += (symptom.find("nausea") != string::npos);
dengueMatch += (symptom.find("vomiting") != string::npos);
dengueMatch += (symptom.find("skinrash") != string::npos);
dengueMatch += (symptom.find("fatigue") != string::npos);
dengueMatch += (symptom.find("bleeding") != string::npos); // nose/gums bleeding

float denguePercentage = ((float)dengueMatch / count) * 100;


 //---------------- COVID-19 ---------------
 int covidMatch = 0;
covidMatch += (symptom.find("fever") != string::npos);
covidMatch += (symptom.find("drycough") != string::npos);
covidMatch += (symptom.find("tiredness") != string::npos);
covidMatch += (symptom.find("lossoftaste") != string::npos);
covidMatch += (symptom.find("lossofsmell") != string::npos);
covidMatch += (symptom.find("sorethroat") != string::npos);
covidMatch += (symptom.find("headache") != string::npos);
covidMatch += (symptom.find("shortnessofbreath") != string::npos);
covidMatch += (symptom.find("muscleaches") != string::npos);
covidMatch += (symptom.find("chills") != string::npos);

float covidPercentage = ((float)covidMatch / count) * 100;

  //---------------- Tuberculosis (TB) ---------------
  int tbMatch = 0;
tbMatch += (symptom.find("cough") != string::npos);
tbMatch += (symptom.find("fever") != string::npos);
tbMatch += (symptom.find("nightssweats") != string::npos);
tbMatch += (symptom.find("weightloss") != string::npos);
tbMatch += (symptom.find("fatigue") != string::npos);
tbMatch += (symptom.find("chestpain") != string::npos);
tbMatch += (symptom.find("lossappetite") != string::npos);
tbMatch += (symptom.find("shortnessofbreath") != string::npos);
tbMatch += (symptom.find("coughingblood") != string::npos);
tbMatch += (symptom.find("chills") != string::npos);

float tbPercentage = ((float)tbMatch / count) * 100;

   //---------------- Hepatitis ---------------
   int hepatitisMatch = 0;
hepatitisMatch += (symptom.find("fatigue") != string::npos);
hepatitisMatch += (symptom.find("fever") != string::npos);
hepatitisMatch += (symptom.find("lossappetite") != string::npos);
hepatitisMatch += (symptom.find("nausea") != string::npos);
hepatitisMatch += (symptom.find("vomiting") != string::npos);
hepatitisMatch += (symptom.find("abdominalpain") != string::npos);
hepatitisMatch += (symptom.find("darkurine") != string::npos);
hepatitisMatch += (symptom.find("jaundice") != string::npos);
hepatitisMatch += (symptom.find("jointpain") != string::npos);
hepatitisMatch += (symptom.find("itching") != string::npos);

float hepatitisPercentage = ((float)hepatitisMatch / count) * 100;

    //---------------- Mealeas ---------------
    int measlesMatch = 0;
measlesMatch += (symptom.find("fever") != string::npos);
measlesMatch += (symptom.find("cough") != string::npos);
measlesMatch += (symptom.find("runny nose") != string::npos);
measlesMatch += (symptom.find("redeyes") != string::npos);
measlesMatch += (symptom.find("rash") != string::npos);
measlesMatch += (symptom.find("sorethroat") != string::npos);
measlesMatch += (symptom.find("fatigue") != string::npos);
measlesMatch += (symptom.find("lossappetite") != string::npos);
measlesMatch += (symptom.find("diarrhea") != string::npos);
measlesMatch += (symptom.find("headache") != string::npos);

float measlesPercentage = ((float)measlesMatch / count) * 100;

     //---------------- chicken-pox ---------------
     int chickenpoxMatch = 0;
chickenpoxMatch += (symptom.find("fever") != string::npos);
chickenpoxMatch += (symptom.find("itchy rash") != string::npos);
chickenpoxMatch += (symptom.find("fatigue") != string::npos);
chickenpoxMatch += (symptom.find("lossappetite") != string::npos);
chickenpoxMatch += (symptom.find("headache") != string::npos);
chickenpoxMatch += (symptom.find("blisters") != string::npos);
chickenpoxMatch += (symptom.find("sorethroat") != string::npos);
chickenpoxMatch += (symptom.find("mildcough") != string::npos);
chickenpoxMatch += (symptom.find("chills") != string::npos);
chickenpoxMatch += (symptom.find("muscleaches") != string::npos);

float chickenpoxPercentage = ((float)chickenpoxMatch / count) * 100;

      //---------------- Malaria ---------------
      int malariaMatch = 0;
malariaMatch += (symptom.find("fever") != string::npos);
malariaMatch += (symptom.find("chills") != string::npos);
malariaMatch += (symptom.find("sweating") != string::npos);
malariaMatch += (symptom.find("headache") != string::npos);
malariaMatch += (symptom.find("nausea") != string::npos);
malariaMatch += (symptom.find("vomiting") != string::npos);
malariaMatch += (symptom.find("fatigue") != string::npos);
malariaMatch += (symptom.find("musclepain") != string::npos);
malariaMatch += (symptom.find("abdominalpain") != string::npos);
malariaMatch += (symptom.find("diarrhea") != string::npos);

float malariaPercentage = ((float)malariaMatch / count) * 100;

       //---------------- HIV/AIDS ---------------
       int hivMatch = 0;
hivMatch += (symptom.find("fever") != string::npos);
hivMatch += (symptom.find("fatigue") != string::npos);
hivMatch += (symptom.find("weightloss") != string::npos);
hivMatch += (symptom.find("swollenlymphnodes") != string::npos);
hivMatch += (symptom.find("nightssweats") != string::npos);
hivMatch += (symptom.find("diarrhea") != string::npos);
hivMatch += (symptom.find("mouthsores") != string::npos);
hivMatch += (symptom.find("skinrash") != string::npos);
hivMatch += (symptom.find("recurrentinfections") != string::npos);
hivMatch += (symptom.find("persistentcough") != string::npos);

float hivPercentage = ((float)hivMatch / count) * 100;

        //---------------- Hypertension (High Blood Pressure) ---------------
        int hypertensionMatch = 0;
hypertensionMatch += (symptom.find("headache") != string::npos);
hypertensionMatch += (symptom.find("dizziness") != string::npos);
hypertensionMatch += (symptom.find("blurredvision") != string::npos);
hypertensionMatch += (symptom.find("chestpain") != string::npos);
hypertensionMatch += (symptom.find("shortnessofbreath") != string::npos);
hypertensionMatch += (symptom.find("nosebleeds") != string::npos);
hypertensionMatch += (symptom.find("fatigue") != string::npos);
hypertensionMatch += (symptom.find("irritability") != string::npos);
hypertensionMatch += (symptom.find("palpitations") != string::npos);
hypertensionMatch += (symptom.find("difficultysleeping") != string::npos);

float hypertensionPercentage = ((float)hypertensionMatch / count) * 100;

         //---------------- Coronary Artery ---------------
         int cadMatch = 0;
cadMatch += (symptom.find("chestpain") != string::npos);
cadMatch += (symptom.find("shortnessofbreath") != string::npos);
cadMatch += (symptom.find("fatigue") != string::npos);
cadMatch += (symptom.find("palpitations") != string::npos);
cadMatch += (symptom.find("dizziness") != string::npos);
cadMatch += (symptom.find("nausea") != string::npos);
cadMatch += (symptom.find("sweating") != string::npos);
cadMatch += (symptom.find("rapidheartbeat") != string::npos);
cadMatch += (symptom.find("anxiety") != string::npos);
cadMatch += (symptom.find("weakness") != string::npos);

float cadPercentage = ((float)cadMatch / count) * 100;

          //---------------- Arrhythmias ---------------
          int arrhythmiaMatch = 0;
arrhythmiaMatch += (symptom.find("palpitations") != string::npos);
arrhythmiaMatch += (symptom.find("dizziness") != string::npos);
arrhythmiaMatch += (symptom.find("shortnessofbreath") != string::npos);
arrhythmiaMatch += (symptom.find("chestpain") != string::npos);
arrhythmiaMatch += (symptom.find("fainting") != string::npos);
arrhythmiaMatch += (symptom.find("fatigue") != string::npos);
arrhythmiaMatch += (symptom.find("irregularheartbeat") != string::npos);
arrhythmiaMatch += (symptom.find("anxiety") != string::npos);
arrhythmiaMatch += (symptom.find("palpitationsduringactivity") != string::npos);
arrhythmiaMatch += (symptom.find("weakness") != string::npos);

float arrhythmiaPercentage = ((float)arrhythmiaMatch / count) * 100;

           //---------------- Heart Failure ---------------
           int heartFailureMatch = 0;
heartFailureMatch += (symptom.find("shortnessofbreath") != string::npos);
heartFailureMatch += (symptom.find("fatigue") != string::npos);
heartFailureMatch += (symptom.find("swellinglegs") != string::npos);
heartFailureMatch += (symptom.find("rapidheartbeat") != string::npos);
heartFailureMatch += (symptom.find("persistentcough") != string::npos);
heartFailureMatch += (symptom.find("chestpain") != string::npos);
heartFailureMatch += (symptom.find("dizziness") != string::npos);
heartFailureMatch += (symptom.find("difficultylyingflat") != string::npos);
heartFailureMatch += (symptom.find("nausea") != string::npos);
heartFailureMatch += (symptom.find("lossappetite") != string::npos);

float heartFailurePercentage = ((float)heartFailureMatch / count) * 100;

            //---------------- Stroke ---------------
            int strokeMatch = 0;
strokeMatch += (symptom.find("suddenweakness") != string::npos);
strokeMatch += (symptom.find("numbness") != string::npos);
strokeMatch += (symptom.find("troublespeaking") != string::npos);
strokeMatch += (symptom.find("troubleseeing") != string::npos);
strokeMatch += (symptom.find("troublewalking") != string::npos);
strokeMatch += (symptom.find("dizziness") != string::npos);
strokeMatch += (symptom.find("severeheadache") != string::npos);
strokeMatch += (symptom.find("lossbalance") != string::npos);
strokeMatch += (symptom.find("confusion") != string::npos);
strokeMatch += (symptom.find("facialdroop") != string::npos);

float strokePercentage = ((float)strokeMatch / count) * 100;

             //---------------- Periphoral Artery Disease ---------------
             int padMatch = 0;
padMatch += (symptom.find("legpain") != string::npos);
padMatch += (symptom.find("cramps") != string::npos);
padMatch += (symptom.find("numbness") != string::npos);
padMatch += (symptom.find("coldfeet") != string::npos);
padMatch += (symptom.find("wounds") != string::npos);
padMatch += (symptom.find("skincolorchange") != string::npos);
padMatch += (symptom.find("weakpulse") != string::npos);
padMatch += (symptom.find("fatigue") != string::npos);
padMatch += (symptom.find("slowhealing") != string::npos);
padMatch += (symptom.find("hairloss") != string::npos);

float padPercentage = ((float)padMatch / count) * 100;

              //---------------- Asthma ---------------
              int asthmaMatch = 0;
asthmaMatch += (symptom.find("breathless") != string::npos);
asthmaMatch += (symptom.find("wheezing") != string::npos);
asthmaMatch += (symptom.find("chestpain") != string::npos);
asthmaMatch += (symptom.find("cough") != string::npos);
asthmaMatch += (symptom.find("troublesleeping") != string::npos);
asthmaMatch += (symptom.find("fatigue") != string::npos);
asthmaMatch += (symptom.find("tightchest") != string::npos);
asthmaMatch += (symptom.find("shortnessofbreath") != string::npos);
asthmaMatch += (symptom.find("difficultybreathing") != string::npos);
asthmaMatch += (symptom.find("wakingupatnight") != string::npos);

float asthmaPercentage = ((float)asthmaMatch / count) * 100;


                //---------------- Pneumonia ---------------
                int pneumoniaMatch = 0;
pneumoniaMatch += (symptom.find("fever") != string::npos);
pneumoniaMatch += (symptom.find("cough") != string::npos);
pneumoniaMatch += (symptom.find("chestpain") != string::npos);
pneumoniaMatch += (symptom.find("shortnessofbreath") != string::npos);
pneumoniaMatch += (symptom.find("fatigue") != string::npos);
pneumoniaMatch += (symptom.find("rapidbreathing") != string::npos);
pneumoniaMatch += (symptom.find("sweating") != string::npos);
pneumoniaMatch += (symptom.find("lossappetite") != string::npos);
pneumoniaMatch += (symptom.find("confusion") != string::npos);
pneumoniaMatch += (symptom.find("chills") != string::npos);

float pneumoniaPercentage = ((float)pneumoniaMatch / count) * 100;

                 //---------------- Bronchitis ---------------
               int bronchitisMatch = 0;
bronchitisMatch += (symptom.find("cough") != string::npos);
bronchitisMatch += (symptom.find("mucus") != string::npos);
bronchitisMatch += (symptom.find("fatigue") != string::npos);
bronchitisMatch += (symptom.find("shortnessofbreath") != string::npos);
bronchitisMatch += (symptom.find("slightfever") != string::npos);
bronchitisMatch += (symptom.find("chestdiscomfort") != string::npos);
bronchitisMatch += (symptom.find("wheezing") != string::npos);
bronchitisMatch += (symptom.find("sorethroat") != string::npos);
bronchitisMatch += (symptom.find("nasalcongestion") != string::npos);
bronchitisMatch += (symptom.find("headache") != string::npos);

float bronchitisPercentage = ((float)bronchitisMatch / count) * 100;

    
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


