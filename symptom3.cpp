#include "cls.h"
// Healthinfo3: Pneumonia
pair<string,float> detail::healthinfo3() {
    //--------- Acne ----------------------
int acneMatch = 0;
acneMatch += (symptom.find("pimples") != string::npos);
acneMatch += (symptom.find("blackheads") != string::npos);
acneMatch += (symptom.find("whiteheads") != string::npos);
acneMatch += (symptom.find("oily") != string::npos);
acneMatch += (symptom.find("redness") != string::npos);
acneMatch += (symptom.find("inflamed") != string::npos);
acneMatch += (symptom.find("cystic") != string::npos);
acneMatch += (symptom.find("scarring") != string::npos);
acneMatch += (symptom.find("painful") != string::npos);
acneMatch += (symptom.find("pus") != string::npos);
float acnePercentage = ((float)acneMatch / count) * 100;

//--------- Eczema / Dermatitis ----------------------
int eczemaMatch = 0;
eczemaMatch += (symptom.find("itching") != string::npos);
eczemaMatch += (symptom.find("redness") != string::npos);
eczemaMatch += (symptom.find("dryskin") != string::npos);
eczemaMatch += (symptom.find("rash") != string::npos);
eczemaMatch += (symptom.find("swelling") != string::npos);
eczemaMatch += (symptom.find("cracking") != string::npos);
eczemaMatch += (symptom.find("oozing") != string::npos);
eczemaMatch += (symptom.find("thickened") != string::npos);
eczemaMatch += (symptom.find("blisters") != string::npos);
eczemaMatch += (symptom.find("redpatches") != string::npos);
float eczemaPercentage = ((float)eczemaMatch / count) * 100;

//--------- Psoriasis ----------------------
int psoriasisMatch = 0;
psoriasisMatch += (symptom.find("redpatches") != string::npos);
psoriasisMatch += (symptom.find("scaly") != string::npos);
psoriasisMatch += (symptom.find("itching") != string::npos);
psoriasisMatch += (symptom.find("pain") != string::npos);
psoriasisMatch += (symptom.find("thickenedskin") != string::npos);
psoriasisMatch += (symptom.find("silverscales") != string::npos);
psoriasisMatch += (symptom.find("nailpitting") != string::npos);
psoriasisMatch += (symptom.find("cracking") != string::npos);
psoriasisMatch += (symptom.find("dryskin") != string::npos);
psoriasisMatch += (symptom.find("burning") != string::npos);
float psoriasisPercentage = ((float)psoriasisMatch / count) * 100;

//--------- Skin Cancer ----------------------
int skinCancerMatch = 0;
skinCancerMatch += (symptom.find("molechange") != string::npos);
skinCancerMatch += (symptom.find("newgrowth") != string::npos);
skinCancerMatch += (symptom.find("bleeding") != string::npos);
skinCancerMatch += (symptom.find("itching") != string::npos);
skinCancerMatch += (symptom.find("sorethatdoesnotheal") != string::npos);
skinCancerMatch += (symptom.find("redpatch") != string::npos);
skinCancerMatch += (symptom.find("darkpatch") != string::npos);
skinCancerMatch += (symptom.find("raisedbump") != string::npos);
skinCancerMatch += (symptom.find("pain") != string::npos);
skinCancerMatch += (symptom.find("scaling") != string::npos);
float skinCancerPercentage = ((float)skinCancerMatch / count) * 100;

//--------- Fungal Infection ----------------------
int fungalMatch = 0;
fungalMatch += (symptom.find("itching") != string::npos);
fungalMatch += (symptom.find("redness") != string::npos);
fungalMatch += (symptom.find("peeling") != string::npos);
fungalMatch += (symptom.find("blisters") != string::npos);
fungalMatch += (symptom.find("odor") != string::npos);
fungalMatch += (symptom.find("cracking") != string::npos);
fungalMatch += (symptom.find("scaling") != string::npos);
fungalMatch += (symptom.find("rash") != string::npos);
fungalMatch += (symptom.find("discoloration") != string::npos);
fungalMatch += (symptom.find("nailthickening") != string::npos);
float fungalPercentage = ((float)fungalMatch / count) * 100;

//--------- Cataract ----------------------
int cataractMatch = 0;
cataractMatch += (symptom.find("blurredvision") != string::npos);
cataractMatch += (symptom.find("fadedcolors") != string::npos);
cataractMatch += (symptom.find("glare") != string::npos);
cataractMatch += (symptom.find("poornightvision") != string::npos);
cataractMatch += (symptom.find("doublevision") != string::npos);
cataractMatch += (symptom.find("visionloss") != string::npos);
cataractMatch += (symptom.find("halos") != string::npos);
cataractMatch += (symptom.find("difficultyreading") != string::npos);
cataractMatch += (symptom.find("eyepain") != string::npos);
cataractMatch += (symptom.find("sensitivitytolight") != string::npos);
float cataractPercentage = ((float)cataractMatch / count) * 100;

//--------- Glaucoma ----------------------
int glaucomaMatch = 0;
glaucomaMatch += (symptom.find("blurredvision") != string::npos);
glaucomaMatch += (symptom.find("halos") != string::npos);
glaucomaMatch += (symptom.find("headache") != string::npos);
glaucomaMatch += (symptom.find("eyepain") != string::npos);
glaucomaMatch += (symptom.find("nausea") != string::npos);
glaucomaMatch += (symptom.find("vomiting") != string::npos);
glaucomaMatch += (symptom.find("visionloss") != string::npos);
glaucomaMatch += (symptom.find("tunnelvision") != string::npos);
glaucomaMatch += (symptom.find("redness") != string::npos);
glaucomaMatch += (symptom.find("halosaroundlights") != string::npos);
float glaucomaPercentage = ((float)glaucomaMatch / count) * 100;

//--------- Macular Degeneration ----------------------
int macularMatch = 0;
macularMatch += (symptom.find("blurredvision") != string::npos);
macularMatch += (symptom.find("darkspots") != string::npos);
macularMatch += (symptom.find("distortedvision") != string::npos);
macularMatch += (symptom.find("difficultyreading") != string::npos);
macularMatch += (symptom.find("losscentralvision") != string::npos);
macularMatch += (symptom.find("colorsfaded") != string::npos);
macularMatch += (symptom.find("difficultyrecognizingfaces") != string::npos);
macularMatch += (symptom.find("visionloss") != string::npos);
macularMatch += (symptom.find("eyepain") != string::npos);
macularMatch += (symptom.find("blurrynightvision") != string::npos);
float macularPercentage = ((float)macularMatch / count) * 100;

//--------- Hearing Loss / Ear Infection ----------------------
int hearingMatch = 0;
hearingMatch += (symptom.find("earpain") != string::npos);
hearingMatch += (symptom.find("hearingloss") != string::npos);
hearingMatch += (symptom.find("tinnitus") != string::npos);
hearingMatch += (symptom.find("fluid") != string::npos);
hearingMatch += (symptom.find("fever") != string::npos);
hearingMatch += (symptom.find("drainage") != string::npos);
hearingMatch += (symptom.find("dizziness") != string::npos);
hearingMatch += (symptom.find("itching") != string::npos);
hearingMatch += (symptom.find("fullness") != string::npos);
hearingMatch += (symptom.find("balanceissues") != string::npos);
float hearingPercentage = ((float)hearingMatch / count) * 100;

//--------- Urinary Tract Infection ----------------------
int utiMatch = 0;
utiMatch += (symptom.find("burning") != string::npos);
utiMatch += (symptom.find("frequenturination") != string::npos);
utiMatch += (symptom.find("urgency") != string::npos);
utiMatch += (symptom.find("cloudyurine") != string::npos);
utiMatch += (symptom.find("bloodinurine") != string::npos);
utiMatch += (symptom.find("painlowerback") != string::npos);
utiMatch += (symptom.find("pelvicpain") != string::npos);
utiMatch += (symptom.find("fever") != string::npos);
utiMatch += (symptom.find("chills") != string::npos);
utiMatch += (symptom.find("nausea") != string::npos);
float utiPercentage = ((float)utiMatch / count) * 100;

//--------- Kidney Stones ----------------------
int kidneyMatch = 0;
kidneyMatch += (symptom.find("severebackpain") != string::npos);
kidneyMatch += (symptom.find("painfulurination") != string::npos);
kidneyMatch += (symptom.find("bloodinurine") != string::npos);
kidneyMatch += (symptom.find("nausea") != string::npos);
kidneyMatch += (symptom.find("vomiting") != string::npos);
kidneyMatch += (symptom.find("frequenturination") != string::npos);
kidneyMatch += (symptom.find("urgency") != string::npos);
kidneyMatch += (symptom.find("abdominalpain") != string::npos);
kidneyMatch += (symptom.find("fever") != string::npos);
kidneyMatch += (symptom.find("chills") != string::npos);
float kidneyPercentage = ((float)kidneyMatch / count) * 100;

//--------- Chronic Kidney Disease ----------------------
int ckdMatch = 0;
ckdMatch += (symptom.find("fatigue") != string::npos);
ckdMatch += (symptom.find("swellinglegs") != string::npos);
ckdMatch += (symptom.find("urinechanges") != string::npos);
ckdMatch += (symptom.find("lossappetite") != string::npos);
ckdMatch += (symptom.find("nausea") != string::npos);
ckdMatch += (symptom.find("vomiting") != string::npos);
ckdMatch += (symptom.find("shortnessofbreath") != string::npos);
ckdMatch += (symptom.find("highbloodpressure") != string::npos);
ckdMatch += (symptom.find("musclecramps") != string::npos);
ckdMatch += (symptom.find("itching") != string::npos);
float ckdPercentage = ((float)ckdMatch / count) * 100;

//--------- Anemia ----------------------
int anemiaMatch = 0;
anemiaMatch += (symptom.find("fatigue") != string::npos);
anemiaMatch += (symptom.find("weakness") != string::npos);
anemiaMatch += (symptom.find("pale") != string::npos);
anemiaMatch += (symptom.find("shortnessofbreath") != string::npos);
anemiaMatch += (symptom.find("dizziness") != string::npos);
anemiaMatch += (symptom.find("headache") != string::npos);
anemiaMatch += (symptom.find("coldhandsfeet") != string::npos);
anemiaMatch += (symptom.find("chestpain") != string::npos);
anemiaMatch += (symptom.find("irritability") != string::npos);
anemiaMatch += (symptom.find("rapidheartbeat") != string::npos);
float anemiaPercentage = ((float)anemiaMatch / count) * 100;

//--------- Leukemia ----------------------
int leukemiaMatch = 0;
leukemiaMatch += (symptom.find("fatigue") != string::npos);
leukemiaMatch += (symptom.find("frequentinfections") != string::npos);
leukemiaMatch += (symptom.find("fever") != string::npos);
leukemiaMatch += (symptom.find("easybruising") != string::npos);
leukemiaMatch += (symptom.find("bleedinggums") != string::npos);
leukemiaMatch += (symptom.find("bonepain") != string::npos);
leukemiaMatch += (symptom.find("weightloss") != string::npos);
leukemiaMatch += (symptom.find("swollenlymphnodes") != string::npos);
leukemiaMatch += (symptom.find("nightSweats") != string::npos);
leukemiaMatch += (symptom.find("paleness") != string::npos);
float leukemiaPercentage = ((float)leukemiaMatch / count) * 100;

//--------- Hemophilia ----------------------
int hemophiliaMatch = 0;
hemophiliaMatch += (symptom.find("excessivebleeding") != string::npos);
hemophiliaMatch += (symptom.find("easybruising") != string::npos);
hemophiliaMatch += (symptom.find("jointpain") != string::npos);
hemophiliaMatch += (symptom.find("swelling") != string::npos);
hemophiliaMatch += (symptom.find("nosebleeds") != string::npos);
hemophiliaMatch += (symptom.find("bloodinurine") != string::npos);
hemophiliaMatch += (symptom.find("prolongedbleeding") != string::npos);
hemophiliaMatch += (symptom.find("hematomas") != string::npos);
hemophiliaMatch += (symptom.find("fatigue") != string::npos);
hemophiliaMatch += (symptom.find("weakness") != string::npos);
float hemophiliaPercentage = ((float)hemophiliaMatch / count) * 100;

//--------- Auto Immune Disorder ----------------------
int autoimmuneMatch = 0;
autoimmuneMatch += (symptom.find("fatigue") != string::npos);
autoimmuneMatch += (symptom.find("jointpain") != string::npos);
autoimmuneMatch += (symptom.find("swelling") != string::npos);
autoimmuneMatch += (symptom.find("skinrash") != string::npos);
autoimmuneMatch += (symptom.find("fever") != string::npos);
autoimmuneMatch += (symptom.find("musclepain") != string::npos);
autoimmuneMatch += (symptom.find("difficultyconcentrating") != string::npos);
autoimmuneMatch += (symptom.find("hairloss") != string::npos);
autoimmuneMatch += (symptom.find("numbness") != string::npos);
autoimmuneMatch += (symptom.find("coldhandsfeet") != string::npos);
float autoimmunePercentage = ((float)autoimmuneMatch / count) * 100;

//--------- Lung Cancer ----------------------
int lungMatch = 0;
lungMatch += (symptom.find("persistentcough") != string::npos);
lungMatch += (symptom.find("coughingblood") != string::npos);
lungMatch += (symptom.find("chestpain") != string::npos);
lungMatch += (symptom.find("shortnessofbreath") != string::npos);
lungMatch += (symptom.find("fatigue") != string::npos);
lungMatch += (symptom.find("weightloss") != string::npos);
lungMatch += (symptom.find("lossappetite") != string::npos);
lungMatch += (symptom.find("hoarseness") != string::npos);
lungMatch += (symptom.find("recurrentinfections") != string::npos);
lungMatch += (symptom.find("wheezing") != string::npos);
float lungPercentage = ((float)lungMatch / count) * 100;

//--------- Breast Cancer ----------------------
int breastMatch = 0;
breastMatch += (symptom.find("lump") != string::npos);
breastMatch += (symptom.find("pain") != string::npos);
breastMatch += (symptom.find("nippledischarge") != string::npos);
breastMatch += (symptom.find("swelling") != string::npos);
breastMatch += (symptom.find("redness") != string::npos);
breastMatch += (symptom.find("skindimples") != string::npos);
breastMatch += (symptom.find("nippleretraction") != string::npos);
breastMatch += (symptom.find("enlargedlymphnodes") != string::npos);
breastMatch += (symptom.find("changesinshape") != string::npos);
breastMatch += (symptom.find("rash") != string::npos);
float breastPercentage = ((float)breastMatch / count) * 100;

//--------- Colon Cancer ----------------------
int colonMatch = 0;
colonMatch += (symptom.find("bloodinstools") != string::npos);
colonMatch += (symptom.find("abdominalpain") != string::npos);
colonMatch += (symptom.find("unexplainedweightloss") != string::npos);
colonMatch += (symptom.find("fatigue") != string::npos);
colonMatch += (symptom.find("constipation") != string::npos);
colonMatch += (symptom.find("diarrhea") != string::npos);
colonMatch += (symptom.find("nausea") != string::npos);
colonMatch += (symptom.find("vomiting") != string::npos);
colonMatch += (symptom.find("abdominalbloating") != string::npos);
colonMatch += (symptom.find("weakness") != string::npos);
float colonPercentage = ((float)colonMatch / count) * 100;

//--------- Skin Cancer (again, if needed) ----------------------
int skin2Match = 0;
skin2Match += (symptom.find("molechange") != string::npos);
skin2Match += (symptom.find("newgrowth") != string::npos);
skin2Match += (symptom.find("bleeding") != string::npos);
skin2Match += (symptom.find("itching") != string::npos);
skin2Match += (symptom.find("sorethatdoesnotheal") != string::npos);
skin2Match += (symptom.find("redpatch") != string::npos);
skin2Match += (symptom.find("darkpatch") != string::npos);
skin2Match += (symptom.find("raisedbump") != string::npos);
skin2Match += (symptom.find("pain") != string::npos);
skin2Match += (symptom.find("scaling") != string::npos);
float skin2Percentage = ((float)skin2Match / count) * 100;

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
