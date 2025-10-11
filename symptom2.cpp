#include "cls.h"
// Healthinfo2: Heart Attack
pair<string,float> detail::healthinfo2() {
	//----------- Weight symptom --------------
	const int runnynose = 1, sneezing = 1, sorethroat = 1, cough = 1, wateryeyes = 1, headache = 1,
          bodyaches = 1, fatigue = 1, fever = 2, painbehindtheeyes = 2, jointpain = 2, musclepain = 2,
          nausea = 2, vomiting = 2, skinrash = 2, bleeding = 3, drycough = 1, tiredness = 1,
          lossoftaste = 2, lossofsmell = 2, shortnessofbreath = 3, nightssweats = 2, weightloss = 3,
          chestpain = 3, lossappetite = 2, itching = 1, redeyes = 1, rash = 2, itchyrash = 2,
          blisters = 2, chills = 2, sweating = 2, muscleaches = 2, persistentcough = 2, 
          rapidheartbeat = 3, anxiety = 1, weakness = 2, palpitations = 3, difficultysleeping = 1,
          fainting = 3, swellinglegs = 2, difficultylyingflat = 2, suddenweakness = 3, numbness = 3,
          troublespeaking = 3, troubleseeing = 3, troublewalking = 3, lossbalance = 3, confusion = 3,
          facialdroop = 3, legpain = 2, cramps = 2, coldfeet = 1, wounds = 2, skincolorchange = 3,
          slowhealing = 2, hairloss = 1, breathless = 3, wheezing = 3, tightchest = 3,
          difficultybreathing = 3, wakingupatnight = 1, rapidbreathing = 3, slightfever = 1,
          chestdiscomfort = 2, hoarseness = 1, frequenturination = 2, excessivethirst = 2,
          extremehunger = 2, blurredvision = 3, slowhealingwounds = 2, tinglinghandsfeet = 3,
          dryskin = 1, weightchange = 2, sensitivitytocold = 1, sensitivitytoheat = 1,
          muscleweakness = 2, swellingneck = 2, moodchanges = 1, weightgain = 1, snoring = 1,
          difficultyexercising = 2, highbloodpressure = 3, highcholesterol = 2, backpain = 2,
          sleepapnea = 2, abdominalobesity = 2, highbloodsugar = 3, hightriglycerides = 2,
          lowHDL = 2, insulinresistance = 2, difficultyconcentrating = 1, stomachpain = 2,
          bloating = 2, heartburn = 2, indigestion = 2, belching = 1, acidregurgitation = 2,
          stomachbloating = 2, darkstools = 3, palestools = 3, painaftermeals = 2, mucusinstools = 2,
          urgency = 2, feelingincomplete = 1, abdominalcramps = 2, bloodinstools = 3,
          unexplainedweightloss = 3, abdominalbloating = 2, sensitivitytolight = 2,
          sensitivitytosound = 2, staringspells = 3, twitching = 2, falling = 3, musclestiffness = 2,
          memoryloss = 3, difficultyplanning = 2, misplacingthings = 1, withdrawal = 1,
          poorjudgment = 2, difficultyperformingtasks = 2, tremor = 2, slowedmovement = 2,
          rigidmuscles = 2, impairedbalance = 3, postureinstability = 2, lossautomaticmovements = 3,
          speechchanges = 3, writingchanges = 2, sleepproblems = 1, tingling = 2, balanceproblems = 3,
          visionproblems = 3, musclespasms = 2, bladderproblems = 2, cognitivechanges = 3,
          stiffness = 2, reducedmobility = 2, tenderness = 2, grating = 2, boneenlargement = 2,
          jointdeformity = 3, painwithactivity = 2, morningstiffness = 2, bonepain = 2,
          fractures = 3, stoopedposture = 2, lossheight = 3, redness = 2, warmth = 2,
          jointstiffness = 2,
		  //new declared
		   coughingblood =5 ,recurrentinfections=4,abdominalpain=3,irritability=1,swelling=3,dizziness=2;
          
          
	
  //---------- Lung Cancer -------------------
int lungCancerMatch = 0;
lungCancerMatch += (symptom.find("persistentcough") != string::npos) ? persistentcough : 0;
lungCancerMatch += (symptom.find("coughingblood") != string::npos) ? coughingblood : 0;
lungCancerMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
lungCancerMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
lungCancerMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
lungCancerMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
lungCancerMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
lungCancerMatch += (symptom.find("hoarseness") != string::npos) ? hoarseness : 0;
lungCancerMatch += (symptom.find("recurrentinfections") != string::npos) ? recurrentinfections : 0;
lungCancerMatch += (symptom.find("wheezing") != string::npos) ? wheezing : 0;

// Extra weight only for symptoms > 1
float lungCancerPlus = 0;
if(symptom.find("persistentcough") != string::npos && persistentcough > 1) lungCancerPlus += persistentcough - 1;
if(symptom.find("coughingblood") != string::npos && coughingblood > 1) lungCancerPlus += coughingblood - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) lungCancerPlus += chestpain - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) lungCancerPlus += shortnessofbreath - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) lungCancerPlus += fatigue - 1;
if(symptom.find("weightloss") != string::npos && weightloss > 1) lungCancerPlus += weightloss - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) lungCancerPlus += lossappetite - 1;
if(symptom.find("hoarseness") != string::npos && hoarseness > 1) lungCancerPlus += hoarseness - 1;
if(symptom.find("recurrentinfections") != string::npos && recurrentinfections > 1) lungCancerPlus += recurrentinfections - 1;
if(symptom.find("wheezing") != string::npos && wheezing > 1) lungCancerPlus += wheezing - 1;

float lungCancerPercentage = ((float)lungCancerMatch / (count + lungCancerPlus)) * 100;


 //--------- Diabetes ----------------------
int diabetesMatch = 0;
diabetesMatch += (symptom.find("frequenturination") != string::npos) ? frequenturination : 0;
diabetesMatch += (symptom.find("excessivethirst") != string::npos) ? excessivethirst : 0;
diabetesMatch += (symptom.find("extremehunger") != string::npos) ? extremehunger : 0;
diabetesMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
diabetesMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
diabetesMatch += (symptom.find("slowhealingwounds") != string::npos) ? slowhealingwounds : 0;
diabetesMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
diabetesMatch += (symptom.find("tinglinghandsfeet") != string::npos) ? tinglinghandsfeet : 0;
diabetesMatch += (symptom.find("dryskin") != string::npos) ? dryskin : 0;
diabetesMatch += (symptom.find("recurrentinfections") != string::npos) ? recurrentinfections : 0;

// Extra weight only for symptoms > 1
float diabetesPlus = 0;
if(symptom.find("frequenturination") != string::npos && frequenturination > 1) diabetesPlus += frequenturination - 1;
if(symptom.find("excessivethirst") != string::npos && excessivethirst > 1) diabetesPlus += excessivethirst - 1;
if(symptom.find("extremehunger") != string::npos && extremehunger > 1) diabetesPlus += extremehunger - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) diabetesPlus += fatigue - 1;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) diabetesPlus += blurredvision - 1;
if(symptom.find("slowhealingwounds") != string::npos && slowhealingwounds > 1) diabetesPlus += slowhealingwounds - 1;
if(symptom.find("weightloss") != string::npos && weightloss > 1) diabetesPlus += weightloss - 1;
if(symptom.find("tinglinghandsfeet") != string::npos && tinglinghandsfeet > 1) diabetesPlus += tinglinghandsfeet - 1;
if(symptom.find("dryskin") != string::npos && dryskin > 1) diabetesPlus += dryskin - 1;
if(symptom.find("recurrentinfections") != string::npos && recurrentinfections > 1) diabetesPlus += recurrentinfections - 1;

float diabetesPercentage = ((float)diabetesMatch / (count + diabetesPlus)) * 100;


   //--------- Thyroid Disorder ----------------------
int thyroidMatch = 0;
thyroidMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
thyroidMatch += (symptom.find("weightchange") != string::npos) ? weightchange : 0;
thyroidMatch += (symptom.find("hairloss") != string::npos) ? hairloss : 0;
thyroidMatch += (symptom.find("dryskin") != string::npos) ? dryskin : 0;
thyroidMatch += (symptom.find("palpitations") != string::npos) ? palpitations : 0;
thyroidMatch += (symptom.find("sensitivitytocold") != string::npos) ? sensitivitytocold : 0;
thyroidMatch += (symptom.find("sensitivitytoheat") != string::npos) ? sensitivitytoheat : 0;
thyroidMatch += (symptom.find("muscleweakness") != string::npos) ? muscleweakness : 0;
thyroidMatch += (symptom.find("swellingneck") != string::npos) ? swellingneck : 0;
thyroidMatch += (symptom.find("moodchanges") != string::npos) ? moodchanges : 0;

// Extra weight only for symptoms > 1
float thyroidPlus = 0;
if(symptom.find("fatigue") != string::npos && fatigue > 1) thyroidPlus += fatigue - 1;
if(symptom.find("weightchange") != string::npos && weightchange > 1) thyroidPlus += weightchange - 1;
if(symptom.find("hairloss") != string::npos && hairloss > 1) thyroidPlus += hairloss - 1;
if(symptom.find("dryskin") != string::npos && dryskin > 1) thyroidPlus += dryskin - 1;
if(symptom.find("palpitations") != string::npos && palpitations > 1) thyroidPlus += palpitations - 1;
if(symptom.find("muscleweakness") != string::npos && muscleweakness > 1) thyroidPlus += muscleweakness - 1;
if(symptom.find("swellingneck") != string::npos && swellingneck > 1) thyroidPlus += swellingneck - 1;

float thyroidPercentage = ((float)thyroidMatch / (count + thyroidPlus)) * 100;

//--------- Obesity ----------------------
int obesityMatch = 0;
obesityMatch += (symptom.find("weightgain") != string::npos) ? weightgain : 0;
obesityMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
obesityMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
obesityMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
obesityMatch += (symptom.find("snoring") != string::npos) ? snoring : 0;
obesityMatch += (symptom.find("difficultyexercising") != string::npos) ? difficultyexercising : 0;
obesityMatch += (symptom.find("highbloodpressure") != string::npos) ? highbloodpressure : 0;
obesityMatch += (symptom.find("highcholesterol") != string::npos) ? highcholesterol : 0;
obesityMatch += (symptom.find("backpain") != string::npos) ? backpain : 0;
obesityMatch += (symptom.find("sleepapnea") != string::npos) ? sleepapnea : 0;

// Extra weight only for symptoms > 1
float obesityPlus = 0;
if(symptom.find("fatigue") != string::npos && fatigue > 1) obesityPlus += fatigue - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) obesityPlus += shortnessofbreath - 1;
if(symptom.find("jointpain") != string::npos && jointpain > 1) obesityPlus += jointpain - 1;
if(symptom.find("highbloodpressure") != string::npos && highbloodpressure > 1) obesityPlus += highbloodpressure - 1;
if(symptom.find("highcholesterol") != string::npos && highcholesterol > 1) obesityPlus += highcholesterol - 1;
if(symptom.find("backpain") != string::npos && backpain > 1) obesityPlus += backpain - 1;

float obesityPercentage = ((float)obesityMatch / (count + obesityPlus)) * 100;


   //--------- Metabolic Syndrome ----------------------
int metabolicMatch = 0;
metabolicMatch += (symptom.find("abdominalobesity") != string::npos) ? abdominalobesity : 0;
metabolicMatch += (symptom.find("highbloodpressure") != string::npos) ? highbloodpressure : 0;
metabolicMatch += (symptom.find("highbloodsugar") != string::npos) ? highbloodsugar : 0;
metabolicMatch += (symptom.find("hightriglycerides") != string::npos) ? hightriglycerides : 0;
metabolicMatch += (symptom.find("lowHDL") != string::npos) ? lowHDL : 0;
metabolicMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
metabolicMatch += (symptom.find("insulinresistance") != string::npos) ? insulinresistance : 0;
metabolicMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
metabolicMatch += (symptom.find("headache") != string::npos) ? headache : 0;
metabolicMatch += (symptom.find("difficultyconcentrating") != string::npos) ? difficultyconcentrating : 0;

// Extra weight for symptoms > 1
float metabolicPlus = 0;
if(symptom.find("abdominalobesity") != string::npos && abdominalobesity > 1) metabolicPlus += abdominalobesity - 1;
if(symptom.find("highbloodpressure") != string::npos && highbloodpressure > 1) metabolicPlus += highbloodpressure - 1;
if(symptom.find("highbloodsugar") != string::npos && highbloodsugar > 1) metabolicPlus += highbloodsugar - 1;
if(symptom.find("hightriglycerides") != string::npos && hightriglycerides > 1) metabolicPlus += hightriglycerides - 1;
if(symptom.find("lowHDL") != string::npos && lowHDL > 1) metabolicPlus += lowHDL - 1;
if(symptom.find("insulinresistance") != string::npos && insulinresistance > 1) metabolicPlus += insulinresistance - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) metabolicPlus += dizziness - 1;
if(symptom.find("headache") != string::npos && headache > 1) metabolicPlus += headache - 1;

float metabolicPercentage = ((float)metabolicMatch / (count + metabolicPlus)) * 100;

//--------- Gastritis / Acid ----------------------
int gastritisMatch = 0;
gastritisMatch += (symptom.find("stomachpain") != string::npos) ? stomachpain : 0;
gastritisMatch += (symptom.find("bloating") != string::npos) ? bloating : 0;
gastritisMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
gastritisMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
gastritisMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
gastritisMatch += (symptom.find("heartburn") != string::npos) ? heartburn : 0;
gastritisMatch += (symptom.find("indigestion") != string::npos) ? indigestion : 0;
gastritisMatch += (symptom.find("belching") != string::npos) ? belching : 0;
gastritisMatch += (symptom.find("acidregurgitation") != string::npos) ? acidregurgitation : 0;
gastritisMatch += (symptom.find("stomachbloating") != string::npos) ? stomachbloating : 0;

// Extra weight for symptoms > 1
float gastritisPlus = 0;
if(symptom.find("stomachpain") != string::npos && stomachpain > 1) gastritisPlus += stomachpain - 1;
if(symptom.find("bloating") != string::npos && bloating > 1) gastritisPlus += bloating - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) gastritisPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) gastritisPlus += vomiting - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) gastritisPlus += lossappetite - 1;
if(symptom.find("heartburn") != string::npos && heartburn > 1) gastritisPlus += heartburn - 1;
if(symptom.find("indigestion") != string::npos && indigestion > 1) gastritisPlus += indigestion - 1;
if(symptom.find("acidregurgitation") != string::npos && acidregurgitation > 1) gastritisPlus += acidregurgitation - 1;
if(symptom.find("stomachbloating") != string::npos && stomachbloating > 1) gastritisPlus += stomachbloating - 1;

float gastritisPercentage = ((float)gastritisMatch / (count + gastritisPlus)) * 100;


       //--------- Peptic Acid ----------------------
int pepticMatch = 0;
pepticMatch += (symptom.find("stomachpain") != string::npos) ? stomachpain : 0;
pepticMatch += (symptom.find("bloating") != string::npos) ? bloating : 0;
pepticMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
pepticMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
pepticMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
pepticMatch += (symptom.find("heartburn") != string::npos) ? heartburn : 0;
pepticMatch += (symptom.find("indigestion") != string::npos) ? indigestion : 0;
pepticMatch += (symptom.find("belching") != string::npos) ? belching : 0;
pepticMatch += (symptom.find("acidregurgitation") != string::npos) ? acidregurgitation : 0;
pepticMatch += (symptom.find("darkstools") != string::npos) ? darkstools : 0;

// Extra weight for symptoms > 1
float pepticPlus = 0;
if(symptom.find("stomachpain") != string::npos && stomachpain > 1) pepticPlus += stomachpain - 1;
if(symptom.find("bloating") != string::npos && bloating > 1) pepticPlus += bloating - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) pepticPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) pepticPlus += vomiting - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) pepticPlus += lossappetite - 1;
if(symptom.find("heartburn") != string::npos && heartburn > 1) pepticPlus += heartburn - 1;
if(symptom.find("indigestion") != string::npos && indigestion > 1) pepticPlus += indigestion - 1;
if(symptom.find("acidregurgitation") != string::npos && acidregurgitation > 1) pepticPlus += acidregurgitation - 1;
if(symptom.find("darkstools") != string::npos && darkstools > 1) pepticPlus += darkstools - 1;

float pepticPercentage = ((float)pepticMatch / (count + pepticPlus)) * 100;

//--------- Liver Disease ----------------------
int liverMatch = 0;
liverMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
liverMatch += (symptom.find("jaundice") != string::npos) ? 3 : 0; // jaundice weight assumed 3
liverMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
liverMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
liverMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
liverMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
liverMatch += (symptom.find("darkurine") != string::npos) ? 3 : 0; // darkurine weight assumed 3
liverMatch += (symptom.find("pale stools") != string::npos) ? palestools : 0;
liverMatch += (symptom.find("swellinglegs") != string::npos) ? swellinglegs : 0;
liverMatch += (symptom.find("itching") != string::npos) ? itching : 0;

// Extra weight for symptoms > 1
float liverPlus = 0;
if(symptom.find("fatigue") != string::npos && fatigue > 1) liverPlus += fatigue - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) liverPlus += abdominalpain - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) liverPlus += lossappetite - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) liverPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) liverPlus += vomiting - 1;
if(symptom.find("pale stools") != string::npos && palestools > 1) liverPlus += palestools - 1;
if(symptom.find("swellinglegs") != string::npos && swellinglegs > 1) liverPlus += swellinglegs - 1;

float liverPercentage = ((float)liverMatch / (count + liverPlus)) * 100;

//--------- Gallstones ----------------------
int gallstonesMatch = 0;
gallstonesMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
gallstonesMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
gallstonesMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
gallstonesMatch += (symptom.find("bloating") != string::npos) ? bloating : 0;
gallstonesMatch += (symptom.find("indigestion") != string::npos) ? indigestion : 0;
gallstonesMatch += (symptom.find("painaftermeals") != string::npos) ? painaftermeals : 0;
gallstonesMatch += (symptom.find("belching") != string::npos) ? belching : 0;
gallstonesMatch += (symptom.find("jaundice") != string::npos) ? 3 : 0; // jaundice weight assumed 3
gallstonesMatch += (symptom.find("darkurine") != string::npos) ? 3 : 0; // darkurine weight assumed 3
gallstonesMatch += (symptom.find("pale stools") != string::npos) ? palestools : 0;

// Extra weight for symptoms > 1
float gallstonesPlus = 0;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) gallstonesPlus += abdominalpain - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) gallstonesPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) gallstonesPlus += vomiting - 1;
if(symptom.find("bloating") != string::npos && bloating > 1) gallstonesPlus += bloating - 1;
if(symptom.find("indigestion") != string::npos && indigestion > 1) gallstonesPlus += indigestion - 1;
if(symptom.find("painaftermeals") != string::npos && painaftermeals > 1) gallstonesPlus += painaftermeals - 1;
if(symptom.find("belching") != string::npos && belching > 1) gallstonesPlus += belching - 1;
if(symptom.find("pale stools") != string::npos && palestools > 1) gallstonesPlus += palestools - 1;

float gallstonesPercentage = ((float)gallstonesMatch / (count + gallstonesPlus)) * 100;

//--------- Irritable Bowel (IBS) ----------------------
int ibsMatch = 0;
ibsMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
ibsMatch += (symptom.find("bloating") != string::npos) ? bloating : 0;
ibsMatch += (symptom.find("diarrhea") != string::npos) ? 2 : 0; // diarrhea weight assumed 2
ibsMatch += (symptom.find("constipation") != string::npos) ? 2 : 0; // constipation weight assumed 2
ibsMatch += (symptom.find("mucusinstools") != string::npos) ? mucusinstools : 0;
ibsMatch += (symptom.find("urgency") != string::npos) ? urgency : 0;
ibsMatch += (symptom.find("feelingincomplete") != string::npos) ? feelingincomplete : 0;
ibsMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
ibsMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
ibsMatch += (symptom.find("abdominalcramps") != string::npos) ? abdominalcramps : 0;

// Extra weight for symptoms > 1
float ibsPlus = 0;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) ibsPlus += abdominalpain - 1;
if(symptom.find("bloating") != string::npos && bloating > 1) ibsPlus += bloating - 1;
if(symptom.find("mucusinstools") != string::npos && mucusinstools > 1) ibsPlus += mucusinstools - 1;
if(symptom.find("urgency") != string::npos && urgency > 1) ibsPlus += urgency - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) ibsPlus += fatigue - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) ibsPlus += nausea - 1;
if(symptom.find("abdominalcramps") != string::npos && abdominalcramps > 1) ibsPlus += abdominalcramps - 1;

float ibsPercentage = ((float)ibsMatch / (count + ibsPlus)) * 100;


  //--------- Colorectal Cancer ----------------------
int colorectalMatch = 0;
colorectalMatch += (symptom.find("bloodinstools") != string::npos) ? bloodinstools : 0;
colorectalMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
colorectalMatch += (symptom.find("unexplainedweightloss") != string::npos) ? unexplainedweightloss : 0;
colorectalMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
colorectalMatch += (symptom.find("constipation") != string::npos) ? 2 : 0; // assumed weight 2
colorectalMatch += (symptom.find("diarrhea") != string::npos) ? 2 : 0; // assumed weight 2
colorectalMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
colorectalMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
colorectalMatch += (symptom.find("abdominalbloating") != string::npos) ? abdominalbloating : 0;
colorectalMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;

// Extra weight for symptoms > 1
float colorectalPlus = 0;
if(symptom.find("bloodinstools") != string::npos && bloodinstools > 1) colorectalPlus += bloodinstools - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) colorectalPlus += abdominalpain - 1;
if(symptom.find("unexplainedweightloss") != string::npos && unexplainedweightloss > 1) colorectalPlus += unexplainedweightloss - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) colorectalPlus += fatigue - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) colorectalPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) colorectalPlus += vomiting - 1;
if(symptom.find("abdominalbloating") != string::npos && abdominalbloating > 1) colorectalPlus += abdominalbloating - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) colorectalPlus += weakness - 1;

float colorectalPercentage = ((float)colorectalMatch / (count + colorectalPlus)) * 100;

//--------- Migraine ----------------------
int migraineMatch = 0;
migraineMatch += (symptom.find("headache") != string::npos) ? headache : 0;
migraineMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
migraineMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
migraineMatch += (symptom.find("sensitivitytolight") != string::npos) ? sensitivitytolight : 0;
migraineMatch += (symptom.find("sensitivitytosound") != string::npos) ? sensitivitytosound : 0;
migraineMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
migraineMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
migraineMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
migraineMatch += (symptom.find("irritability") != string::npos) ? irritability : 0;
migraineMatch += (symptom.find("difficultyconcentrating") != string::npos) ? difficultyconcentrating : 0;

// Extra weight for symptoms > 1
float migrainePlus = 0;
if(symptom.find("headache") != string::npos && headache > 1) migrainePlus += headache - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) migrainePlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) migrainePlus += vomiting - 1;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) migrainePlus += blurredvision - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) migrainePlus += dizziness - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) migrainePlus += fatigue - 1;
if(symptom.find("irritability") != string::npos && irritability > 1) migrainePlus += irritability - 1;
if(symptom.find("difficultyconcentrating") != string::npos && difficultyconcentrating > 1) migrainePlus += difficultyconcentrating - 1;

float migrainePercentage = ((float)migraineMatch / (count + migrainePlus)) * 100;

//--------- Epilepsy ----------------------
int epilepsyMatch = 0;
epilepsyMatch += (symptom.find("seizures") != string::npos) ? 3 : 0; // assuming seizures weight 3
epilepsyMatch += (symptom.find("lossconsciousness") != string::npos) ? 3 : 0; // assumed 3
epilepsyMatch += (symptom.find("confusion") != string::npos) ? confusion : 0;
epilepsyMatch += (symptom.find("staringspells") != string::npos) ? staringspells : 0;
epilepsyMatch += (symptom.find("twitching") != string::npos) ? twitching : 0;
epilepsyMatch += (symptom.find("falling") != string::npos) ? falling : 0;
epilepsyMatch += (symptom.find("musclestiffness") != string::npos) ? musclestiffness : 0;
epilepsyMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
epilepsyMatch += (symptom.find("anxiety") != string::npos) ? anxiety : 0;
epilepsyMatch += (symptom.find("memoryloss") != string::npos) ? memoryloss : 0;

// Extra weight for symptoms > 1
float epilepsyPlus = 0;
if(symptom.find("confusion") != string::npos && confusion > 1) epilepsyPlus += confusion - 1;
if(symptom.find("staringspells") != string::npos && staringspells > 1) epilepsyPlus += staringspells - 1;
if(symptom.find("twitching") != string::npos && twitching > 1) epilepsyPlus += twitching - 1;
if(symptom.find("falling") != string::npos && falling > 1) epilepsyPlus += falling - 1;
if(symptom.find("musclestiffness") != string::npos && musclestiffness > 1) epilepsyPlus += musclestiffness - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) epilepsyPlus += fatigue - 1;
if(symptom.find("memoryloss") != string::npos && memoryloss > 1) epilepsyPlus += memoryloss - 1;

float epilepsyPercentage = ((float)epilepsyMatch / (count + epilepsyPlus)) * 100;

//--------- Alzheimer's Disease ----------------------
int alzheimerMatch = 0;
alzheimerMatch += (symptom.find("memoryloss") != string::npos) ? memoryloss : 0;
alzheimerMatch += (symptom.find("confusion") != string::npos) ? confusion : 0;
alzheimerMatch += (symptom.find("difficultyplanning") != string::npos) ? difficultyplanning : 0;
alzheimerMatch += (symptom.find("troublespeaking") != string::npos) ? troublespeaking : 0;
alzheimerMatch += (symptom.find("misplacingthings") != string::npos) ? misplacingthings : 0;
alzheimerMatch += (symptom.find("moodchanges") != string::npos) ? moodchanges : 0;
alzheimerMatch += (symptom.find("withdrawal") != string::npos) ? withdrawal : 0;
alzheimerMatch += (symptom.find("poorjudgment") != string::npos) ? poorjudgment : 0;
alzheimerMatch += (symptom.find("disorientation") != string::npos) ? 3 : 0; // assumed weight 3
alzheimerMatch += (symptom.find("difficultyperformingtasks") != string::npos) ? difficultyperformingtasks : 0;

// Extra weight for symptoms > 1
float alzheimerPlus = 0;
if(symptom.find("memoryloss") != string::npos && memoryloss > 1) alzheimerPlus += memoryloss - 1;
if(symptom.find("confusion") != string::npos && confusion > 1) alzheimerPlus += confusion - 1;
if(symptom.find("difficultyplanning") != string::npos && difficultyplanning > 1) alzheimerPlus += difficultyplanning - 1;
if(symptom.find("troublespeaking") != string::npos && troublespeaking > 1) alzheimerPlus += troublespeaking - 1;
if(symptom.find("misplacingthings") != string::npos && misplacingthings > 1) alzheimerPlus += misplacingthings - 1;
if(symptom.find("moodchanges") != string::npos && moodchanges > 1) alzheimerPlus += moodchanges - 1;
if(symptom.find("withdrawal") != string::npos && withdrawal > 1) alzheimerPlus += withdrawal - 1;
if(symptom.find("poorjudgment") != string::npos && poorjudgment > 1) alzheimerPlus += poorjudgment - 1;
if(symptom.find("difficultyperformingtasks") != string::npos && difficultyperformingtasks > 1) alzheimerPlus += difficultyperformingtasks - 1;

float alzheimerPercentage = ((float)alzheimerMatch / (count + alzheimerPlus)) * 100;


          //--------- Parkinson's Disease ----------------------
int parkinsonsMatch = 0;
parkinsonsMatch += (symptom.find("tremor") != string::npos) ? tremor : 0;
parkinsonsMatch += (symptom.find("slowedmovement") != string::npos) ? slowedmovement : 0;
parkinsonsMatch += (symptom.find("rigidmuscles") != string::npos) ? rigidmuscles : 0;
parkinsonsMatch += (symptom.find("impairedbalance") != string::npos) ? impairedbalance : 0;
parkinsonsMatch += (symptom.find("postureinstability") != string::npos) ? postureinstability : 0;
parkinsonsMatch += (symptom.find("lossautomaticmovements") != string::npos) ? lossautomaticmovements : 0;
parkinsonsMatch += (symptom.find("speechchanges") != string::npos) ? speechchanges : 0;
parkinsonsMatch += (symptom.find("writingchanges") != string::npos) ? writingchanges : 0;
parkinsonsMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
parkinsonsMatch += (symptom.find("sleepproblems") != string::npos) ? sleepproblems : 0;

// Extra weight for symptoms > 1
float parkinsonsPlus = 0;
if(symptom.find("tremor") != string::npos && tremor > 1) parkinsonsPlus += tremor - 1;
if(symptom.find("slowedmovement") != string::npos && slowedmovement > 1) parkinsonsPlus += slowedmovement - 1;
if(symptom.find("rigidmuscles") != string::npos && rigidmuscles > 1) parkinsonsPlus += rigidmuscles - 1;
if(symptom.find("impairedbalance") != string::npos && impairedbalance > 1) parkinsonsPlus += impairedbalance - 1;
if(symptom.find("postureinstability") != string::npos && postureinstability > 1) parkinsonsPlus += postureinstability - 1;
if(symptom.find("lossautomaticmovements") != string::npos && lossautomaticmovements > 1) parkinsonsPlus += lossautomaticmovements - 1;
if(symptom.find("speechchanges") != string::npos && speechchanges > 1) parkinsonsPlus += speechchanges - 1;
if(symptom.find("writingchanges") != string::npos && writingchanges > 1) parkinsonsPlus += writingchanges - 1;

float parkinsonsPercentage = ((float)parkinsonsMatch / (count + parkinsonsPlus)) * 100;

//--------- Multiple Sclerosis ----------------------
int msMatch = 0;
msMatch += (symptom.find("numbness") != string::npos) ? numbness : 0;
msMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;
msMatch += (symptom.find("tingling") != string::npos) ? tingling : 0;
msMatch += (symptom.find("balanceproblems") != string::npos) ? balanceproblems : 0;
msMatch += (symptom.find("visionproblems") != string::npos) ? visionproblems : 0;
msMatch += (symptom.find("musclespasms") != string::npos) ? musclespasms : 0;
msMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
msMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
msMatch += (symptom.find("bladderproblems") != string::npos) ? bladderproblems : 0;
msMatch += (symptom.find("cognitivechanges") != string::npos) ? cognitivechanges : 0;

// Extra weight for symptoms > 1
float msPlus = 0;
if(symptom.find("numbness") != string::npos && numbness > 1) msPlus += numbness - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) msPlus += weakness - 1;
if(symptom.find("tingling") != string::npos && tingling > 1) msPlus += tingling - 1;
if(symptom.find("balanceproblems") != string::npos && balanceproblems > 1) msPlus += balanceproblems - 1;
if(symptom.find("visionproblems") != string::npos && visionproblems > 1) msPlus += visionproblems - 1;
if(symptom.find("musclespasms") != string::npos && musclespasms > 1) msPlus += musclespasms - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) msPlus += fatigue - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) msPlus += dizziness - 1;
if(symptom.find("bladderproblems") != string::npos && bladderproblems > 1) msPlus += bladderproblems - 1;
if(symptom.find("cognitivechanges") != string::npos && cognitivechanges > 1) msPlus += cognitivechanges - 1;

float msPercentage = ((float)msMatch / (count + msPlus)) * 100;

  //--------- Osteoarthritis ----------------------
int osteoarthritisMatch = 0;
osteoarthritisMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
osteoarthritisMatch += (symptom.find("stiffness") != string::npos) ? stiffness : 0;
osteoarthritisMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
osteoarthritisMatch += (symptom.find("reducedmobility") != string::npos) ? reducedmobility : 0;
osteoarthritisMatch += (symptom.find("tenderness") != string::npos) ? tenderness : 0;
osteoarthritisMatch += (symptom.find("grating") != string::npos) ? grating : 0;
osteoarthritisMatch += (symptom.find("boneenlargement") != string::npos) ? boneenlargement : 0;
osteoarthritisMatch += (symptom.find("jointdeformity") != string::npos) ? jointdeformity : 0;
osteoarthritisMatch += (symptom.find("painwithactivity") != string::npos) ? painwithactivity : 0;
osteoarthritisMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;

// Extra weight for symptoms > 1
float osteoarthritisPlus = 0;
if(symptom.find("jointpain") != string::npos && jointpain > 1) osteoarthritisPlus += jointpain - 1;
if(symptom.find("stiffness") != string::npos && stiffness > 1) osteoarthritisPlus += stiffness - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) osteoarthritisPlus += swelling - 1;
if(symptom.find("reducedmobility") != string::npos && reducedmobility > 1) osteoarthritisPlus += reducedmobility - 1;
if(symptom.find("tenderness") != string::npos && tenderness > 1) osteoarthritisPlus += tenderness - 1;
if(symptom.find("grating") != string::npos && grating > 1) osteoarthritisPlus += grating - 1;
if(symptom.find("boneenlargement") != string::npos && boneenlargement > 1) osteoarthritisPlus += boneenlargement - 1;
if(symptom.find("jointdeformity") != string::npos && jointdeformity > 1) osteoarthritisPlus += jointdeformity - 1;
if(symptom.find("painwithactivity") != string::npos && painwithactivity > 1) osteoarthritisPlus += painwithactivity - 1;

float osteoarthritisPercentage = ((float)osteoarthritisMatch / (count + osteoarthritisPlus)) * 100;

//--------- Rheumatoid Arthritis ----------------------
int raMatch = 0;
raMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
raMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
raMatch += (symptom.find("stiffness") != string::npos) ? stiffness : 0;
raMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
raMatch += (symptom.find("fever") != string::npos) ? fever : 0;
raMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
raMatch += (symptom.find("jointwarmth") != string::npos) ? jointstiffness : 0; // Assuming jointwarmth = jointstiffness
raMatch += (symptom.find("jointdeformity") != string::npos) ? jointdeformity : 0;
raMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;
raMatch += (symptom.find("morningstiffness") != string::npos) ? morningstiffness : 0;

// Extra weight for symptoms > 1
float raPlus = 0;
if(symptom.find("jointpain") != string::npos && jointpain > 1) raPlus += jointpain - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) raPlus += swelling - 1;
if(symptom.find("stiffness") != string::npos && stiffness > 1) raPlus += stiffness - 1;
if(symptom.find("fatigue") != string::npos && fatigue > 1) raPlus += fatigue - 1;
if(symptom.find("fever") != string::npos && fever > 1) raPlus += fever - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) raPlus += lossappetite - 1;
if(symptom.find("jointwarmth") != string::npos && jointstiffness > 1) raPlus += jointstiffness - 1;
if(symptom.find("jointdeformity") != string::npos && jointdeformity > 1) raPlus += jointdeformity - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) raPlus += weakness - 1;
if(symptom.find("morningstiffness") != string::npos && morningstiffness > 1) raPlus += morningstiffness - 1;

float raPercentage = ((float)raMatch / (count + raPlus)) * 100;

    //--------- Osteoporosis ----------------------
int osteoporosisMatch = 0;
osteoporosisMatch += (symptom.find("bonepain") != string::npos) ? bonepain : 0;
osteoporosisMatch += (symptom.find("fractures") != string::npos) ? fractures : 0;
osteoporosisMatch += (symptom.find("stoopedposture") != string::npos) ? stoopedposture : 0;
osteoporosisMatch += (symptom.find("lossheight") != string::npos) ? lossheight : 0;
osteoporosisMatch += (symptom.find("backpain") != string::npos) ? backpain : 0;
osteoporosisMatch += (symptom.find("weakbones") != string::npos) ? 0 : 0; // weakbones not in weights
osteoporosisMatch += (symptom.find("limitedmobility") != string::npos) ? reducedmobility : 0;
osteoporosisMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
osteoporosisMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
osteoporosisMatch += (symptom.find("difficultywalking") != string::npos) ? troublewalking : 0;

float osteoporosisPercentage = ((float)osteoporosisMatch / count) * 100;

//--------- Gout ----------------------
int goutMatch = 0;
goutMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
goutMatch += (symptom.find("redness") != string::npos) ? redness : 0;
goutMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
goutMatch += (symptom.find("warmth") != string::npos) ? warmth : 0;
goutMatch += (symptom.find("tenderness") != string::npos) ? tenderness : 0;
goutMatch += (symptom.find("suddenattacks") != string::npos) ? 0 : 0; // not in weights
goutMatch += (symptom.find("difficultywalking") != string::npos) ? troublewalking : 0;
goutMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
goutMatch += (symptom.find("fever") != string::npos) ? fever : 0;
goutMatch += (symptom.find("jointstiffness") != string::npos) ? jointstiffness : 0;

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


