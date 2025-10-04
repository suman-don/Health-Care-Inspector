#include "cls.h"
// Healthinfo2: Heart Attack
pair<string,float> detail::healthinfo2() {
  //---------- Lung Cancer -------------------
  int lungCancerMatch = 0;
lungCancerMatch += (symptom.find("persistentcough") != string::npos);
lungCancerMatch += (symptom.find("coughingblood") != string::npos);
lungCancerMatch += (symptom.find("chestpain") != string::npos);
lungCancerMatch += (symptom.find("shortnessofbreath") != string::npos);
lungCancerMatch += (symptom.find("fatigue") != string::npos);
lungCancerMatch += (symptom.find("weightloss") != string::npos);
lungCancerMatch += (symptom.find("lossappetite") != string::npos);
lungCancerMatch += (symptom.find("hoarseness") != string::npos);
lungCancerMatch += (symptom.find("recurrentinfections") != string::npos);
lungCancerMatch += (symptom.find("wheezing") != string::npos);

float lungCancerPercentage = ((float)lungCancerMatch / count) * 100;

  //--------- Diabetes ----------------------
  int diabetesMatch = 0;
diabetesMatch += (symptom.find("frequenturination") != string::npos);
diabetesMatch += (symptom.find("excessivethirst") != string::npos);
diabetesMatch += (symptom.find("extremehunger") != string::npos);
diabetesMatch += (symptom.find("fatigue") != string::npos);
diabetesMatch += (symptom.find("blurredvision") != string::npos);
diabetesMatch += (symptom.find("slowhealingwounds") != string::npos);
diabetesMatch += (symptom.find("weightloss") != string::npos);
diabetesMatch += (symptom.find("tinglinghandsfeet") != string::npos);
diabetesMatch += (symptom.find("dryskin") != string::npos);
diabetesMatch += (symptom.find("recurrentinfections") != string::npos);

float diabetesPercentage = ((float)diabetesMatch / count) * 100;

    //--------- Thyroid Disorder ----------------------
    int thyroidMatch = 0;
thyroidMatch += (symptom.find("fatigue") != string::npos);
thyroidMatch += (symptom.find("weightchange") != string::npos);
thyroidMatch += (symptom.find("hairloss") != string::npos);
thyroidMatch += (symptom.find("dryskin") != string::npos);
thyroidMatch += (symptom.find("palpitations") != string::npos);
thyroidMatch += (symptom.find("sensitivitytocold") != string::npos);
thyroidMatch += (symptom.find("sensitivitytoheat") != string::npos);
thyroidMatch += (symptom.find("muscleweakness") != string::npos);
thyroidMatch += (symptom.find("swellingneck") != string::npos);
thyroidMatch += (symptom.find("moodchanges") != string::npos);

float thyroidPercentage = ((float)thyroidMatch / count) * 100;

      //--------- Obesity ----------------------
      int obesityMatch = 0;
obesityMatch += (symptom.find("weightgain") != string::npos);
obesityMatch += (symptom.find("fatigue") != string::npos);
obesityMatch += (symptom.find("shortnessofbreath") != string::npos);
obesityMatch += (symptom.find("jointpain") != string::npos);
obesityMatch += (symptom.find("snoring") != string::npos);
obesityMatch += (symptom.find("difficultyexercising") != string::npos);
obesityMatch += (symptom.find("highbloodpressure") != string::npos);
obesityMatch += (symptom.find("highcholesterol") != string::npos);
obesityMatch += (symptom.find("backpain") != string::npos);
obesityMatch += (symptom.find("sleepapnea") != string::npos);

float obesityPercentage = ((float)obesityMatch / count) * 100;

        //--------- Metabolic Syndrome ----------------------
        int metabolicMatch = 0;
metabolicMatch += (symptom.find("abdominalobesity") != string::npos);
metabolicMatch += (symptom.find("highbloodpressure") != string::npos);
metabolicMatch += (symptom.find("highbloodsugar") != string::npos);
metabolicMatch += (symptom.find("hightriglycerides") != string::npos);
metabolicMatch += (symptom.find("lowHDL") != string::npos);
metabolicMatch += (symptom.find("fatigue") != string::npos);
metabolicMatch += (symptom.find("insulinresistance") != string::npos);
metabolicMatch += (symptom.find("dizziness") != string::npos);
metabolicMatch += (symptom.find("headache") != string::npos);
metabolicMatch += (symptom.find("difficultyconcentrating") != string::npos);

float metabolicPercentage = ((float)metabolicMatch / count) * 100;

          //--------- Gastristis / Acid ----------------------
          int gastritisMatch = 0;
gastritisMatch += (symptom.find("stomachpain") != string::npos);
gastritisMatch += (symptom.find("bloating") != string::npos);
gastritisMatch += (symptom.find("nausea") != string::npos);
gastritisMatch += (symptom.find("vomiting") != string::npos);
gastritisMatch += (symptom.find("lossappetite") != string::npos);
gastritisMatch += (symptom.find("heartburn") != string::npos);
gastritisMatch += (symptom.find("indigestion") != string::npos);
gastritisMatch += (symptom.find("belching") != string::npos);
gastritisMatch += (symptom.find("acidregurgitation") != string::npos);
gastritisMatch += (symptom.find("stomachbloating") != string::npos);

float gastritisPercentage = ((float)gastritisMatch / count) * 100;

            //--------- Peptic Acid ----------------------
            int pepticMatch = 0;
pepticMatch += (symptom.find("stomachpain") != string::npos);
pepticMatch += (symptom.find("bloating") != string::npos);
pepticMatch += (symptom.find("nausea") != string::npos);
pepticMatch += (symptom.find("vomiting") != string::npos);
pepticMatch += (symptom.find("lossappetite") != string::npos);
pepticMatch += (symptom.find("heartburn") != string::npos);
pepticMatch += (symptom.find("indigestion") != string::npos);
pepticMatch += (symptom.find("belching") != string::npos);
pepticMatch += (symptom.find("acidregurgitation") != string::npos);
pepticMatch += (symptom.find("darkstools") != string::npos);

float pepticPercentage = ((float)pepticMatch / count) * 100;

              //--------- Liver Disease ----------------------
             int liverMatch = 0;
liverMatch += (symptom.find("fatigue") != string::npos);
liverMatch += (symptom.find("jaundice") != string::npos);
liverMatch += (symptom.find("abdominalpain") != string::npos);
liverMatch += (symptom.find("lossappetite") != string::npos);
liverMatch += (symptom.find("nausea") != string::npos);
liverMatch += (symptom.find("vomiting") != string::npos);
liverMatch += (symptom.find("darkurine") != string::npos);
liverMatch += (symptom.find("pale stools") != string::npos);
liverMatch += (symptom.find("swellinglegs") != string::npos);
liverMatch += (symptom.find("itching") != string::npos);

float liverPercentage = ((float)liverMatch / count) * 100;
 
                //--------- GallStones ----------------------
                int gallstonesMatch = 0;
gallstonesMatch += (symptom.find("abdominalpain") != string::npos);
gallstonesMatch += (symptom.find("nausea") != string::npos);
gallstonesMatch += (symptom.find("vomiting") != string::npos);
gallstonesMatch += (symptom.find("bloating") != string::npos);
gallstonesMatch += (symptom.find("indigestion") != string::npos);
gallstonesMatch += (symptom.find("painaftermeals") != string::npos);
gallstonesMatch += (symptom.find("belching") != string::npos);
gallstonesMatch += (symptom.find("jaundice") != string::npos);
gallstonesMatch += (symptom.find("darkurine") != string::npos);
gallstonesMatch += (symptom.find("pale stools") != string::npos);

float gallstonesPercentage = ((float)gallstonesMatch / count) * 100;

                
                  //--------- Irritable Bowel ----------------------
  
  int ibsMatch = 0;
ibsMatch += (symptom.find("abdominalpain") != string::npos);
ibsMatch += (symptom.find("bloating") != string::npos);
ibsMatch += (symptom.find("diarrhea") != string::npos);
ibsMatch += (symptom.find("constipation") != string::npos);
ibsMatch += (symptom.find("mucusinstools") != string::npos);
ibsMatch += (symptom.find("urgency") != string::npos);
ibsMatch += (symptom.find("feelingincomplete") != string::npos);
ibsMatch += (symptom.find("fatigue") != string::npos);
ibsMatch += (symptom.find("nausea") != string::npos);
ibsMatch += (symptom.find("abdominalcramps") != string::npos);

float ibsPercentage = ((float)ibsMatch / count) * 100;

    //--------- Colorectal Cancer ----------------------
    int colorectalMatch = 0;
colorectalMatch += (symptom.find("bloodinstools") != string::npos);
colorectalMatch += (symptom.find("abdominalpain") != string::npos);
colorectalMatch += (symptom.find("unexplainedweightloss") != string::npos);
colorectalMatch += (symptom.find("fatigue") != string::npos);
colorectalMatch += (symptom.find("constipation") != string::npos);
colorectalMatch += (symptom.find("diarrhea") != string::npos);
colorectalMatch += (symptom.find("nausea") != string::npos);
colorectalMatch += (symptom.find("vomiting") != string::npos);
colorectalMatch += (symptom.find("abdominalbloating") != string::npos);
colorectalMatch += (symptom.find("weakness") != string::npos);

float colorectalPercentage = ((float)colorectalMatch / count) * 100;

      //--------- Migraine ----------------------
      int migraineMatch = 0;
migraineMatch += (symptom.find("headache") != string::npos);
migraineMatch += (symptom.find("nausea") != string::npos);
migraineMatch += (symptom.find("vomiting") != string::npos);
migraineMatch += (symptom.find("sensitivitytolight") != string::npos);
migraineMatch += (symptom.find("sensitivitytosound") != string::npos);
migraineMatch += (symptom.find("blurredvision") != string::npos);
migraineMatch += (symptom.find("dizziness") != string::npos);
migraineMatch += (symptom.find("fatigue") != string::npos);
migraineMatch += (symptom.find("irritability") != string::npos);
migraineMatch += (symptom.find("difficultyconcentrating") != string::npos);

float migrainePercentage = ((float)migraineMatch / count) * 100;

        //--------- Epilepsy ----------------------
        int epilepsyMatch = 0;
epilepsyMatch += (symptom.find("seizures") != string::npos);
epilepsyMatch += (symptom.find("lossconsciousness") != string::npos);
epilepsyMatch += (symptom.find("confusion") != string::npos);
epilepsyMatch += (symptom.find("staringspells") != string::npos);
epilepsyMatch += (symptom.find("twitching") != string::npos);
epilepsyMatch += (symptom.find("falling") != string::npos);
epilepsyMatch += (symptom.find("musclestiffness") != string::npos);
epilepsyMatch += (symptom.find("fatigue") != string::npos);
epilepsyMatch += (symptom.find("anxiety") != string::npos);
epilepsyMatch += (symptom.find("memoryloss") != string::npos);

float epilepsyPercentage = ((float)epilepsyMatch / count) * 100;

          //--------- Alzheimer's Disease ----------------------
          int alzheimerMatch = 0;
alzheimerMatch += (symptom.find("memoryloss") != string::npos);
alzheimerMatch += (symptom.find("confusion") != string::npos);
alzheimerMatch += (symptom.find("difficultyplanning") != string::npos);
alzheimerMatch += (symptom.find("troublespeaking") != string::npos);
alzheimerMatch += (symptom.find("misplacingthings") != string::npos);
alzheimerMatch += (symptom.find("moodchanges") != string::npos);
alzheimerMatch += (symptom.find("withdrawal") != string::npos);
alzheimerMatch += (symptom.find("poorjudgment") != string::npos);
alzheimerMatch += (symptom.find("disorientation") != string::npos);
alzheimerMatch += (symptom.find("difficultyperformingtasks") != string::npos);

float alzheimerPercentage = ((float)alzheimerMatch / count) * 100;

            //--------- Parkinson's Disease ----------------------
            int parkinsonsMatch = 0;
parkinsonsMatch += (symptom.find("tremor") != string::npos);
parkinsonsMatch += (symptom.find("slowedmovement") != string::npos);
parkinsonsMatch += (symptom.find("rigidmuscles") != string::npos);
parkinsonsMatch += (symptom.find("impairedbalance") != string::npos);
parkinsonsMatch += (symptom.find("postureinstability") != string::npos);
parkinsonsMatch += (symptom.find("lossautomaticmovements") != string::npos);
parkinsonsMatch += (symptom.find("speechchanges") != string::npos);
parkinsonsMatch += (symptom.find("writingchanges") != string::npos);
parkinsonsMatch += (symptom.find("fatigue") != string::npos);
parkinsonsMatch += (symptom.find("sleepproblems") != string::npos);

float parkinsonsPercentage = ((float)parkinsonsMatch / count) * 100;

              //--------- Multiple Sclerosis ----------------------
            int msMatch = 0;
msMatch += (symptom.find("numbness") != string::npos);
msMatch += (symptom.find("weakness") != string::npos);
msMatch += (symptom.find("tingling") != string::npos);
msMatch += (symptom.find("balanceproblems") != string::npos);
msMatch += (symptom.find("visionproblems") != string::npos);
msMatch += (symptom.find("musclespasms") != string::npos);
msMatch += (symptom.find("fatigue") != string::npos);
msMatch += (symptom.find("dizziness") != string::npos);
msMatch += (symptom.find("bladderproblems") != string::npos);
msMatch += (symptom.find("cognitivechanges") != string::npos);

float msPercentage = ((float)msMatch / count) * 100;
  
                //--------- Osteoarthritis ----------------------
                int osteoarthritisMatch = 0;
osteoarthritisMatch += (symptom.find("jointpain") != string::npos);
osteoarthritisMatch += (symptom.find("stiffness") != string::npos);
osteoarthritisMatch += (symptom.find("swelling") != string::npos);
osteoarthritisMatch += (symptom.find("reducedmobility") != string::npos);
osteoarthritisMatch += (symptom.find("tenderness") != string::npos);
osteoarthritisMatch += (symptom.find("grating") != string::npos);
osteoarthritisMatch += (symptom.find("boneenlargement") != string::npos);
osteoarthritisMatch += (symptom.find("jointdeformity") != string::npos);
osteoarthritisMatch += (symptom.find("painwithactivity") != string::npos);
osteoarthritisMatch += (symptom.find("fatigue") != string::npos);

float osteoarthritisPercentage = ((float)osteoarthritisMatch / count) * 100;

                  //--------- Rheumatoid Arthritis ----------------------
              int raMatch = 0;
raMatch += (symptom.find("jointpain") != string::npos);
raMatch += (symptom.find("swelling") != string::npos);
raMatch += (symptom.find("stiffness") != string::npos);
raMatch += (symptom.find("fatigue") != string::npos);
raMatch += (symptom.find("fever") != string::npos);
raMatch += (symptom.find("lossappetite") != string::npos);
raMatch += (symptom.find("jointwarmth") != string::npos);
raMatch += (symptom.find("jointdeformity") != string::npos);
raMatch += (symptom.find("weakness") != string::npos);
raMatch += (symptom.find("morningstiffness") != string::npos);

float raPercentage = ((float)raMatch / count) * 100;
    
                    //--------- Osteoporosis ----------------------
                  int osteoporosisMatch = 0;
osteoporosisMatch += (symptom.find("bonepain") != string::npos);
osteoporosisMatch += (symptom.find("fractures") != string::npos);
osteoporosisMatch += (symptom.find("stoopedposture") != string::npos);
osteoporosisMatch += (symptom.find("lossheight") != string::npos);
osteoporosisMatch += (symptom.find("backpain") != string::npos);
osteoporosisMatch += (symptom.find("weakbones") != string::npos);
osteoporosisMatch += (symptom.find("limitedmobility") != string::npos);
osteoporosisMatch += (symptom.find("jointpain") != string::npos);
osteoporosisMatch += (symptom.find("fatigue") != string::npos);
osteoporosisMatch += (symptom.find("difficultywalking") != string::npos);

float osteoporosisPercentage = ((float)osteoporosisMatch / count) * 100;
  
                      //--------- Gout ----------------------
    int goutMatch = 0;
goutMatch += (symptom.find("jointpain") != string::npos);
goutMatch += (symptom.find("redness") != string::npos);
goutMatch += (symptom.find("swelling") != string::npos);
goutMatch += (symptom.find("warmth") != string::npos);
goutMatch += (symptom.find("tenderness") != string::npos);
goutMatch += (symptom.find("suddenattacks") != string::npos);
goutMatch += (symptom.find("difficultywalking") != string::npos);
goutMatch += (symptom.find("fatigue") != string::npos);
goutMatch += (symptom.find("fever") != string::npos);
goutMatch += (symptom.find("jointstiffness") != string::npos);

float goutPercentage = ((float)goutMatch / count) * 100;

 string highestMatch;
float highestPercentage = 0;

// Compare Lung Cancer
if(lungCancerPercentage > highestPercentage){
    highestMatch = "Lung Cancer";
    highestPercentage = lungCancerPercentage;
}

// Compare Diabetes
if(diabetesPercentage > highestPercentage){
    highestMatch = "Diabetes";
    highestPercentage = diabetesPercentage;
}

// Compare Thyroid Disorder
if(thyroidPercentage > highestPercentage){
    highestMatch = "Thyroid Disorder";
    highestPercentage = thyroidPercentage;
}

// Compare Obesity
if(obesityPercentage > highestPercentage){
    highestMatch = "Obesity";
    highestPercentage = obesityPercentage;
}

// Compare Metabolic Syndrome
if(metabolicPercentage > highestPercentage){
    highestMatch = "Metabolic Syndrome";
    highestPercentage = metabolicPercentage;
}

// Compare Gastritis / Acid
if(gastritisPercentage > highestPercentage){
    highestMatch = "Gastritis / Acid Reflux (GERD)";
    highestPercentage = gastritisPercentage;
}

// Compare Peptic Acid
if(pepticPercentage > highestPercentage){
    highestMatch = "Peptic Ulcer";
    highestPercentage = pepticPercentage;
}

// Compare Liver Disease
if(liverPercentage > highestPercentage){
    highestMatch = "Liver Diseases";
    highestPercentage = liverPercentage;
}

// Compare Gallstones
if(gallstonesPercentage > highestPercentage){
    highestMatch = "Gallstones";
    highestPercentage = gallstonesPercentage;
}

// Compare IBS
if(ibsPercentage > highestPercentage){
    highestMatch = "Irritable Bowel Syndrome (IBS)";
    highestPercentage = ibsPercentage;
}

// Compare Colorectal Cancer
if(colorectalPercentage > highestPercentage){
    highestMatch = "Colorectal Cancer";
    highestPercentage = colorectalPercentage;
}

// Compare Migraine
if(migrainePercentage > highestPercentage){
    highestMatch = "Migraine / Headache Disorders";
    highestPercentage = migrainePercentage;
}

// Compare Epilepsy
if(epilepsyPercentage > highestPercentage){
    highestMatch = "Epilepsy";
    highestPercentage = epilepsyPercentage;
}

// Compare Alzheimer's
if(alzheimerPercentage > highestPercentage){
    highestMatch = "Alzheimer's Disease / Dementia";
    highestPercentage = alzheimerPercentage;
}

// Compare Parkinson's
if(parkinsonsPercentage > highestPercentage){
    highestMatch = "Parkinson's Disease";
    highestPercentage = parkinsonsPercentage;
}

// Compare Multiple Sclerosis
if(msPercentage > highestPercentage){
    highestMatch = "Multiple Sclerosis";
    highestPercentage = msPercentage;
}

// Compare Osteoarthritis
if(osteoarthritisPercentage > highestPercentage){
    highestMatch = "Osteoarthritis";
    highestPercentage = osteoarthritisPercentage;
}

// Compare Rheumatoid Arthritis
if(raPercentage > highestPercentage){
    highestMatch = "Rheumatoid Arthritis";
    highestPercentage = raPercentage;
}

// Compare Osteoporosis
if(osteoporosisPercentage > highestPercentage){
    highestMatch = "Osteoporosis";
    highestPercentage = osteoporosisPercentage;
}

// Compare Gout
if(goutPercentage > highestPercentage){
    highestMatch = "Gout";
    highestPercentage = goutPercentage;
}

return {highestMatch, highestPercentage};

}


