#include "cls.h"
// Healthinfo3: Pneumonia
pair<string,float> detail::healthinfo3() {
	//-------------- weighted symptom -------------
	const int abdominalbloating = 2, abdominalcramps = 2, abdominalobesity = 2, abdominalpain = 2,
          backpain = 2, balanceproblems = 3, balanceissues = 3, bleeding = 3, bleedinggums = 2,
          blisters = 2, blurredvision = 3, bodyaches = 1, boneenlargement = 2, bonepain = 2,
          bonefractures = 3, burning = 2, cystic = 2, chestdiscomfort = 2, chestpain = 3,
          changesinshape = 2, cloudyurine = 2, coldhandsfeet = 1, coldfeet = 1, confusion = 3,
          cramps = 2, cracking = 2, cough = 1, coughingblood = 3, constipation = 2, darkpatch = 2,
          darkstools = 3, dizziness = 2, difficultybreathing = 3, difficultyconcentrating = 1,
          difficultyexercising = 2, difficultyplanning = 2, difficultyperformingtasks = 2,
          difficultyreading = 2, discoloration = 2, diarrhea = 2, doublevision = 3, dryskin = 1,
          earpain = 2, enlargedlymphnodes = 2, extremehunger = 2, excessivethirst = 2, fatigue = 1,
          fever = 2, fadedcolors = 1, falling = 3, facialdroop = 3, fullness = 2,
          frequenturination = 2, frequentinfections = 3, grating = 2, hairloss = 1, halos = 2,
          halosaroundlights = 3, headache = 1, heartburn = 2, hoarseness = 1, highbloodpressure = 3,
          highbloodsugar = 3, highcholesterol = 2, hyperpigmentation = 2, impairedbalance = 3,
          inflamed = 2, insulinresistance = 2, irritability = 1, itching = 1, jointdeformity = 3,
          jointpain = 2, jointstiffness = 2, jointwarmth = 2, lump = 2, lossappetite = 2,
          lossofsmell = 2, lossoftaste = 2, lossbalance = 3, lossheight = 3, losscentralvision = 3,
          lowHDL = 2, macular = 2, memoryloss = 3, misplacingthings = 1, molechange = 2,
          musclecramps = 2, musclepain = 2, muscleweakness = 2, musclespasms = 2, nailpitting = 2,
          nailthickening = 2, nausea = 2, nightSweats = 2, nightssweats = 2, nippleretraction = 2,
          nippledischarge = 2, newgrowth = 3, oozing = 2, pain = 2, painaftermeals = 2,
          painful = 2, palpitations = 3, pelvicpain = 2, poornightvision = 3, persistentcough = 2,
          paleness = 2, pale = 2, palestools = 3, pee = 1, peeling = 2, poorjudgment = 2,
          psoriasis = 2, pus = 2, rash = 2, redpatch = 2, redpatches = 2, redness = 2,
          rapidheartbeat = 3, recurrentinfections = 3, runnynose = 1, scaly = 2, scarring = 2,
          scaling = 2, shortnessofbreath = 3, sensitivitytocold = 1, sensitivitytoheat = 1,
          sensitivitytolight = 2, sensitivitytosound = 2, sleepproblems = 1, sleepapnea = 2,
          skinrash = 2, skindimples = 2, swelling = 2, swellinglegs = 2, sorethroat = 1,
          sorethatdoesnotheal = 2, snoring = 1, staringspells = 3, stiffness = 2, stoopedposture = 2,
          stomachbloating = 2, stomachpain = 2, strongsmell = 1, tenderness = 2, tingling = 2,
          tinglinghandsfeet = 3, tightchest = 3, tiredness = 1, troubleseeing = 3,
          troublespeaking = 3, troublewalking = 3, tunnelvision = 3, twitching = 2,
          urinechanges = 2, urgency = 2, visionloss = 3, visionproblems = 3, vomiting = 2,
          wateryeyes = 1, weakbones = 3, weakness = 2, weightchange = 2, weightgain = 1,
          weightloss = 3, wheezing = 3, whiteheads = 1, warmth = 2,pimples=2,blackheads=1,oily=2,
		  thickened=2,thickenedskin=2,silverscales=3,raisedbump=1,odor=1,glare=2,eyepain=3,darkspots=1,
		   hearingloss = 2, tinnitus = 2, fluid = 2, drainage = 2,
          bloodinurine = 3, painlowerback = 2, severebackpain = 3, painfulurination = 3,
          swollenlymphnodes = 3, easybruising = 3,distortedvision=3,colorsfaded=2,difficultyrecognizingfaces=3,
		  blurrynightvision=2,chills = 1,excessivebleeding = 3,nosebleeds = 2, prolongedbleeding = 3,
          hematomas = 2, numbness = 2, bloodinstools = 3, unexplainedweightloss = 3;

	
//--------- Acne ----------------------
int acneMatch = 0;

// Add weighted scores instead of just counting
acneMatch += (symptom.find("pimples") != string::npos) ? pimples : 0;
acneMatch += (symptom.find("blackheads") != string::npos) ? blackheads : 0;
acneMatch += (symptom.find("whiteheads") != string::npos) ? whiteheads : 0;
acneMatch += (symptom.find("oily") != string::npos) ? oily : 0;
acneMatch += (symptom.find("redness") != string::npos) ? redness : 0;
acneMatch += (symptom.find("inflamed") != string::npos) ? inflamed : 0;
acneMatch += (symptom.find("cystic") != string::npos) ? cystic : 0;
acneMatch += (symptom.find("scarring") != string::npos) ? scarring : 0;
acneMatch += (symptom.find("painful") != string::npos) ? painful : 0;
acneMatch += (symptom.find("pus") != string::npos) ? pus : 0;

// Extra weight only for symptoms > 1
float acnePlus = 0;
if(symptom.find("pimples") != string::npos && pimples > 1) acnePlus += pimples - 1;
// REMOVED: blackheads (weight=1)
// REMOVED: whiteheads (weight=1)
if(symptom.find("oily") != string::npos && oily > 1) acnePlus += oily - 1;
if(symptom.find("redness") != string::npos && redness > 1) acnePlus += redness - 1;
if(symptom.find("inflamed") != string::npos && inflamed > 1) acnePlus += inflamed - 1;
if(symptom.find("cystic") != string::npos && cystic > 1) acnePlus += cystic - 1;
if(symptom.find("scarring") != string::npos && scarring > 1) acnePlus += scarring - 1;
if(symptom.find("painful") != string::npos && painful > 1) acnePlus += painful - 1;
if(symptom.find("pus") != string::npos && pus > 1) acnePlus += pus - 1;

// Calculate percentage using weighted score
float acnePercentage = ((float)acneMatch / (count + acnePlus)) * 100;


//--------- Eczema / Dermatitis ----------------------
int eczemaMatch = 0;

// Add weighted scores instead of just counting
eczemaMatch += (symptom.find("itching") != string::npos) ? itching : 0;
eczemaMatch += (symptom.find("redness") != string::npos) ? redness : 0;
eczemaMatch += (symptom.find("dryskin") != string::npos) ? dryskin : 0;
eczemaMatch += (symptom.find("rash") != string::npos) ? rash : 0;
eczemaMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
eczemaMatch += (symptom.find("cracking") != string::npos) ? cracking : 0;
eczemaMatch += (symptom.find("oozing") != string::npos) ? oozing : 0;
eczemaMatch += (symptom.find("thickened") != string::npos) ? thickened : 0;
eczemaMatch += (symptom.find("blisters") != string::npos) ? blisters : 0;
eczemaMatch += (symptom.find("redpatches") != string::npos) ? redpatches : 0;

// Extra weight only for symptoms > 1
float eczemaPlus = 0;
// REMOVED: itching (weight=1)
if(symptom.find("redness") != string::npos && redness > 1) eczemaPlus += redness - 1;
// REMOVED: dryskin (weight=1)
if(symptom.find("rash") != string::npos && rash > 1) eczemaPlus += rash - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) eczemaPlus += swelling - 1;
if(symptom.find("cracking") != string::npos && cracking > 1) eczemaPlus += cracking - 1;
if(symptom.find("oozing") != string::npos && oozing > 1) eczemaPlus += oozing - 1;
if(symptom.find("thickened") != string::npos && thickened > 1) eczemaPlus += thickened - 1;
if(symptom.find("blisters") != string::npos && blisters > 1) eczemaPlus += blisters - 1;
if(symptom.find("redpatches") != string::npos && redpatches > 1) eczemaPlus += redpatches - 1;

// Calculate weighted percentage
float eczemaPercentage = ((float)eczemaMatch / (count + eczemaPlus)) * 100;

//--------- Psoriasis ----------------------
int psoriasisMatch = 0;

// Add weighted scores instead of just counting
psoriasisMatch += (symptom.find("redpatches") != string::npos) ? redpatches : 0;
psoriasisMatch += (symptom.find("scaly") != string::npos) ? scaly : 0;
psoriasisMatch += (symptom.find("itching") != string::npos) ? itching : 0;
psoriasisMatch += (symptom.find("pain") != string::npos) ? pain : 0;
psoriasisMatch += (symptom.find("thickenedskin") != string::npos) ? thickenedskin : 0;
psoriasisMatch += (symptom.find("silverscales") != string::npos) ? silverscales : 0;
psoriasisMatch += (symptom.find("nailpitting") != string::npos) ? nailpitting : 0;
psoriasisMatch += (symptom.find("cracking") != string::npos) ? cracking : 0;
psoriasisMatch += (symptom.find("dryskin") != string::npos) ? dryskin : 0;
psoriasisMatch += (symptom.find("burning") != string::npos) ? burning : 0;

// Extra weight only for symptoms > 1
float psoriasisPlus = 0;
if(symptom.find("redpatches") != string::npos && redpatches > 1) psoriasisPlus += redpatches - 1;
if(symptom.find("scaly") != string::npos && scaly > 1) psoriasisPlus += scaly - 1;
// REMOVED: itching (weight=1)
if(symptom.find("pain") != string::npos && pain > 1) psoriasisPlus += pain - 1;
if(symptom.find("thickenedskin") != string::npos && thickenedskin > 1) psoriasisPlus += thickenedskin - 1;
if(symptom.find("silverscales") != string::npos && silverscales > 1) psoriasisPlus += silverscales - 1;
if(symptom.find("nailpitting") != string::npos && nailpitting > 1) psoriasisPlus += nailpitting - 1;
if(symptom.find("cracking") != string::npos && cracking > 1) psoriasisPlus += cracking - 1;
// REMOVED: dryskin (weight=1)
if(symptom.find("burning") != string::npos && burning > 1) psoriasisPlus += burning - 1;

// Calculate weighted percentage
float psoriasisPercentage = ((float)psoriasisMatch / (count + psoriasisPlus)) * 100;


//--------- Skin Cancer ----------------------
int skinCancerMatch = 0;

// Weighted scores
skinCancerMatch += (symptom.find("molechange") != string::npos) ? molechange : 0;
skinCancerMatch += (symptom.find("newgrowth") != string::npos) ? newgrowth : 0;
skinCancerMatch += (symptom.find("bleeding") != string::npos) ? bleeding : 0;
skinCancerMatch += (symptom.find("itching") != string::npos) ? itching : 0;
skinCancerMatch += (symptom.find("sorethatdoesnotheal") != string::npos) ? sorethatdoesnotheal : 0;
skinCancerMatch += (symptom.find("redpatch") != string::npos) ? redpatch : 0;
skinCancerMatch += (symptom.find("darkpatch") != string::npos) ? darkpatch : 0;
skinCancerMatch += (symptom.find("raisedbump") != string::npos) ? raisedbump : 0;
skinCancerMatch += (symptom.find("pain") != string::npos) ? pain : 0;
skinCancerMatch += (symptom.find("scaling") != string::npos) ? scaling : 0;

// Extra weight for symptoms > 1
float skinCancerPlus = 0;
if(symptom.find("molechange") != string::npos && molechange > 1) skinCancerPlus += molechange - 1;
if(symptom.find("newgrowth") != string::npos && newgrowth > 1) skinCancerPlus += newgrowth - 1;
if(symptom.find("bleeding") != string::npos && bleeding > 1) skinCancerPlus += bleeding - 1;
// REMOVED: itching (weight=1)
if(symptom.find("sorethatdoesnotheal") != string::npos && sorethatdoesnotheal > 1) skinCancerPlus += sorethatdoesnotheal - 1;
if(symptom.find("redpatch") != string::npos && redpatch > 1) skinCancerPlus += redpatch - 1;
if(symptom.find("darkpatch") != string::npos && darkpatch > 1) skinCancerPlus += darkpatch - 1;
// REMOVED: raisedbump (weight=1)
if(symptom.find("pain") != string::npos && pain > 1) skinCancerPlus += pain - 1;
if(symptom.find("scaling") != string::npos && scaling > 1) skinCancerPlus += scaling - 1;

// Calculate weighted percentage
float skinCancerPercentage = ((float)skinCancerMatch / (count + skinCancerPlus)) * 100;

//--------- Fungal Infection ----------------------
int fungalMatch = 0;

// Weighted scores
fungalMatch += (symptom.find("itching") != string::npos) ? itching : 0;
fungalMatch += (symptom.find("redness") != string::npos) ? redness : 0;
fungalMatch += (symptom.find("peeling") != string::npos) ? peeling : 0;
fungalMatch += (symptom.find("blisters") != string::npos) ? blisters : 0;
fungalMatch += (symptom.find("odor") != string::npos) ? odor : 0;
fungalMatch += (symptom.find("cracking") != string::npos) ? cracking : 0;
fungalMatch += (symptom.find("scaling") != string::npos) ? scaling : 0;
fungalMatch += (symptom.find("rash") != string::npos) ? rash : 0;
fungalMatch += (symptom.find("discoloration") != string::npos) ? discoloration : 0;
fungalMatch += (symptom.find("nailthickening") != string::npos) ? nailthickening : 0;

// Extra weight for symptoms > 1
float fungalPlus = 0;
// REMOVED: itching (weight=1)
if(symptom.find("redness") != string::npos && redness > 1) fungalPlus += redness - 1;
if(symptom.find("peeling") != string::npos && peeling > 1) fungalPlus += peeling - 1;
if(symptom.find("blisters") != string::npos && blisters > 1) fungalPlus += blisters - 1;
// REMOVED: odor (weight=1)
if(symptom.find("cracking") != string::npos && cracking > 1) fungalPlus += cracking - 1;
if(symptom.find("scaling") != string::npos && scaling > 1) fungalPlus += scaling - 1;
if(symptom.find("rash") != string::npos && rash > 1) fungalPlus += rash - 1;
if(symptom.find("discoloration") != string::npos && discoloration > 1) fungalPlus += discoloration - 1;
if(symptom.find("nailthickening") != string::npos && nailthickening > 1) fungalPlus += nailthickening - 1;

// Calculate weighted percentage
float fungalPercentage = ((float)fungalMatch / (count + fungalPlus)) * 100;


//--------- Cataract ----------------------
int cataractMatch = 0;

// Weighted scores
cataractMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
cataractMatch += (symptom.find("fadedcolors") != string::npos) ? fadedcolors : 0;
cataractMatch += (symptom.find("glare") != string::npos) ? glare : 0;
cataractMatch += (symptom.find("poornightvision") != string::npos) ? poornightvision : 0;
cataractMatch += (symptom.find("doublevision") != string::npos) ? doublevision : 0;
cataractMatch += (symptom.find("visionloss") != string::npos) ? visionloss : 0;
cataractMatch += (symptom.find("halos") != string::npos) ? halos : 0;
cataractMatch += (symptom.find("difficultyreading") != string::npos) ? difficultyreading : 0;
cataractMatch += (symptom.find("eyepain") != string::npos) ? eyepain : 0;
cataractMatch += (symptom.find("sensitivitytolight") != string::npos) ? sensitivitytolight : 0;

// Extra weight for symptoms > 1
float cataractPlus = 0;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) cataractPlus += blurredvision - 1;
// REMOVED: fadedcolors (weight=1)
if(symptom.find("glare") != string::npos && glare > 1) cataractPlus += glare - 1;
if(symptom.find("poornightvision") != string::npos && poornightvision > 1) cataractPlus += poornightvision - 1;
if(symptom.find("doublevision") != string::npos && doublevision > 1) cataractPlus += doublevision - 1;
if(symptom.find("visionloss") != string::npos && visionloss > 1) cataractPlus += visionloss - 1;
if(symptom.find("halos") != string::npos && halos > 1) cataractPlus += halos - 1;
if(symptom.find("difficultyreading") != string::npos && difficultyreading > 1) cataractPlus += difficultyreading - 1;
if(symptom.find("eyepain") != string::npos && eyepain > 1) cataractPlus += eyepain - 1;
if(symptom.find("sensitivitytolight") != string::npos && sensitivitytolight > 1) cataractPlus += sensitivitytolight - 1;

float cataractPercentage = ((float)cataractMatch / (count + cataractPlus)) * 100;


//--------- Glaucoma ----------------------
int glaucomaMatch = 0;

glaucomaMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
glaucomaMatch += (symptom.find("halos") != string::npos) ? halos : 0;
glaucomaMatch += (symptom.find("headache") != string::npos) ? headache : 0;
glaucomaMatch += (symptom.find("eyepain") != string::npos) ? eyepain : 0;
glaucomaMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
glaucomaMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
glaucomaMatch += (symptom.find("visionloss") != string::npos) ? visionloss : 0;
glaucomaMatch += (symptom.find("tunnelvision") != string::npos) ? tunnelvision : 0;
glaucomaMatch += (symptom.find("redness") != string::npos) ? redness : 0;
glaucomaMatch += (symptom.find("halosaroundlights") != string::npos) ? halosaroundlights : 0;

// Extra weight
float glaucomaPlus = 0;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) glaucomaPlus += blurredvision - 1;
if(symptom.find("halos") != string::npos && halos > 1) glaucomaPlus += halos - 1;
// REMOVED: headache (weight=1)
if(symptom.find("eyepain") != string::npos && eyepain > 1) glaucomaPlus += eyepain - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) glaucomaPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) glaucomaPlus += vomiting - 1;
if(symptom.find("visionloss") != string::npos && visionloss > 1) glaucomaPlus += visionloss - 1;
if(symptom.find("tunnelvision") != string::npos && tunnelvision > 1) glaucomaPlus += tunnelvision - 1;
if(symptom.find("redness") != string::npos && redness > 1) glaucomaPlus += redness - 1;
if(symptom.find("halosaroundlights") != string::npos && halosaroundlights > 1) glaucomaPlus += halosaroundlights - 1;

float glaucomaPercentage = ((float)glaucomaMatch / (count + glaucomaPlus)) * 100;


//--------- Macular Degeneration ----------------------
int macularMatch = 0;

macularMatch += (symptom.find("blurredvision") != string::npos) ? blurredvision : 0;
macularMatch += (symptom.find("darkspots") != string::npos) ? darkspots : 0;
macularMatch += (symptom.find("distortedvision") != string::npos) ? distortedvision : 0;
macularMatch += (symptom.find("difficultyreading") != string::npos) ? difficultyreading : 0;
macularMatch += (symptom.find("losscentralvision") != string::npos) ? losscentralvision : 0;
macularMatch += (symptom.find("colorsfaded") != string::npos) ? colorsfaded : 0;
macularMatch += (symptom.find("difficultyrecognizingfaces") != string::npos) ? difficultyrecognizingfaces : 0;
macularMatch += (symptom.find("visionloss") != string::npos) ? visionloss : 0;
macularMatch += (symptom.find("eyepain") != string::npos) ? eyepain : 0;
macularMatch += (symptom.find("blurrynightvision") != string::npos) ? blurrynightvision : 0;

// Extra weight
float macularPlus = 0;
if(symptom.find("blurredvision") != string::npos && blurredvision > 1) macularPlus += blurredvision - 1;
// REMOVED: darkspots (weight=1)
if(symptom.find("distortedvision") != string::npos && distortedvision > 1) macularPlus += distortedvision - 1;
if(symptom.find("difficultyreading") != string::npos && difficultyreading > 1) macularPlus += difficultyreading - 1;
if(symptom.find("losscentralvision") != string::npos && losscentralvision > 1) macularPlus += losscentralvision - 1;
if(symptom.find("colorsfaded") != string::npos && colorsfaded > 1) macularPlus += colorsfaded - 1;
if(symptom.find("difficultyrecognizingfaces") != string::npos && difficultyrecognizingfaces > 1) macularPlus += difficultyrecognizingfaces - 1;
if(symptom.find("visionloss") != string::npos && visionloss > 1) macularPlus += visionloss - 1;
if(symptom.find("eyepain") != string::npos && eyepain > 1) macularPlus += eyepain - 1;
if(symptom.find("blurrynightvision") != string::npos && blurrynightvision > 1) macularPlus += blurrynightvision - 1;

float macularPercentage = ((float)macularMatch / (count + macularPlus)) * 100;

//--------- Hearing Loss / Ear Infection ----------------------
int hearingMatch = 0;

hearingMatch += (symptom.find("earpain") != string::npos) ? earpain : 0;
hearingMatch += (symptom.find("hearingloss") != string::npos) ? hearingloss : 0;
hearingMatch += (symptom.find("tinnitus") != string::npos) ? tinnitus : 0;
hearingMatch += (symptom.find("fluid") != string::npos) ? fluid : 0;
hearingMatch += (symptom.find("fever") != string::npos) ? fever : 0;
hearingMatch += (symptom.find("drainage") != string::npos) ? drainage : 0;
hearingMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
hearingMatch += (symptom.find("itching") != string::npos) ? itching : 0;
hearingMatch += (symptom.find("fullness") != string::npos) ? fullness : 0;
hearingMatch += (symptom.find("balanceissues") != string::npos) ? balanceissues : 0;

// Extra weight for symptoms > 1
float hearingPlus = 0;
if(symptom.find("earpain") != string::npos && earpain > 1) hearingPlus += earpain - 1;
if(symptom.find("hearingloss") != string::npos && hearingloss > 1) hearingPlus += hearingloss - 1;
if(symptom.find("tinnitus") != string::npos && tinnitus > 1) hearingPlus += tinnitus - 1;
if(symptom.find("fluid") != string::npos && fluid > 1) hearingPlus += fluid - 1;
if(symptom.find("fever") != string::npos && fever > 1) hearingPlus += fever - 1;
if(symptom.find("drainage") != string::npos && drainage > 1) hearingPlus += drainage - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) hearingPlus += dizziness - 1;
// REMOVED: itching (weight=1)
if(symptom.find("fullness") != string::npos && fullness > 1) hearingPlus += fullness - 1;
if(symptom.find("balanceissues") != string::npos && balanceissues > 1) hearingPlus += balanceissues - 1;

float hearingPercentage = ((float)hearingMatch / (count + hearingPlus)) * 100;


//--------- Urinary Tract Infection ----------------------
int utiMatch = 0;

utiMatch += (symptom.find("burning") != string::npos) ? burning : 0;
utiMatch += (symptom.find("frequenturination") != string::npos) ? frequenturination : 0;
utiMatch += (symptom.find("urgency") != string::npos) ? urgency : 0;
utiMatch += (symptom.find("cloudyurine") != string::npos) ? cloudyurine : 0;
utiMatch += (symptom.find("bloodinurine") != string::npos) ? bloodinurine : 0;
utiMatch += (symptom.find("painlowerback") != string::npos) ? painlowerback : 0;
utiMatch += (symptom.find("pelvicpain") != string::npos) ? pelvicpain : 0;
utiMatch += (symptom.find("fever") != string::npos) ? fever : 0;
utiMatch += (symptom.find("chills") != string::npos) ? chills : 0;
utiMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;

// Extra weight
float utiPlus = 0;
if(symptom.find("burning") != string::npos && burning > 1) utiPlus += burning - 1;
if(symptom.find("frequenturination") != string::npos && frequenturination > 1) utiPlus += frequenturination - 1;
if(symptom.find("urgency") != string::npos && urgency > 1) utiPlus += urgency - 1;
if(symptom.find("cloudyurine") != string::npos && cloudyurine > 1) utiPlus += cloudyurine - 1;
if(symptom.find("bloodinurine") != string::npos && bloodinurine > 1) utiPlus += bloodinurine - 1;
if(symptom.find("painlowerback") != string::npos && painlowerback > 1) utiPlus += painlowerback - 1;
if(symptom.find("pelvicpain") != string::npos && pelvicpain > 1) utiPlus += pelvicpain - 1;
if(symptom.find("fever") != string::npos && fever > 1) utiPlus += fever - 1;
// REMOVED: chills (weight=1)
if(symptom.find("nausea") != string::npos && nausea > 1) utiPlus += nausea - 1;

float utiPercentage = ((float)utiMatch / (count + utiPlus)) * 100;


//--------- Kidney Stones ----------------------
int kidneyMatch = 0;

kidneyMatch += (symptom.find("severebackpain") != string::npos) ? severebackpain : 0;
kidneyMatch += (symptom.find("painfulurination") != string::npos) ? painfulurination : 0;
kidneyMatch += (symptom.find("bloodinurine") != string::npos) ? bloodinurine : 0;
kidneyMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
kidneyMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
kidneyMatch += (symptom.find("frequenturination") != string::npos) ? frequenturination : 0;
kidneyMatch += (symptom.find("urgency") != string::npos) ? urgency : 0;
kidneyMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
kidneyMatch += (symptom.find("fever") != string::npos) ? fever : 0;
kidneyMatch += (symptom.find("chills") != string::npos) ? chills : 0;

// Extra weight
float kidneyPlus = 0;
if(symptom.find("severebackpain") != string::npos && severebackpain > 1) kidneyPlus += severebackpain - 1;
if(symptom.find("painfulurination") != string::npos && painfulurination > 1) kidneyPlus += painfulurination - 1;
if(symptom.find("bloodinurine") != string::npos && bloodinurine > 1) kidneyPlus += bloodinurine - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) kidneyPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) kidneyPlus += vomiting - 1;
if(symptom.find("frequenturination") != string::npos && frequenturination > 1) kidneyPlus += frequenturination - 1;
if(symptom.find("urgency") != string::npos && urgency > 1) kidneyPlus += urgency - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) kidneyPlus += abdominalpain - 1;
if(symptom.find("fever") != string::npos && fever > 1) kidneyPlus += fever - 1;
// REMOVED: chills (weight=1)

float kidneyPercentage = ((float)kidneyMatch / (count + kidneyPlus)) * 100;

//--------- Chronic Kidney Disease ----------------------
int ckdMatch = 0;
ckdMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
ckdMatch += (symptom.find("swellinglegs") != string::npos) ? swellinglegs : 0;
ckdMatch += (symptom.find("urinechanges") != string::npos) ? urinechanges : 0;
ckdMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
ckdMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
ckdMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
ckdMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
ckdMatch += (symptom.find("highbloodpressure") != string::npos) ? highbloodpressure : 0;
ckdMatch += (symptom.find("musclecramps") != string::npos) ? musclecramps : 0;
ckdMatch += (symptom.find("itching") != string::npos) ? itching : 0;

// Extra weight
float ckdPlus = 0;
// REMOVED: fatigue (weight=1)
if(symptom.find("swellinglegs") != string::npos && swellinglegs > 1) ckdPlus += swellinglegs - 1;
if(symptom.find("urinechanges") != string::npos && urinechanges > 1) ckdPlus += urinechanges - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) ckdPlus += lossappetite - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) ckdPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) ckdPlus += vomiting - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) ckdPlus += shortnessofbreath - 1;
if(symptom.find("highbloodpressure") != string::npos && highbloodpressure > 1) ckdPlus += highbloodpressure - 1;
if(symptom.find("musclecramps") != string::npos && musclecramps > 1) ckdPlus += musclecramps - 1;
// REMOVED: itching (weight=1)

float ckdPercentage = ((float)ckdMatch / (count + ckdPlus)) * 100;


//--------- Anemia ----------------------
int anemiaMatch = 0;
anemiaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
anemiaMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;
anemiaMatch += (symptom.find("pale") != string::npos) ? pale : 0;
anemiaMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
anemiaMatch += (symptom.find("dizziness") != string::npos) ? dizziness : 0;
anemiaMatch += (symptom.find("headache") != string::npos) ? headache : 0;
anemiaMatch += (symptom.find("coldhandsfeet") != string::npos) ? coldhandsfeet : 0;
anemiaMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
anemiaMatch += (symptom.find("irritability") != string::npos) ? irritability : 0;
anemiaMatch += (symptom.find("rapidheartbeat") != string::npos) ? rapidheartbeat : 0;

// Extra weight
float anemiaPlus = 0;
// REMOVED: fatigue (weight=1)
if(symptom.find("weakness") != string::npos && weakness > 1) anemiaPlus += weakness - 1;
if(symptom.find("pale") != string::npos && pale > 1) anemiaPlus += pale - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) anemiaPlus += shortnessofbreath - 1;
if(symptom.find("dizziness") != string::npos && dizziness > 1) anemiaPlus += dizziness - 1;
// REMOVED: headache (weight=1)
// REMOVED: coldhandsfeet (weight=1)
if(symptom.find("chestpain") != string::npos && chestpain > 1) anemiaPlus += chestpain - 1;
// REMOVED: irritability (weight=1)
if(symptom.find("rapidheartbeat") != string::npos && rapidheartbeat > 1) anemiaPlus += rapidheartbeat - 1;

float anemiaPercentage = ((float)anemiaMatch / (count + anemiaPlus)) * 100;


//--------- Leukemia ----------------------
int leukemiaMatch = 0;
leukemiaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
leukemiaMatch += (symptom.find("frequentinfections") != string::npos) ? frequentinfections : 0;
leukemiaMatch += (symptom.find("fever") != string::npos) ? fever : 0;
leukemiaMatch += (symptom.find("easybruising") != string::npos) ? easybruising : 0;
leukemiaMatch += (symptom.find("bleedinggums") != string::npos) ? bleedinggums : 0;
leukemiaMatch += (symptom.find("bonepain") != string::npos) ? bonepain : 0;
leukemiaMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
leukemiaMatch += (symptom.find("swollenlymphnodes") != string::npos) ? swollenlymphnodes : 0;
leukemiaMatch += (symptom.find("nightSweats") != string::npos) ? nightSweats : 0;
leukemiaMatch += (symptom.find("paleness") != string::npos) ? paleness : 0;

// Extra weight
float leukemiaPlus = 0;
// REMOVED: fatigue (weight=1)
if(symptom.find("frequentinfections") != string::npos && frequentinfections > 1) leukemiaPlus += frequentinfections - 1;
if(symptom.find("fever") != string::npos && fever > 1) leukemiaPlus += fever - 1;
if(symptom.find("easybruising") != string::npos && easybruising > 1) leukemiaPlus += easybruising - 1;
if(symptom.find("bleedinggums") != string::npos && bleedinggums > 1) leukemiaPlus += bleedinggums - 1;
if(symptom.find("bonepain") != string::npos && bonepain > 1) leukemiaPlus += bonepain - 1;
if(symptom.find("weightloss") != string::npos && weightloss > 1) leukemiaPlus += weightloss - 1;
if(symptom.find("swollenlymphnodes") != string::npos && swollenlymphnodes > 1) leukemiaPlus += swollenlymphnodes - 1;
if(symptom.find("nightSweats") != string::npos && nightSweats > 1) leukemiaPlus += nightSweats - 1;
if(symptom.find("paleness") != string::npos && paleness > 1) leukemiaPlus += paleness - 1;

float leukemiaPercentage = ((float)leukemiaMatch / (count + leukemiaPlus)) * 100;

//--------- Hemophilia ----------------------
int hemophiliaMatch = 0;
hemophiliaMatch += (symptom.find("excessivebleeding") != string::npos) ? excessivebleeding : 0;
hemophiliaMatch += (symptom.find("easybruising") != string::npos) ? easybruising : 0;
hemophiliaMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
hemophiliaMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
hemophiliaMatch += (symptom.find("nosebleeds") != string::npos) ? nosebleeds : 0;
hemophiliaMatch += (symptom.find("bloodinurine") != string::npos) ? bloodinurine : 0;
hemophiliaMatch += (symptom.find("prolongedbleeding") != string::npos) ? prolongedbleeding : 0;
hemophiliaMatch += (symptom.find("hematomas") != string::npos) ? hematomas : 0;
hemophiliaMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
hemophiliaMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;

// Extra weight
float hemophiliaPlus = 0;
if(symptom.find("excessivebleeding") != string::npos && excessivebleeding > 1) hemophiliaPlus += excessivebleeding - 1;
if(symptom.find("easybruising") != string::npos && easybruising > 1) hemophiliaPlus += easybruising - 1;
if(symptom.find("jointpain") != string::npos && jointpain > 1) hemophiliaPlus += jointpain - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) hemophiliaPlus += swelling - 1;
if(symptom.find("nosebleeds") != string::npos && nosebleeds > 1) hemophiliaPlus += nosebleeds - 1;
if(symptom.find("bloodinurine") != string::npos && bloodinurine > 1) hemophiliaPlus += bloodinurine - 1;
if(symptom.find("prolongedbleeding") != string::npos && prolongedbleeding > 1) hemophiliaPlus += prolongedbleeding - 1;
if(symptom.find("hematomas") != string::npos && hematomas > 1) hemophiliaPlus += hematomas - 1;
// REMOVED: fatigue (weight=1)
if(symptom.find("weakness") != string::npos && weakness > 1) hemophiliaPlus += weakness - 1;

float hemophiliaPercentage = ((float)hemophiliaMatch / (count + hemophiliaPlus)) * 100;


//--------- Auto Immune Disorder ----------------------
int autoimmuneMatch = 0;
autoimmuneMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
autoimmuneMatch += (symptom.find("jointpain") != string::npos) ? jointpain : 0;
autoimmuneMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
autoimmuneMatch += (symptom.find("skinrash") != string::npos) ? skinrash : 0;
autoimmuneMatch += (symptom.find("fever") != string::npos) ? fever : 0;
autoimmuneMatch += (symptom.find("musclepain") != string::npos) ? musclepain : 0;
autoimmuneMatch += (symptom.find("difficultyconcentrating") != string::npos) ? difficultyconcentrating : 0;
autoimmuneMatch += (symptom.find("hairloss") != string::npos) ? hairloss : 0;
autoimmuneMatch += (symptom.find("numbness") != string::npos) ? numbness : 0;
autoimmuneMatch += (symptom.find("coldhandsfeet") != string::npos) ? coldhandsfeet : 0;

// Extra weight
float autoimmunePlus = 0;
// REMOVED: fatigue (weight=1)
if(symptom.find("jointpain") != string::npos && jointpain > 1) autoimmunePlus += jointpain - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) autoimmunePlus += swelling - 1;
if(symptom.find("skinrash") != string::npos && skinrash > 1) autoimmunePlus += skinrash - 1;
if(symptom.find("fever") != string::npos && fever > 1) autoimmunePlus += fever - 1;
if(symptom.find("musclepain") != string::npos && musclepain > 1) autoimmunePlus += musclepain - 1;
// REMOVED: difficultyconcentrating (weight=1)
// REMOVED: hairloss (weight=1)
if(symptom.find("numbness") != string::npos && numbness > 1) autoimmunePlus += numbness - 1;
// REMOVED: coldhandsfeet (weight=1)

float autoimmunePercentage = ((float)autoimmuneMatch / (count + autoimmunePlus)) * 100;

//--------- Lung Cancer ----------------------
int lungMatch = 0;
lungMatch += (symptom.find("persistentcough") != string::npos) ? persistentcough : 0;
lungMatch += (symptom.find("coughingblood") != string::npos) ? coughingblood : 0;
lungMatch += (symptom.find("chestpain") != string::npos) ? chestpain : 0;
lungMatch += (symptom.find("shortnessofbreath") != string::npos) ? shortnessofbreath : 0;
lungMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
lungMatch += (symptom.find("weightloss") != string::npos) ? weightloss : 0;
lungMatch += (symptom.find("lossappetite") != string::npos) ? lossappetite : 0;
lungMatch += (symptom.find("hoarseness") != string::npos) ? hoarseness : 0;
lungMatch += (symptom.find("recurrentinfections") != string::npos) ? recurrentinfections : 0;
lungMatch += (symptom.find("wheezing") != string::npos) ? wheezing : 0;

// Extra weight
float lungPlus = 0;
if(symptom.find("persistentcough") != string::npos && persistentcough > 1) lungPlus += persistentcough - 1;
if(symptom.find("coughingblood") != string::npos && coughingblood > 1) lungPlus += coughingblood - 1;
if(symptom.find("chestpain") != string::npos && chestpain > 1) lungPlus += chestpain - 1;
if(symptom.find("shortnessofbreath") != string::npos && shortnessofbreath > 1) lungPlus += shortnessofbreath - 1;
// REMOVED: fatigue (weight=1)
if(symptom.find("weightloss") != string::npos && weightloss > 1) lungPlus += weightloss - 1;
if(symptom.find("lossappetite") != string::npos && lossappetite > 1) lungPlus += lossappetite - 1;
// REMOVED: hoarseness (weight=1)
if(symptom.find("recurrentinfections") != string::npos && recurrentinfections > 1) lungPlus += recurrentinfections - 1;
if(symptom.find("wheezing") != string::npos && wheezing > 1) lungPlus += wheezing - 1;

float lungPercentage = ((float)lungMatch / (count + lungPlus)) * 100;

//--------- Breast Cancer ----------------------
int breastMatch = 0;
breastMatch += (symptom.find("lump") != string::npos) ? lump : 0;
breastMatch += (symptom.find("pain") != string::npos) ? pain : 0;
breastMatch += (symptom.find("nippledischarge") != string::npos) ? nippledischarge : 0;
breastMatch += (symptom.find("swelling") != string::npos) ? swelling : 0;
breastMatch += (symptom.find("redness") != string::npos) ? redness : 0;
breastMatch += (symptom.find("skindimples") != string::npos) ? skindimples : 0;
breastMatch += (symptom.find("nippleretraction") != string::npos) ? nippleretraction : 0;
breastMatch += (symptom.find("enlargedlymphnodes") != string::npos) ? enlargedlymphnodes : 0;
breastMatch += (symptom.find("changesinshape") != string::npos) ? changesinshape : 0;
breastMatch += (symptom.find("rash") != string::npos) ? rash : 0;

// Extra weight
float breastPlus = 0;
if(symptom.find("lump") != string::npos && lump > 1) breastPlus += lump - 1;
if(symptom.find("pain") != string::npos && pain > 1) breastPlus += pain - 1;
if(symptom.find("nippledischarge") != string::npos && nippledischarge > 1) breastPlus += nippledischarge - 1;
if(symptom.find("swelling") != string::npos && swelling > 1) breastPlus += swelling - 1;
if(symptom.find("redness") != string::npos && redness > 1) breastPlus += redness - 1;
if(symptom.find("skindimples") != string::npos && skindimples > 1) breastPlus += skindimples - 1;
if(symptom.find("nippleretraction") != string::npos && nippleretraction > 1) breastPlus += nippleretraction - 1;
if(symptom.find("enlargedlymphnodes") != string::npos && enlargedlymphnodes > 1) breastPlus += enlargedlymphnodes - 1;
if(symptom.find("changesinshape") != string::npos && changesinshape > 1) breastPlus += changesinshape - 1;
if(symptom.find("rash") != string::npos && rash > 1) breastPlus += rash - 1;

float breastPercentage = ((float)breastMatch / (count + breastPlus)) * 100;


//--------- Colon Cancer ----------------------
int colonMatch = 0;
colonMatch += (symptom.find("bloodinstools") != string::npos) ? bloodinstools : 0;
colonMatch += (symptom.find("abdominalpain") != string::npos) ? abdominalpain : 0;
colonMatch += (symptom.find("unexplainedweightloss") != string::npos) ? unexplainedweightloss : 0;
colonMatch += (symptom.find("fatigue") != string::npos) ? fatigue : 0;
colonMatch += (symptom.find("constipation") != string::npos) ? constipation : 0;
colonMatch += (symptom.find("diarrhea") != string::npos) ? diarrhea : 0;
colonMatch += (symptom.find("nausea") != string::npos) ? nausea : 0;
colonMatch += (symptom.find("vomiting") != string::npos) ? vomiting : 0;
colonMatch += (symptom.find("abdominalbloating") != string::npos) ? abdominalbloating : 0;
colonMatch += (symptom.find("weakness") != string::npos) ? weakness : 0;

// Extra weight
float colonPlus = 0;
if(symptom.find("bloodinstools") != string::npos && bloodinstools > 1) colonPlus += bloodinstools - 1;
if(symptom.find("abdominalpain") != string::npos && abdominalpain > 1) colonPlus += abdominalpain - 1;
if(symptom.find("unexplainedweightloss") != string::npos && unexplainedweightloss > 1) colonPlus += unexplainedweightloss - 1;
// REMOVED: fatigue (weight=1)
if(symptom.find("constipation") != string::npos && constipation > 1) colonPlus += constipation - 1;
if(symptom.find("diarrhea") != string::npos && diarrhea > 1) colonPlus += diarrhea - 1;
if(symptom.find("nausea") != string::npos && nausea > 1) colonPlus += nausea - 1;
if(symptom.find("vomiting") != string::npos && vomiting > 1) colonPlus += vomiting - 1;
if(symptom.find("abdominalbloating") != string::npos && abdominalbloating > 1) colonPlus += abdominalbloating - 1;
if(symptom.find("weakness") != string::npos && weakness > 1) colonPlus += weakness - 1;

float colonPercentage = ((float)colonMatch / (count + colonPlus)) * 100;

//--------- Skin Cancer ----------------------
int skin2Match = 0;
skin2Match += (symptom.find("molechange") != string::npos) ? molechange : 0;
skin2Match += (symptom.find("newgrowth") != string::npos) ? newgrowth : 0;
skin2Match += (symptom.find("bleeding") != string::npos) ? bleeding : 0;
skin2Match += (symptom.find("itching") != string::npos) ? itching : 0;
skin2Match += (symptom.find("sorethatdoesnotheal") != string::npos) ? sorethatdoesnotheal : 0;
skin2Match += (symptom.find("redpatch") != string::npos) ? redpatch : 0;
skin2Match += (symptom.find("darkpatch") != string::npos) ? darkpatch : 0;
skin2Match += (symptom.find("raisedbump") != string::npos) ? raisedbump : 0;
skin2Match += (symptom.find("pain") != string::npos) ? pain : 0;
skin2Match += (symptom.find("scaling") != string::npos) ? scaling : 0;

// Extra weight
float skin2Plus = 0;
if(symptom.find("molechange") != string::npos && molechange > 1) skin2Plus += molechange - 1;
if(symptom.find("newgrowth") != string::npos && newgrowth > 1) skin2Plus += newgrowth - 1;
if(symptom.find("bleeding") != string::npos && bleeding > 1) skin2Plus += bleeding - 1;
// REMOVED: itching (weight=1)
if(symptom.find("sorethatdoesnotheal") != string::npos && sorethatdoesnotheal > 1) skin2Plus += sorethatdoesnotheal - 1;
if(symptom.find("redpatch") != string::npos && redpatch > 1) skin2Plus += redpatch - 1;
if(symptom.find("darkpatch") != string::npos && darkpatch > 1) skin2Plus += darkpatch - 1;
// REMOVED: raisedbump (weight=1)
if(symptom.find("pain") != string::npos && pain > 1) skin2Plus += pain - 1;
if(symptom.find("scaling") != string::npos && scaling > 1) skin2Plus += scaling - 1;

float skin2Percentage = ((float)skin2Match / (count + skin2Plus)) * 100;


string highestMatch;
float highestPercentage = 0;

// Compare Acne
if(acnePercentage > highestPercentage){
    highestMatch = "Acne";
    highestPercentage = acnePercentage;
}

// Compare Eczema / Dermatitis
if(eczemaPercentage > highestPercentage){
    highestMatch = "Eczema / Dermatitis";
    highestPercentage = eczemaPercentage;
}

// Compare Psoriasis
if(psoriasisPercentage > highestPercentage){
    highestMatch = "Psoriasis";
    highestPercentage = psoriasisPercentage;
}

// Compare Skin Cancer
if(skinCancerPercentage > highestPercentage){
    highestMatch = "Skin Cancer";
    highestPercentage = skinCancerPercentage;
}

// Compare Fungal Infection
if(fungalPercentage > highestPercentage){
    highestMatch = "Fungal Infections";
    highestPercentage = fungalPercentage;
}

// Compare Cataract
if(cataractPercentage > highestPercentage){
    highestMatch = "Cataract";
    highestPercentage = cataractPercentage;
}

// Compare Glaucoma
if(glaucomaPercentage > highestPercentage){
    highestMatch = "Glaucoma";
    highestPercentage = glaucomaPercentage;
}

// Compare Macular Degeneration
if(macularPercentage > highestPercentage){
    highestMatch = "Macular Degeneration";
    highestPercentage = macularPercentage;
}

// Compare Hearing Loss / Ear Infection
if(hearingPercentage > highestPercentage){
    highestMatch = "Hearing Loss / Ear Infections";
    highestPercentage = hearingPercentage;
}

// Compare Urinary Tract Infection
if(utiPercentage > highestPercentage){
    highestMatch = "Urinary Tract Infection (UTI)";
    highestPercentage = utiPercentage;
}

// Compare Kidney Stones
if(kidneyPercentage > highestPercentage){
    highestMatch = "Kidney Stones";
    highestPercentage = kidneyPercentage;
}

// Compare Chronic Kidney Disease
if(ckdPercentage > highestPercentage){
    highestMatch = "Chronic Kidney Disease (CKD)";
    highestPercentage = ckdPercentage;
}

// Compare Anemia
if(anemiaPercentage > highestPercentage){
    highestMatch = "Anemia";
    highestPercentage = anemiaPercentage;
}

// Compare Leukemia
if(leukemiaPercentage > highestPercentage){
    highestMatch = "Leukemia / Lymphoma";
    highestPercentage = leukemiaPercentage;
}

// Compare Hemophilia
if(hemophiliaPercentage > highestPercentage){
    highestMatch = "Hemophilia";
    highestPercentage = hemophiliaPercentage;
}

// Compare Auto Immune Disorder
if(autoimmunePercentage > highestPercentage){
    highestMatch = "Autoimmune Disorders (Lupus, Multiple Sclerosis)";
    highestPercentage = autoimmunePercentage;
}

// Compare Lung Cancer
if(lungPercentage > highestPercentage){
    highestMatch = "Lung Cancer";
    highestPercentage = lungPercentage;
}

// Compare Breast Cancer
if(breastPercentage > highestPercentage){
    highestMatch = "Breast Cancer";
    highestPercentage = breastPercentage;
}

// Compare Colon Cancer
if(colonPercentage > highestPercentage){
    highestMatch = "Colon Cancer";
    highestPercentage = colonPercentage;
}

// Compare Skin Cancer (again if needed)
if(skin2Percentage > highestPercentage){
    highestMatch = "Skin Cancer";
    highestPercentage = skin2Percentage;
}

return {highestMatch, highestPercentage};

}
