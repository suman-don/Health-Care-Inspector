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
if(location == "baluwatar"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         3. Nepal Police Hospital (Maharajgunj)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "naxal"){
    cout<<"                                         1. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         2. Bir Hospital (New Road)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "maharajgunj"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Nepal Eye Hospital (Maharajgunj)\n";
    cout<<"                                         3. Nepal Police Hospital (Maharajgunj)\n";
    cout<<"                                         4. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         5. Green City Hospital (Bansbari)\n";
}
else if(location == "lazimpat"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "thapathali"){
    cout<<"                                         1. Norvic International Hospital (Thapathali)\n";
    cout<<"                                         2. Sukraraj Tropical & Infectious Disease Hospital (Teku)\n";
    cout<<"                                         3. Bir Hospital (New Road)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "teku"){
    cout<<"                                         1. Sukraraj Tropical & Infectious Disease Hospital (Teku)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Norvic International Hospital (Thapathali)\n";
}
else if(location == "gairidhara"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "kamaladi"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "new baneshwor"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "old baneshwor"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "maitidevi"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Norvic International Hospital (Thapathali)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Grande International Hospital (Dhapasi)\n";
}
else if(location == "thamel"){
    cout<<"                                         1. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         2. Bir Hospital (New Road)\n";
    cout<<"                                         3. Norvic International Hospital (Thapathali)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Grande International Hospital (Dhapasi)\n";
}
else if(location == "swayambhu"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "basantapur"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Norvic International Hospital (Thapathali)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Grande International Hospital (Dhapasi)\n";
}
else if(location == "chhetrapati"){
    cout<<"                                         1. Bir Hospital (New Road)\n";
    cout<<"                                         2. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         3. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         4. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         5. Norvic International Hospital (Thapathali)\n";
}
else if(location == "gaushala"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chabahil"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Capital Hospital (Chabahil)\n";
    cout<<"                                         3. Kathmandu Medical College & Teaching Hospital (Sinamangal)\n";
    cout<<"                                         4. Boudha Stupa Polyclinic (Boudha)\n";
    cout<<"                                         5. Nepal Medical College (Jorpati)\n";
}
else if(location == "boudha"){
    cout<<"                                         1. Stupa Community Hospital (Boudha)\n";
    cout<<"                                         2. Khangri International Hospital Pvt. Ltd (Boudha)\n";
    cout<<"                                         3. Boudha Stupa Polyclinic (Boudha)\n";
    cout<<"                                         4. Shree Birendra Hospital (Chhauni)\n";
    cout<<"                                         5. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
}
else if(location == "kapan"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Bir Hospital (New Road)\n";
    cout<<"                                         5. Kathmandu Model Hospital (Bagbazar)\n";
}
else if(location == "jorpati"){
    cout<<"                                         1. Khangri International Hospital Pvt. Ltd (Jorpati)\n";
    cout<<"                                         2. Nepal Orthopaedic Hospital (Jorpati)\n";
    cout<<"                                         3. Boudha Stupa Polyclinic (Boudha)\n";
    cout<<"                                         4. Sukraraj Tropical & Infectious Disease Hospital (Teku)\n";
    cout<<"                                         5. Civil Service Hospital (Minbhawan)\n";
}
else if(location == "gongabu"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "balambu"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "thankot"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kalanki"){
    cout<<"                                         1. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         2. KIST Medical College & Hospital (Imadol)\n";
    cout<<"                                         3. Norvic International Hospital (Thapathali)\n";
    cout<<"                                         4. Bir Hospital (New Road)\n";
    cout<<"                                         5. Kathmandu Model Hospital (Bagbazar)\n";
}
else if(location == "matatirtha"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Bir Hospital (New Road)\n";
    cout<<"                                         5. Kathmandu Model Hospital (Bagbazar)\n";
}
else if(location == "samakhusi"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "ranibari"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Bir Hospital (New Road)\n";
    cout<<"                                         5. Kathmandu Model Hospital (Bagbazar)\n";
}
else if(location == "koteshwor"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "lagankhel"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Bir Hospital (New Road)\n";
    cout<<"                                         5. Kathmandu Model Hospital (Bagbazar)\n";
}
else if(location == "sankhamul"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "gokarna"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "budhanilkantha"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tokha"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "gokarneshwor outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "kirtipur"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chhampi"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "jagati"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "taukhel"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "panga"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "simaltar"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "mahadevsthan"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "dukuchhap"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "balkumari"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "dhokeshwori"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "nayapati"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "ichangu"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kirtipur campus area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         3. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kapan border area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "budhanilkantha"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "sundarijal"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "bhaktapur border area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tokha border area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "nayapati"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "mahankal"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "samakhusi border area"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "gokarneshwor outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "tokha main town"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tokha chandeshwori"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tokha saraswati"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tokha mahankal"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "dhapasi"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "jhor"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "nayapati"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "samakhusi border area"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
else if(location == "gokarneshwor outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "manohara"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kageshwori"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "gothatar"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kaushaltar"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "bode"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kharelthok"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "nayabasti"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "bhadrabas"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chintang"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "purano bhatbhateni"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "chandragiri"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chandragiri hills area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chandragiri gaun"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "shankheshwor"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "bhaisepati"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "thankot outskirts"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "matatirtha outskirts"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "balambu outskirts"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kapan outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "thankot"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "gurjudhara"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "pharping"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "kulekhani"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chandragiri hills area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "balkumari outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "matatirtha outskirts"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "lubhu border area"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
if(location == "dhapasi"){
    cout<<"                                         1. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         2. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tarkeshwor main town"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "nayabasti"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "gothatar"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chunikhel"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "tarkeshwor gaun"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "samakhusi border area"){
    cout<<"                                         1. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         4. Kathmandu Model Hospital (Bagbazar)\n";
    cout<<"                                         5. Vayodha Hospital (Balkhu)\n";
}
if(location == "shankharapur main town"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "pukhulachhi"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "sundarijal outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "bhadrabas outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "gokarna outskirts"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "chilaunebas"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "duwakot"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}
else if(location == "banepa border areas"){
    cout<<"                                         1. Om Hospital & Research Center (Chabahil)\n";
    cout<<"                                         2. Grande International Hospital (Dhapasi)\n";
    cout<<"                                         3. Vayodha Hospital (Balkhu)\n";
    cout<<"                                         4. Tribhuvan University Teaching Hospital (Maharajgunj)\n";
    cout<<"                                         5. Bir Hospital (New Road)\n";
}






		  
		  
	  }
	  
	  
	if(district == "bhaktapur"){
		if(location == "taumadhi"){
    cout<<"                                         1. Bhaktapur Cancer Hospital (Bhaktapur)\n";
    cout<<"                                         2. Madhyapur Hospital (Madhyapur Thimi)\n";
    cout<<"                                         3. Iwamura Memorial Hospital (Sallaghari, Bhaktapur)\n";
    cout<<"                                         4. Siddhi Memorial Hospital (Bhaktapur)\n";
    cout<<"                                         5. Kathmandu Cancer Center (Tathali, Bhaktapur)\n";
    } else if(location == "dattatreya"){
    cout<<"                                         1. Siddhi Memorial Hospital (Bhimsenthan, Dattatreya)\n";
    cout<<"                                         2. Bhaktapur Hospital (Dudhpati, Bhaktapur)\n";
}
else if(location == "bhaktapur durbar square"){
    cout<<"                                         1. Bhaktapur Hospital (Durbar Square)\n";
    cout<<"                                         2. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
}
else if(location == "kamalbinayak"){
    cout<<"                                         1. Bhaktapur International Hospital (Kamalbinayak area)\n";
}
else if(location == "suryamadhi"){
    cout<<"                                         1. Iwamura Memorial Hospital (Sallaghari)\n";
    cout<<"                                         2. Suryabinayak Municipal Hospital (Jagati)\n";
}
else if(location == "inacho"){
    cout<<"                                         1. Bhaktapur Hospital (Inacho area)\n";
}
else if(location == "golmadhi"){
    cout<<"                                         1. Bhaktapur International Hospital (Golmadhi)\n";
}
else if(location == "chyamasingh"){
    cout<<"                                         1. Khwopa Hospital (Chyamasingh)\n";
    cout<<"                                         2. Bhaktapur International Hospital (nearby)\n";
}
else if(location == "sukuldhoka"){
    cout<<"                                         1. Bhaktapur Hospital (Sukuldhoka)\n";
}
else if(location == "bhelukhel"){
    cout<<"                                         1. Bhaktapur International Hospital (Bhelukhel)\n";
}
else if(location == "kamal pokhari"){
    cout<<"                                         1. Bhaktapur International Hospital (Kamal Pokhari)\n";
}
else if(location == "itachhen"){
    cout<<"                                         1. Bhaktapur Hospital (Itachhen)\n";
}
else if(location == "bansha gopal"){
    cout<<"                                         1. Bhaktapur International Hospital (Bansha Gopal)\n";
}
else if(location == "nasamana"){
    cout<<"                                         1. Bhaktapur Hospital (Nasamana)\n";
}
else if(location == "sallaghari"){
    cout<<"                                         1. Iwamura Memorial Hospital (Sallaghari)\n";
    cout<<"                                         2. Bhaktapur Cancer Hospital (nearby)\n";
}
else if(location == "pottery square"){
    cout<<"                                         1. Bhaktapur Hospital (Pottery Square)\n";
}
else if(location == "barahi tole"){
    cout<<"                                         1. Siddhi Memorial Hospital (Barahi Tole)\n";
}
else if(location == "khauma"){
    cout<<"                                         1. Bhaktapur International Hospital (Khauma)\n";
}
else if(location == "wane layeku"){
    cout<<"                                         1. Bhaktapur Hospital (Wane Layeku)\n";
} else
if(location == "thimi") {
    cout << "                                         1. Madhyapur Hospital (Shankhadhar Chowk, Thimi)\n";
    cout << "                                         2. Nepal Korea Friendship Municipality Hospital (Madhyapur Thimi-5)\n";
    cout << "                                         3. Urban Health Center (Thimi-5)\n";
} else if(location == "bode") {
    cout << "                                         1. Urban Health Center (Bode, Thimi-8)\n";
    cout << "                                         2. New Clinic (Bode, Thimi-8)\n";
} else if(location == "chapacho") {
    cout << "                                         1. Chapacho Community Health Clinic (Chapacho, Bhaktapur)\n";
} else if(location == "tigani") {
    cout << "                                         1. Iwamura Memorial Hospital (Sallaghari, Bhaktapur)\n";
    cout << "                                         2. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "balkumari") {
    cout << "                                         1. Bhaktapur International Hospital (Kaushaltar, Bhaktapur)\n";
    cout << "                                         2. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "lokanthali") {
    cout << "                                         1. Summit Hospital (Lokanthali, Bhaktapur)\n";
    cout << "                                         2. BP Eye Foundation (Lokanthali, Bhaktapur)\n";
} else if(location == "sanothimi") {
    cout << "                                         1. Nepal Korea Friendship Municipality Hospital (Madhyapur Thimi-5)\n";
    cout << "                                         2. Urban Health Center (Sanothimi, Bhaktapur)\n";
} else if(location == "kaushaltar") {
    cout << "                                         1. Bhaktapur International Hospital (Kaushaltar, Bhaktapur)\n";
    cout << "                                         2. Nepal Korea Friendship Municipality Hospital (Madhyapur Thimi-5)\n";
} else if(location == "gatthaghar") {
    cout << "                                         1. Nagarik Community Teaching Hospital (Gatthaghar, Bhaktapur)\n";
} else if(location == "balambu") {
    cout << "                                         1. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "kautunje") {
    cout << "                                         1. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "nilbarahi") {
    cout << "                                         1. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "nagadesh") {
    cout << "                                         1. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "nasanani") {
    cout << "                                         1. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "sirutar") {
    cout << "                                         1. Iwamura Memorial Hospital (Sallaghari, Bhaktapur)\n";
    cout << "                                         2. Bhaktapur Cancer Hospital (Dudhpati, Bhaktapur)\n";
} else if(location == "suryabinayak") {
    cout << "                                         1. Suryabinayak Municipal Hospital (Jagati, Suryabinayak-8, Bhaktapur)\n";
    cout << "                                         2. Suryabinayak Mission Hospital Pvt. Ltd. (Araniko Highway, Bhaktapur)\n";
} else if(location == "katunje") {
    cout << "                                         1. Bhaktapur Health Concern Pvt. Ltd. (Katunje, Sallaghari, Bhaktapur)\n";
} else if(location == "balkot") {
    cout << "                                         1. Balkot Healthcare Center Pvt. Ltd. (Balkot, Bhaktapur)\n";
    cout << "                                         2. Physiotherapy Clinic (Balkot, Bhaktapur)\n";
} else if(location == "sipadol") {
    cout << "                                         1. Sipadol Health Post (Sipadol, Bhaktapur)\n";
    cout << "                                         2. Devi Ma Kunja Hospital (Sipadol, Bhaktapur)\n";
} else if(location == "gundu") {
    cout << "                                         1. Gundu Health Post (Gundu, Bhaktapur)\n";
    cout << "                                         2. Iwamura Memorial Hospital Outreach Program (Gundu area)\n";
} else if(location == "sirutar") {
    cout << "                                         1. Bhaktapur Health Concern Pvt. Ltd. (Sirutar area)\n";
} else if(location == "bhatkepati") {
    cout << "                                         1. Baghbhairab Health Care (Bhatkepati, Bhaktapur)\n";
} else if(location == "adarsha tole") {
    cout << "                                         1. Bhaktapur Hospital (Adarsha Tole, Bhaktapur)\n";
} else if(location == "jagati") {
    cout << "                                         1. Suryabinayak Municipal Hospital (Jagati, Suryabinayak-8, Bhaktapur)\n";
} else if(location == "sallaghari") {
    cout << "                                         1. Bhaktapur Health Concern Pvt. Ltd. (Sallaghari, Bhaktapur)\n";
} else if(location == "nalinchowk") {
    cout << "                                         1. Bhaktapur Hospital (Nalinchowk, Bhaktapur)\n";
} else if(location == "byasi") {
    cout << "                                         1. Bhaktapur Hospital (Byasi, Bhaktapur)\n";
} else if(location == "katunje danda") {
    cout << "                                         1. Bhaktapur Health Concern Pvt. Ltd. (Katunje Danda, Bhaktapur)\n";
}
 else if(location == "changunarayan") {
    cout << "                                         1. Changunarayan Hospital (Changunarayan-4, Bhaktapur)\n";
} else if(location == "duwakot") {
    cout << "                                         1. Kathmandu Medical College (KMC), Duwakot, Bhaktapur\n";
} else if(location == "tathali") {
    cout << "                                         1. Kathmandu Cancer Center (Tathali, Bhaktapur)\n";
} else if(location == "jorpati") {
    cout << "                                         1. Nepal Orthopaedic Hospital (Jorpati, Kathmandu)\n";
} else if(location == "chhaling") {
    cout << "                                         1. Chhaling Health Post (Chhaling, Bhaktapur)\n";
} else if(location == "danchhi") {
    cout << "                                         1. Danchhi Sub Health Post (Danchhi, Kageshwori Manohara, Kathmandu)\n";
} else if(location == "chittapol") {
    cout << "                                         1. Chittapol Hospital (Suryabinayak, Bhaktapur)\n";
} else if(location == "bageshwori") {
    cout << "                                         1. District Health Office Bhaktapur (Bageshwori, Bhaktapur)\n";
} else if(location == "telkot") {
    cout << "                                         1. Telkot Health Post (Telkot, Bhaktapur)\n";
} else if(location == "sudal") {
    cout << "                                         1. Sudal Health Post (Sudal, Bhaktapur)\n";
} else if(location == "thaligaun") {
    cout << "                                         1. Thaligaun Health Post (Thaligaun, Bhaktapur)\n";
} else if(location == "bhimsen thok") {
    cout << "                                         1. Bhimsen Thok Health Post (Bhimsen Thok, Bhaktapur)\n";
}



	}  
	  
	if(district == "lalitpur"){
		if(location == "dhobighat") {
    cout << "                                         1. Megha Hospital (Dhobighat, Lalitpur)\n";
} else if(location == "bakhundol") {
    cout << "                                         1. Sarang Healthcare (Bakhundol, Lalitpur)\n";
    cout << "                                         2. ADRA Nepal Clinic (Bakhundol, Lalitpur)\n";
} else if(location == "patan durbar square") {
    cout << "                                         1. Patan Hospital (near Patan Durbar Square, Lalitpur)\n";
} else if(location == "lagankhel") {
    cout << "                                         1. Mental Hospital Lagankhel (Lalitpur)\n";
} else if(location == "pulchowk") {
    cout << "                                         1. Sumeru City Hospital (Pulchowk, Lalitpur)\n";
    cout << "                                         2. Nidan Hospital (Pulchowk, Lalitpur)\n";
} else if(location == "sanepa") {
    cout << "                                         1. Star Hospital (Sanepa-2, Lalitpur)\n";
} else if(location == "jawalakhel") {
    cout << "                                         1. Helios Hospital (Jawalakhel, Lalitpur)\n";
    cout << "                                         2. National Cancer Hospital (Jawalakhel, Lalitpur)\n";
} else if(location == "chhetrapati") {
    cout << "                                         1. Chhetrapati Free Clinic (Kathmandu)\n";
} else if(location == "harisiddhi") {
    cout << "                                         1. Harisiddhi Health Post (Harisiddhi, Lalitpur)\n";
} else if(location == "kirtipur") {
    cout << "                                         1. Kirtipur Hospital (Kirtipur, Kathmandu)\n";
} else if(location == "imadol") {
    cout << "                                         1. Imadol Health Post (Imadol, Lalitpur)\n";
} else if(location == "jharuwarasi") {
    cout << "                                         1. Jharuwarasi Health Post (Lalitpur)\n";
} else if(location == "khokana") {
    cout << "                                         1. Khokana Community Health Center (Khokana, Lalitpur)\n";
} else if(location == "lele") {
    cout << "                                         1. Lele Health Post (Lalitpur)\n";
} else if(location == "lubhu") {
    cout << "                                         1. Lubhu Health Post (Lalitpur)\n";
} else if(location == "godamchaur") {
    cout << "                                         1. Godamchaur Community Clinic (Lalitpur)\n";
} else if(location == "malta") {
    cout << "                                         1. Malta Health Post (Lalitpur)\n";
} else if(location == "bhattedanda") {
    cout << "                                         1. Bhattedanda Health Post (Lalitpur)\n";
} else
if(location == "bungamati") {
    cout << "                                         1. Bungamati Health Post (Bungamati, Lalitpur)\n";
    cout << "                                         2. Khokana Community Health Center (nearby, Lalitpur)\n";
} else if(location == "khokana") {
    cout << "                                         1. Khokana Community Health Center (Khokana, Lalitpur)\n";
} else if(location == "lele") {
    cout << "                                         1. Lele Health Post (Lele, Lalitpur)\n";
} else if(location == "lubhu") {
    cout << "                                         1. Lubhu Health Post (Lubhu, Lalitpur)\n";
} else
 if(location == "godawari") {
    cout << "                                         1. Godawari Health Post (Godawari, Lalitpur)\n";
} else if(location == "chapagaun") {
    cout << "                                         1. Chapagaun Health Post (Chapagaun, Lalitpur)\n";
} else if(location == "sankhu") {
    cout << "                                         1. Sankhu Health Post (Sankhu, Kavrepalanchok)\n";
} else if(location == "dhulikhel") {
    cout << "                                         1. Dhulikhel Hospital (Dhulikhel, Kavrepalanchok)\n";
} else if(location == "bungamati") {
    cout << "                                         1. Bungamati Health Post (Bungamati, Lalitpur)\n";
    cout << "                                         2. Khokana Community Health Center (nearby, Lalitpur)\n";
} else if(location == "khokana") {
    cout << "                                         1. Khokana Community Health Center (Khokana, Lalitpur)\n";
} else if(location == "lele") {
    cout << "                                         1. Lele Health Post (Lele, Lalitpur)\n";
} else if(location == "lubhu") {
    cout << "                                         1. Lubhu Health Post (Lubhu, Lalitpur)\n";
} else if(location == "ashrang") {
    cout << "                                         1. Ashrang Health Post (Ashrang, Lalitpur)\n";
} else if(location == "ghusel") {
    cout << "                                         1. Ghusel Health Post (Ghusel, Lalitpur)\n";
} else if(location == "malta") {
    cout << "                                         1. Malta Health Post (Malta, Lalitpur)\n";
} else if(location == "bhattedanda") {
    cout << "                                         1. Bhattedanda Health Post (Bhattedanda, Lalitpur)\n";
} else if(location == "pyutar") {
    cout << "                                         1. Pyutar Health Post (Pyutar, Lalitpur)\n";
} else if(location == "ikudol") {
    cout << "                                         1. Ikudol Health Post (Ikudol, Lalitpur)\n";
} else if(location == "gimdi") {
    cout << "                                         1. Gimdi Health Post (Gimdi, Lalitpur)\n";
} else if(location == "mahankal") {
    cout << "                                         1. Mahankal Health Post (Mahankal, Lalitpur)\n";
}


	}  
	  

	if(district == "chitwan"){
		 if (location == "Narayangarh" || location == "Hakim Chowk" || location == "Lions Chowk" ||
        location == "Pulchowk" || location == "Chaubiskothi" || location == "Bharatpur Height" ||
        location == "Rampur" || location == "Krishnapur" || location == "Bypass Road" ||
        location == "Baseni" || location == "Milan Chowk" || location == "Belchowk" ||
        location == "Devghat" || location == "Simalchaur" || location == "Fulbari" ||
        location == "Mangalpur" || location == "Jagatpur" || location == "Meghauli" ||
        location == "Patihani" || location == "Shukranagar") {
    
cout << "                                         1. Bharatpur Hospital (Government)\n";
cout << "                                         2. Chitwan Medical College Teaching Hospital\n";
cout << "                                         3. Bharatpur Samudayik Hospital Ltd.\n";
cout << "                                         4. Bharatpur Eye Hospital\n";
cout << "                                         5. B. P. Koirala Memorial Cancer Hospital\n";
cout << "                                         6. Chitwan Hospital Pvt. Ltd. (Chaubiskothi)\n";
cout << "                                         7. Narayani Community Hospital (Chaubiskothi)\n";
cout << "                                         8. Asha Hospital\n";
		} else if (location == "Sauraha" || location == "Tandi Bazaar" || location == "Bachhauli" ||
         location == "Panchakanya" || location == "Piple" || location == "Bhandara" ||
         location == "Gitanagar")
{
    cout << "                                         1. Wildlife Hospital (Sauraha)\n";
    cout << "                                         2. Bakulahar Ratnanagar Hospital (Tandi Bazaar)\n";
    cout << "                                         3. Bachhyauli Health Post (Bachhauli)\n";
    cout << "                                         4. Panchakanya Health Post (Panchakanya)\n";
    cout << "                                         5. Gunjaman Hospital Chitwan (Piple)\n";
    cout << "                                         6. Rapti Hospital (Bhandara)\n";
    cout << "                                         7. PES Multispeciality Hospital (Bhandara)\n";
    cout << "                                         8. Swacon Clinic (Gitanagar)\n";
 } else if (location == "Khairahani Bazaar" || location == "Chainpur" || location == "Parsa" ||
    location == "Kathar" || location == "Jutpani" || location == "Piple (border area)")
{
    cout << "                                         1. Khairahani Health Post (Khairahani Bazaar)\n";
    cout << "                                         2. Chainpur Health Post (Chainpur)\n";
    cout << "                                         3. Parsa Community Hospital (Parsa)\n";
    cout << "                                         4. Kathar Health Post (Kathar)\n";
    cout << "                                         5. Jutpani Health Post (Jutpani)\n";
    cout << "                                         6. Gunjaman Hospital Chitwan (Piple border area)\n";
} else if (location == "Baghauda" || location == "Kalyanpur" || location == "Ayodhyapuri" ||
    location == "Basantapur" || location == "Barakuli" || location == "Silinge")
{
    cout << "                                         1. Baghauda Health Post (Baghauda)\n";
    cout << "                                         2. Kalyanpur Health Post (Kalyanpur)\n";
    cout << "                                         3. Ayodhyapuri Health Post (Ayodhyapuri, Ram Janmabhoomi heritage site)\n";
    cout << "                                         4. Basantapur Health Post (Basantapur)\n";
    cout << "                                         5. Barakuli Health Post (Barakuli)\n";
    cout << "                                         6. Silinge Health Post (Silinge)\n";
} else if (location == "Rapti Bazaar" || location == "Padampur" || location == "Gardi" ||
    location == "Kalyanpur (Rapti side)" || location == "Beldandi")
{
    cout << "                                         1. Rapti Bazaar Health Post (Rapti Bazaar)\n";
    cout << "                                         2. Padampur Health Post (Padampur)\n";
    cout << "                                         3. Gardi Health Post (Gardi)\n";
    cout << "                                         4. Kalyanpur Health Post (Kalyanpur, Rapti side)\n";
    cout << "                                         5. Beldandi Health Post (Beldandi)\n";
} else if (location == "Shaktikhor" || location == "Siddhi" || location == "Jutpani (part)" ||
    location == "Shanti Nagar" || location == "Dovan")
{
    cout << "                                         1. Shaktikhor Health Post (Shaktikhor)\n";
    cout << "                                         2. Siddhi Health Post (Siddhi)\n";
    cout << "                                         3. Jutpani Health Post (Jutpani, part)\n";
    cout << "                                         4. Shanti Nagar Health Post (Shanti Nagar)\n";
    cout << "                                         5. Dovan Health Post (Dovan)\n";
} else if (location == "Darechowk" || location == "Ghumaune" || location == "Chandibhanjyang" ||
    location == "Topekhola" || location == "Kaule")
{
    cout << "                                         1. Darechowk Health Post (Darechowk)\n";
    cout << "                                         2. Ghumaune Health Post (Ghumaune)\n";
    cout << "                                         3. Chandibhanjyang Health Post (Chandibhanjyang)\n";
    cout << "                                         4. Topekhola Health Post (Topekhola)\n";
    cout << "                                         5. Kaule Health Post (Kaule)\n";
}






	}
	
	
	if(district == "dhading"){
		if (location == "Dhading Besi" || location == "Gajuri" || location == "Nilkantha" ||
    location == "Sunaula Bazar" || location == "Khaniyapani")
{
    cout << "                                         1. Dhading Besi Health Post (Dhading Besi)\n";
    cout << "                                         2. Gajuri Health Post (Gajuri)\n";
    cout << "                                         3. Nilkantha Hospital (Nilkantha, Nilkantha Municipality)\n";
    cout << "                                         4. Sunaula Bazar Health Post (Sunaula Bazar)\n";
    cout << "                                         5. Khaniyapani Health Post (Khaniyapani)\n";
} else if (location == "Benighat" || location == "Rorang" || location == "Charaundi" ||
    location == "Thulo Kharka" || location == "Malunga")
{
    cout << "                                         1. Benighat Health Post (Benighat)\n";
    cout << "                                         2. Rorang Health Post (Rorang)\n";
    cout << "                                         3. Charaundi Health Post (Charaundi)\n";
    cout << "                                         4. Thulo Kharka Health Post (Thulo Kharka)\n";
    cout << "                                         5. Malunga Health Post (Malunga)\n";
} else if (location == "Gajuri Bazaar" || location == "Lapang" || location == "Sisneri" ||
    location == "Durlung" || location == "Salang")
{
    cout << "                                         1. Gajuri Bazaar Health Post (Gajuri Bazaar)\n";
    cout << "                                         2. Lapang Health Post (Lapang)\n";
    cout << "                                         3. Sisneri Health Post (Sisneri)\n";
    cout << "                                         4. Durlung Health Post (Durlung)\n";
    cout << "                                         5. Salang Health Post (Salang)\n";
} else if (location == "Galchhi Bazaar" || location == "Sisneri" || location == "Machha Khola" ||
    location == "Deurali" || location == "Dhunche (small parts)")
{
    cout << "                                         1. Galchhi Bazaar Health Post (Galchhi Bazaar)\n";
    cout << "                                         2. Sisneri Health Post (Sisneri)\n";
    cout << "                                         3. Machha Khola Health Post (Machha Khola)\n";
    cout << "                                         4. Deurali Health Post (Deurali)\n";
    cout << "                                         5. Dhunche Health Post (Dhunche, small parts)\n";
} else if (location == "Netrawati" || location == "Dhusha" || location == "Malekhu" ||
    location == "Khaniyapani")
{
    cout << "                                         1. Netrawati Health Post (Netrawati)\n";
    cout << "                                         2. Dhusha Health Post (Dhusha)\n";
    cout << "                                         3. Malekhu Health Post (Malekhu)\n";
    cout << "                                         4. Khaniyapani Health Post (Khaniyapani)\n";
} else if (location == "Thakre Bazaar" || location == "Sirtung" || location == "Nalang" ||
    location == "Khalte")
{
    cout << "                                         1. Thakre Bazaar Health Post (Thakre Bazaar)\n";
    cout << "                                         2. Sirtung Health Post (Sirtung)\n";
    cout << "                                         3. Nalang Health Post (Nalang)\n";
    cout << "                                         4. Khalte Health Post (Khalte)\n";
} else if (location == "Nilkantha" || location == "Chhatre" || location == "Pida" ||
    location == "Darsing" || location == "Sunaula")
{
    cout << "                                         1. Nilkantha Hospital (Nilkantha, district HQ)\n";
    cout << "                                         2. Chhatre Health Post (Chhatre)\n";
    cout << "                                         3. Pida Health Post (Pida)\n";
    cout << "                                         4. Darsing Health Post (Darsing)\n";
    cout << "                                         5. Sunaula Health Post (Sunaula)\n";
} else if (location == "Jwalamukhi" || location == "Khadadevi" || location == "Sunaula Bazar (partly)" ||
    location == "Dhuwakot" || location == "Chhatiwan")
{
    cout << "                                         1. Jwalamukhi Health Post (Jwalamukhi)\n";
    cout << "                                         2. Khadadevi Health Post (Khadadevi)\n";
    cout << "                                         3. Sunaula Bazar Health Post (Sunaula Bazar, partly)\n";
    cout << "                                         4. Dhuwakot Health Post (Dhuwakot)\n";
    cout << "                                         5. Chhatiwan Health Post (Chhatiwan)\n";
}
	}
	
  if(district == "dolakha") {
    if (location == "Charikot" || location == "Bigu" || location == "Jiri" ||
        location == "Kshetrapa" || location == "Melung") 
    {
        cout << "                                         1. Charikot Hospital (Charikot, Dolakha HQ)\n";
        cout << "                                         2. Bigu Health Post (Bigu)\n";
        cout << "                                         3. Jiri Hospital (Jiri)\n";
        cout << "                                         4. Kshetrapa Health Post (Kshetrapa)\n";
        cout << "                                         5. Melung Health Post (Melung)\n";
    } 
    else if (location == "Bhimeshwar" || location == "Baiteshwor" || location == "Gaurishankar" ||
             location == "Suri") 
    {
        cout << "                                         1. Bhimeshwar Health Post (Bhimeshwar)\n";
        cout << "                                         2. Baiteshwor Health Post (Baiteshwor)\n";
        cout << "                                         3. Gaurishankar Health Post (Gaurishankar)\n";
        cout << "                                         4. Suri Health Post (Suri)\n";
    } 
    else if (location == "Dolakha Bazaar" || location == "Tamakoshi" || location == "Khare") 
    {
        cout << "                                         1. Dolakha Bazaar Health Post (Dolakha Bazaar)\n";
        cout << "                                         2. Tamakoshi Health Post (Tamakoshi)\n";
        cout << "                                         3. Khare Health Post (Khare)\n";
    }
    else {
        cout << "                                         No hospital information available for this location.\n";
    }
}

	
	if(district == "kavrepalanchok") {
    if (location == "Dhulikhel" || location == "Banepa" || location == "Panauti" ||
        location == "Bhaktipur (partly)" || location == "Temal") 
    {
        cout << "                                         1. Dhulikhel Hospital (Dhulikhel, district HQ)\n";
        cout << "                                         2. Banepa Health Post (Banepa)\n";
        cout << "                                         3. Panauti Health Post (Panauti)\n";
        cout << "                                         4. Temal Health Post (Temal)\n";
    } 
    else if (location == "Namobuddha" || location == "Roshi" || location == "Panauti Bazaar" ||
             location == "Sunkoshi") 
    {
        cout << "                                         1. Namobuddha Health Post (Namobuddha)\n";
        cout << "                                         2. Roshi Health Post (Roshi)\n";
        cout << "                                         3. Panauti Bazaar Health Post (Panauti Bazaar)\n";
        cout << "                                         4. Sunkoshi Health Post (Sunkoshi)\n";
    } 
    else if (location == "Dapcha" || location == "Kavre Bazaar" || location == "Panchkhal") 
    {
        cout << "                                         1. Dapcha Health Post (Dapcha)\n";
        cout << "                                         2. Kavre Bazaar Health Post (Kavre Bazaar)\n";
        cout << "                                         3. Panchkhal Health Post (Panchkhal)\n";
    }
    else {
        cout << "                                         No hospital information available for this location.\n";
    }
}


    if(district == "makwanpur") {
    if (location == "Hetauda" || location == "Chisapani" || location == "Thaha" ||
        location == "Bakaiya" || location == "Raksirang") 
    {
        cout << "                                         1. Hetauda Hospital (Hetauda, Makwanpur HQ)\n";
        cout << "                                         2. Chisapani Health Post (Chisapani)\n";
        cout << "                                         3. Thaha Health Post (Thaha)\n";
        cout << "                                         4. Bakaiya Health Post (Bakaiya)\n";
        cout << "                                         5. Raksirang Health Post (Raksirang)\n";
    } 
    else if (location == "Panchkhal" || location == "Makwanpurgadhi" || location == "Bhimphedi") 
    {
        cout << "                                         1. Panchkhal Health Post (Panchkhal)\n";
        cout << "                                         2. Makwanpurgadhi Health Post (Makwanpurgadhi)\n";
        cout << "                                         3. Bhimphedi Health Post (Bhimphedi)\n";
    } 
    else if (location == "Manahari" || location == "Makwanpur Bazaar" || location == "Bagmati") 
    {
        cout << "                                         1. Manahari Health Post (Manahari)\n";
        cout << "                                         2. Makwanpur Bazaar Health Post (Makwanpur Bazaar)\n";
        cout << "                                         3. Bagmati Health Post (Bagmati)\n";
    }
    else {
        cout << "                                         No hospital information available for this location.\n";
    }
}

		if(district == "nuwakot"){
		if (location == "Bidur" || location == "Battar" || location == "Trishuli" ||
		    location == "Kharanitar" || location == "Belkotgadhi")
		{
		    cout << "                                         1. Trishuli Hospital (Bidur, Trishuli)\n";
		    cout << "                                         2. Battar Health Post (Battar)\n";
		    cout << "                                         3. Bidur Health Post (Bidur Municipality)\n";
		    cout << "                                         4. Kharanitar Health Post (Kharanitar)\n";
		    cout << "                                         5. Belkotgadhi Health Post (Belkotgadhi)\n";
		} 
		else if (location == "Kakani" || location == "Chhahare" || location == "Okharpauwa" ||
		         location == "Deurali" || location == "Tadi")
		{
		    cout << "                                         1. Kakani Primary Health Center (Kakani)\n";
		    cout << "                                         2. Chhahare Health Post (Chhahare)\n";
		    cout << "                                         3. Okharpauwa Health Post (Okharpauwa)\n";
		    cout << "                                         4. Deurali Health Post (Deurali)\n";
		    cout << "                                         5. Tadi Health Post (Tadi)\n";
		} 
		else if (location == "Likhu" || location == "Kispang" || location == "Suryagadhi" ||
		         location == "Panchakanya" || location == "Dupcheshwar")
		{
		    cout << "                                         1. Likhu Health Post (Likhu)\n";
		    cout << "                                         2. Kispang Health Post (Kispang)\n";
		    cout << "                                         3. Suryagadhi Health Post (Suryagadhi)\n";
		    cout << "                                         4. Panchakanya Health Post (Panchakanya)\n";
		    cout << "                                         5. Dupcheshwar Health Post (Dupcheshwar)\n";
		}
		else if (location == "Tarkeshwar" || location == "Samari" || location == "Samundratar" ||
		         location == "Gerkhu" || location == "Kalikatar")
		{
		    cout << "                                         1. Tarkeshwar Health Post (Tarkeshwar)\n";
		    cout << "                                         2. Samari Health Post (Samari)\n";
		    cout << "                                         3. Samundratar Health Post (Samundratar)\n";
		    cout << "                                         4. Gerkhu Health Post (Gerkhu)\n";
		    cout << "                                         5. Kalikatar Health Post (Kalikatar)\n";
		}
		else if (location == "Dupcheshwar" || location == "Kaulepani" || location == "Shivapuri" ||
		         location == "Rautbesi" || location == "Ralukadevi")
		{
		    cout << "                                         1. Dupcheshwar Health Post (Dupcheshwar)\n";
		    cout << "                                         2. Kaulepani Health Post (Kaulepani)\n";
		    cout << "                                         3. Shivapuri Health Post (Shivapuri)\n";
		    cout << "                                         4. Rautbesi Health Post (Rautbesi)\n";
		    cout << "                                         5. Ralukadevi Health Post (Ralukadevi)\n";
		}
		else if (location == "Belkot" || location == "Thansing" || location == "Ratmate" ||
		         location == "Chaughada" || location == "Ralukadevi (partly)")
		{
		    cout << "                                         1. Belkot Health Post (Belkot)\n";
		    cout << "                                         2. Thansing Health Post (Thansing)\n";
		    cout << "                                         3. Ratmate Health Post (Ratmate)\n";
		    cout << "                                         4. Chaughada Health Post (Chaughada)\n";
		    cout << "                                         5. Ralukadevi Health Post (Ralukadevi, partly)\n";
		}
	}

	
		if(district == "ramechhap"){
		if (location == "manthali" || location == "ramechhap" || location == "goswara" ||
		    location == "katakuti" || location == "hiledevi")
		{
		    cout << "                                         1. Manthali District Hospital (Manthali)\n";
		    cout << "                                         2. Ramechhap Health Post (Ramechhap Bazaar)\n";
		    cout << "                                         3. Goswara Health Post (Goswara)\n";
		    cout << "                                         4. Katakuti Health Post (Katakuti)\n";
		    cout << "                                         5. Hiledevi Health Post (Hiledevi)\n";
		}
		else if (location == "doramba" || location == "gokulganga" || location == "bhirpani" ||
		         location == "tokarpur" || location == "sukajor")
		{
		    cout << "                                         1. Doramba Health Post (Doramba)\n";
		    cout << "                                         2. Gokulganga Health Post (Gokulganga)\n";
		    cout << "                                         3. Bhirpani Health Post (Bhirpani)\n";
		    cout << "                                         4. Tokarpur Health Post (Tokarpur)\n";
		    cout << "                                         5. Sukajor Health Post (Sukajor)\n";
		}
		else if (location == "khandadevi" || location == "saghutar" || location == "rakathum" ||
		         location == "pakarbas" || location == "solu khola (partly)")
		{
		    cout << "                                         1. Khandadevi Health Post (Khandadevi)\n";
		    cout << "                                         2. Saghutar Health Post (Saghutar)\n";
		    cout << "                                         3. Rakathum Health Post (Rakathum)\n";
		    cout << "                                         4. Pakarbas Health Post (Pakarbas)\n";
		    cout << "                                         5. Solu Khola Health Post (Solu Khola, partly)\n";
		}
		else if (location == "bethan" || location == "gunsi bhadaure" || location == "priti" ||
		         location == "those" || location == "sukajor (partly)")
		{
		    cout << "                                         1. Bethan Health Post (Bethan)\n";
		    cout << "                                         2. Gunsi Bhadaure Health Post (Gunsi Bhadaure)\n";
		    cout << "                                         3. Priti Health Post (Priti)\n";
		    cout << "                                         4. Those Health Post (Those)\n";
		    cout << "                                         5. Sukajor Health Post (Sukajor, partly)\n";
		}
		else if (location == "likhu tamakoshi" || location == "sundrawati" || location == "bhujee" ||
		         location == "duragaun" || location == "bhirpani (partly)")
		{
		    cout << "                                         1. Likhu Tamakoshi Health Post (Likhu Tamakoshi)\n";
		    cout << "                                         2. Sundrawati Health Post (Sundrawati)\n";
		    cout << "                                         3. Bhujee Health Post (Bhujee)\n";
		    cout << "                                         4. Duragaun Health Post (Duragaun)\n";
		    cout << "                                         5. Bhirpani Health Post (Bhirpani, partly)\n";
		}
		else if (location == "umakunda" || location == "gumdel" || location == "golabun" ||
		         location == "jukuchhu" || location == "bhirpu")
		{
		    cout << "                                         1. Umakunda Health Post (Umakunda)\n";
		    cout << "                                         2. Gumdel Health Post (Gumdel)\n";
		    cout << "                                         3. Golabun Health Post (Golabun)\n";
		    cout << "                                         4. Jukuchhu Health Post (Jukuchhu)\n";
		    cout << "                                         5. Bhirpu Health Post (Bhirpu)\n";
		}
	}

	
		if(district == "rasuwa"){
		if (location == "dhunche" || location == "syabrubesi" || location == "ramche" ||
		    location == "langtang" || location == "bridim")
		{
		    cout << "                                         1. Dhunche District Hospital (Dhunche)\n";
		    cout << "                                         2. Syabrubesi Health Post (Syabrubesi)\n";
		    cout << "                                         3. Ramche Health Post (Ramche)\n";
		    cout << "                                         4. Langtang Health Post (Langtang)\n";
		    cout << "                                         5. Bridim Health Post (Bridim)\n";
		}
		else if (location == "timure" || location == "thuman" || location == "nagthali" ||
		         location == "chilime" || location == "goljung")
		{
		    cout << "                                         1. Timure Health Post (Timure)\n";
		    cout << "                                         2. Thuman Health Post (Thuman)\n";
		    cout << "                                         3. Nagthali Health Post (Nagthali)\n";
		    cout << "                                         4. Chilime Health Post (Chilime)\n";
		    cout << "                                         5. Goljung Health Post (Goljung)\n";
		}
		else if (location == "haku" || location == "bhorle" || location == "mailung" ||
		         location == "yarsha" || location == "grang")
		{
		    cout << "                                         1. Haku Health Post (Haku)\n";
		    cout << "                                         2. Bhorle Health Post (Bhorle)\n";
		    cout << "                                         3. Mailung Health Post (Mailung)\n";
		    cout << "                                         4. Yarsha Health Post (Yarsha)\n";
		    cout << "                                         5. Grang Health Post (Grang)\n";
		}
		else if (location == "uttargaya" || location == "ramche (partly)" || location == "chandibhanjyang" ||
		         location == "thulo bharkhu" || location == "koltung")
		{
		    cout << "                                         1. Uttargaya Health Post (Uttargaya)\n";
		    cout << "                                         2. Ramche Health Post (Ramche, partly)\n";
		    cout << "                                         3. Chandibhanjyang Health Post (Chandibhanjyang)\n";
		    cout << "                                         4. Thulo Bharkhu Health Post (Thulo Bharkhu)\n";
		    cout << "                                         5. Koltung Health Post (Koltung)\n";
		}
		else if (location == "gosaikunda" || location == "chandanbari" || location == "sing gompa" ||
		         location == "laurebina" || location == "thulo syabru")
		{
		    cout << "                                         1. Gosaikunda Health Post (Gosaikunda)\n";
		    cout << "                                         2. Chandanbari Health Post (Chandanbari)\n";
		    cout << "                                         3. Sing Gompa Health Post (Sing Gompa)\n";
		    cout << "                                         4. Laurebina Health Post (Laurebina)\n";
		    cout << "                                         5. Thulo Syabru Health Post (Thulo Syabru)\n";
		}
		else if (location == "naur" || location == "parbati kunda" || location == "chakhu" ||
		         location == "ramche khola" || location == "syabru khola")
		{
		    cout << "                                         1. Naur Health Post (Naur)\n";
		    cout << "                                         2. Parbati Kunda Health Post (Parbati Kunda)\n";
		    cout << "                                         3. Chakhu Health Post (Chakhu)\n";
		    cout << "                                         4. Ramche Khola Health Post (Ramche Khola)\n";
		    cout << "                                         5. Syabru Khola Health Post (Syabru Khola)\n";
		}
	}

	
		if(district == "sindhuli"){
		if (location == "kamalamai" || location == "sindhuli madi" || location == "ratanchura" ||
		    location == "bhiman" || location == "golanjor")
		{
		    cout << "                                         1. Sindhuli District Hospital (Kamalamai)\n";
		    cout << "                                         2. Sindhuli Madi Health Post (Sindhuli Madi)\n";
		    cout << "                                         3. Ratanchura Health Post (Ratanchura)\n";
		    cout << "                                         4. Bhiman Health Post (Bhiman)\n";
		    cout << "                                         5. Golanjor Health Post (Golanjor)\n";
		}
		else if (location == "tamakoshi" || location == "tandi" || location == "jhagare" ||
		         location == "duwadanda" || location == "bhotkhola")
		{
		    cout << "                                         1. Tamakoshi Health Post (Tamakoshi)\n";
		    cout << "                                         2. Tandi Health Post (Tandi)\n";
		    cout << "                                         3. Jhagare Health Post (Jhagare)\n";
		    cout << "                                         4. Duwadanda Health Post (Duwadanda)\n";
		    cout << "                                         5. Bhotkhola Health Post (Bhotkhola)\n";
		}
		else if (location == "marin" || location == "majhuwa" || location == "jhangajholi ratamata" ||
		         location == "ghurmi" || location == "kubhinde")
		{
		    cout << "                                         1. Marin Health Post (Marin)\n";
		    cout << "                                         2. Majhuwa Health Post (Majhuwa)\n";
		    cout << "                                         3. Jhangajholi Ratamata Health Post (Jhangajholi Ratamata)\n";
		    cout << "                                         4. Ghurmi Health Post (Ghurmi)\n";
		    cout << "                                         5. Kudhinde Health Post (Kubhinde)\n";
		}
		else if (location == "ghangre" || location == "hariharpur gadhi" || location == "ranichuri" ||
		         location == "hatpate" || location == "basaha")
		{
		    cout << "                                         1. Ghangre Health Post (Ghangre)\n";
		    cout << "                                         2. Hariharpur Gadhi Health Post (Hariharpur Gadhi)\n";
		    cout << "                                         3. Ranichuri Health Post (Ranichuri)\n";
		    cout << "                                         4. Hatpate Health Post (Hatpate)\n";
		    cout << "                                         5. Basaha Health Post (Basaha)\n";
		}
		else if (location == "dumja" || location == "bimphedi border" || location == "lampantar" ||
		         location == "arunthakur" || location == "shitalpati")
		{
		    cout << "                                         1. Dumja Health Post (Dumja)\n";
		    cout << "                                         2. Bimphedi Border Health Post (Bimphedi Border)\n";
		    cout << "                                         3. Lampantar Health Post (Lampantar)\n";
		    cout << "                                         4. Arunthakur Health Post (Arunthakur)\n";
		    cout << "                                         5. Shitalpati Health Post (Shitalpati)\n";
		}
		else if (location == "sunkoshi" || location == "tinkanya" || location == "kamare" ||
		         location == "ghangre (partly)" || location == "majuripakha")
		{
		    cout << "                                         1. Sunkoshi Health Post (Sunkoshi)\n";
		    cout << "                                         2. Tinkanya Health Post (Tinkanya)\n";
		    cout << "                                         3. Kamare Health Post (Kamare)\n";
		    cout << "                                         4. Ghangre Health Post (Ghangre, partly)\n";
		    cout << "                                         5. Majuripakha Health Post (Majuripakha)\n";
		}
	}

	
		if(district == "sindhupalchok"){
		if (location == "chautara" || location == "bharatpur" || location == "khadichaur" ||
		    location == "melamchi" || location == "sunkhani")
		{
		    cout << "                                         1. Chautara District Hospital (Chautara)\n";
		    cout << "                                         2. Bharatpur Health Post (Bharatpur)\n";
		    cout << "                                         3. Khadichaur Health Post (Khadichaur)\n";
		    cout << "                                         4. Melamchi Health Post (Melamchi)\n";
		    cout << "                                         5. Sunkhani Health Post (Sunkhani)\n";
		}
		else if (location == "bhotekoshi" || location == "indrawati" || location == "tarkeghyang" ||
		         location == "kumpur" || location == "panauti")
		{
		    cout << "                                         1. Bhotekoshi Health Post (Bhotekoshi)\n";
		    cout << "                                         2. Indrawati Health Post (Indrawati)\n";
		    cout << "                                         3. Tarkeghyang Health Post (Tarkeghyang)\n";
		    cout << "                                         4. Kumpur Health Post (Kumpur)\n";
		    cout << "                                         5. Panauti Health Post (Panauti)\n";
		}
		else if (location == "bhimeshwor" || location == "jinal" || location == "kakani" ||
		         location == "khadadevi" || location == "syaule")
		{
		    cout << "                                         1. Bhimeshwor Health Post (Bhimeshwor)\n";
		    cout << "                                         2. Jinal Health Post (Jinal)\n";
		    cout << "                                         3. Kakani Health Post (Kakani)\n";
		    cout << "                                         4. Khadadevi Health Post (Khadadevi)\n";
		    cout << "                                         5. Syaule Health Post (Syaule)\n";
		}
		else if (location == "dhunkharka" || location == "ramche" || location == "bhimeshwor (partly)" ||
		         location == "phulping" || location == "panchpokhari")
		{
		    cout << "                                         1. Dhunkharka Health Post (Dhunkharka)\n";
		    cout << "                                         2. Ramche Health Post (Ramche)\n";
		    cout << "                                         3. Bhimeshwor Health Post (Bhimeshwor, partly)\n";
		    cout << "                                         4. Phulping Health Post (Phulping)\n";
		    cout << "                                         5. Panchpokhari Health Post (Panchpokhari)\n";
		}
		else if (location == "tapting" || location == "gokulganga" || location == "jinal (partly)" ||
		         location == "dalchoki" || location == "sunkhani (partly)")
		{
		    cout << "                                         1. Tapting Health Post (Tapting)\n";
		    cout << "                                         2. Gokulganga Health Post (Gokulganga)\n";
		    cout << "                                         3. Jinal Health Post (Jinal, partly)\n";
		    cout << "                                         4. Dalchoki Health Post (Dalchoki)\n";
		    cout << "                                         5. Sunkhani Health Post (Sunkhani, partly)\n";
		}
	}

        	if(district == "bhojpur"){
		if (location == "bhojpur" || location == "sankhuwasabha" || location == "taksar" ||
		    location == "bhatkhola" || location == "suntale")
		{
		    cout << "                                         1. Bhojpur District Hospital (Bhojpur)\n";
		    cout << "                                         2. Sankhuwasabha Health Post (Sankhuwasabha)\n";
		    cout << "                                         3. Taksar Health Post (Taksar)\n";
		    cout << "                                         4. Bhatkhola Health Post (Bhatkhola)\n";
		    cout << "                                         5. Suntale Health Post (Suntale)\n";
		}
		else if (location == "bimalnagar" || location == "shadananda" || location == "taksar (partly)" ||
		         location == "khartang" || location == "pyauli")
		{
		    cout << "                                         1. Bimalnagar Health Post (Bimalnagar)\n";
		    cout << "                                         2. Shadananda Health Post (Shadananda)\n";
		    cout << "                                         3. Taksar Health Post (Taksar, partly)\n";
		    cout << "                                         4. Khartang Health Post (Khartang)\n";
		    cout << "                                         5. Pyauli Health Post (Pyauli)\n";
		}
		else if (location == "tyamke" || location == "chhathar" || location == "khidima" ||
		         location == "sunkoshi" || location == "tawkha")
		{
		    cout << "                                         1. Tyamke Health Post (Tyamke)\n";
		    cout << "                                         2. Chhathar Health Post (Chhathar)\n";
		    cout << "                                         3. Khidima Health Post (Khidima)\n";
		    cout << "                                         4. Sunkoshi Health Post (Sunkoshi)\n";
		    cout << "                                         5. Tawkha Health Post (Tawkha)\n";
		}
		else if (location == "hatuwagadhi" || location == "bhotang" || location == "ramprasad" ||
		         location == "phedi" || location == "deurali")
		{
		    cout << "                                         1. Hatuwagadhi Health Post (Hatuwagadhi)\n";
		    cout << "                                         2. Bhotang Health Post (Bhotang)\n";
		    cout << "                                         3. Ramprasad Health Post (Ramprasad)\n";
		    cout << "                                         4. Phedi Health Post (Phedi)\n";
		    cout << "                                         5. Deurali Health Post (Deurali)\n";
		}
		else if (location == "okharpauwa" || location == "maulang" || location == "tarkeghyang" ||
		         location == "singhadevi" || location == "bajhgaun")
		{
		    cout << "                                         1. Okharpauwa Health Post (Okharpauwa)\n";
		    cout << "                                         2. Maulang Health Post (Maulang)\n";
		    cout << "                                         3. Tarkeghyang Health Post (Tarkeghyang)\n";
		    cout << "                                         4. Singhadevi Health Post (Singhadevi)\n";
		    cout << "                                         5. Bajhgaun Health Post (Bajhgaun)\n";
		}
	}

			if(district == "ilam"){
		if (location == "ilam" || location == "maipokhari" || location == "suryodaya" ||
		    location == "mangsebung" || location == "pashupatinagar")
		{
		    cout << "                                         1. Ilam District Hospital (Ilam)\n";
		    cout << "                                         2. Maipokhari Health Post (Maipokhari)\n";
		    cout << "                                         3. Suryodaya Health Post (Suryodaya)\n";
		    cout << "                                         4. Mangsebung Health Post (Mangsebung)\n";
		    cout << "                                         5. Pashupatinagar Health Post (Pashupatinagar)\n";
		}
		else if (location == "fikkal" || location == "chulachuli" || location == "sadananda" ||
		         location == "phikal" || location == "ilam bazaar")
		{
		    cout << "                                         1. Fikkal Health Post (Fikkal)\n";
		    cout << "                                         2. Chulachuli Health Post (Chulachuli)\n";
		    cout << "                                         3. Sadananda Health Post (Sadananda)\n";
		    cout << "                                         4. Phikal Health Post (Phikal)\n";
		    cout << "                                         5. Ilam Bazaar Health Post (Ilam Bazaar)\n";
		}
		else if (location == "mahabir" || location == "santipur" || location == "jirmale" ||
		         location == "damak" || location == "suntal")
		{
		    cout << "                                         1. Mahabir Health Post (Mahabir)\n";
		    cout << "                                         2. Santipur Health Post (Santipur)\n";
		    cout << "                                         3. Jirmale Health Post (Jirmale)\n";
		    cout << "                                         4. Damak Health Post (Damak)\n";
		    cout << "                                         5. Suntal Health Post (Suntal)\n";
		}
		else if (location == "phikal (partly)" || location == "maipokhari (partly)" || location == "chhathare" ||
		         location == "deumai" || location == "suryodaya (partly)")
		{
		    cout << "                                         1. Phikal Health Post (Phikal, partly)\n";
		    cout << "                                         2. Maipokhari Health Post (Maipokhari, partly)\n";
		    cout << "                                         3. Chhathare Health Post (Chhathare)\n";
		    cout << "                                         4. Deumai Health Post (Deumai)\n";
		    cout << "                                         5. Suryodaya Health Post (Suryodaya, partly)\n";
		}
		else if (location == "fikkal (partly)" || location == "mahabir (partly)" || location == "santipur (partly)" ||
		         location == "ilam bazaar (partly)" || location == "pashupatinagar (partly)")
		{
		    cout << "                                         1. Fikkal Health Post (Fikkal, partly)\n";
		    cout << "                                         2. Mahabir Health Post (Mahabir, partly)\n";
		    cout << "                                         3. Santipur Health Post (Santipur, partly)\n";
		    cout << "                                         4. Ilam Bazaar Health Post (Ilam Bazaar, partly)\n";
		    cout << "                                         5. Pashupatinagar Health Post (Pashupatinagar, partly)\n";
		}
	}

		
			if(district == "jhapa"){
		if (location == "birtamod" || location == "damak" || location == "baniyani" ||
		    location == "arjundhara" || location == "mechinagar")
		{
		    cout << "                                         1. Birtamod District Hospital (Birtamod)\n";
		    cout << "                                         2. Damak Health Post (Damak)\n";
		    cout << "                                         3. Baniyani Health Post (Baniyani)\n";
		    cout << "                                         4. Arjundhara Health Post (Arjundhara)\n";
		    cout << "                                         5. Mechinagar Health Post (Mechinagar)\n";
		}
		else if (location == "kakarvitta" || location == "budhabare" || location == "gauriganj" ||
		         location == "birtamod (partly)" || location == "surunga")
		{
		    cout << "                                         1. Kakarvitta Health Post (Kakarvitta)\n";
		    cout << "                                         2. Budhabare Health Post (Budhabare)\n";
		    cout << "                                         3. Gauriganj Health Post (Gauriganj)\n";
		    cout << "                                         4. Birtamod Health Post (Birtamod, partly)\n";
		    cout << "                                         5. Surunga Health Post (Surunga)\n";
		}
		else if (location == "charali" || location == "kamal" || location == "ghorahi" ||
		         location == "duhabi" || location == "rajghat")
		{
		    cout << "                                         1. Charali Health Post (Charali)\n";
		    cout << "                                         2. Kamal Health Post (Kamal)\n";
		    cout << "                                         3. Ghorahi Health Post (Ghorahi)\n";
		    cout << "                                         4. Duhabi Health Post (Duhabi)\n";
		    cout << "                                         5. Rajghat Health Post (Rajghat)\n";
		}
		else if (location == "jalthal" || location == "barhadashi" || location == "damak (partly)" ||
		         location == "mechinagar (partly)" || location == "arjundhara (partly)")
		{
		    cout << "                                         1. Jalthal Health Post (Jalthal)\n";
		    cout << "                                         2. Barhadashi Health Post (Barhadashi)\n";
		    cout << "                                         3. Damak Health Post (Damak, partly)\n";
		    cout << "                                         4. Mechinagar Health Post (Mechinagar, partly)\n";
		    cout << "                                         5. Arjundhara Health Post (Arjundhara, partly)\n";
		}
		else if (location == "surunga (partly)" || location == "kakarvitta (partly)" || location == "baniyani (partly)" ||
		         location == "budhabare (partly)" || location == "charali (partly)")
		{
		    cout << "                                         1. Surunga Health Post (Surunga, partly)\n";
		    cout << "                                         2. Kakarvitta Health Post (Kakarvitta, partly)\n";
		    cout << "                                         3. Baniyani Health Post (Baniyani, partly)\n";
		    cout << "                                         4. Budhabare Health Post (Budhabare, partly)\n";
		    cout << "                                         5. Charali Health Post (Charali, partly)\n";
		}
	}

		
		if(district == "khotang"){
		if (location == "diktel" || location == "khotehang" || location == "salleri" ||
		    location == "khairang" || location == "katunje")
		{
		    cout << "                                         1. Diktel District Hospital (Diktel)\n";
		    cout << "                                         2. Khotehang Health Post (Khotehang)\n";
		    cout << "                                         3. Salleri Health Post (Salleri)\n";
		    cout << "                                         4. Khairang Health Post (Khairang)\n";
		    cout << "                                         5. Katunje Health Post (Katunje)\n";
		}
		else if (location == "chainpur" || location == "bhadaure" || location == "kharpani" ||
		         location == "mauli" || location == "hatu")
		{
		    cout << "                                         1. Chainpur Health Post (Chainpur)\n";
		    cout << "                                         2. Bhadaure Health Post (Bhadaure)\n";
		    cout << "                                         3. Kharpani Health Post (Kharpani)\n";
		    cout << "                                         4. Mauli Health Post (Mauli)\n";
		    cout << "                                         5. Hatu Health Post (Hatu)\n";
		}
		else if (location == "ranibu" || location == "sunkoshi" || location == "tamlichha" ||
		         location == "sirise" || location == "tawal")
		{
		    cout << "                                         1. Ranibu Health Post (Ranibu)\n";
		    cout << "                                         2. Sunkoshi Health Post (Sunkoshi)\n";
		    cout << "                                         3. Tamlichha Health Post (Tamlichha)\n";
		    cout << "                                         4. Sirise Health Post (Sirise)\n";
		    cout << "                                         5. Tawal Health Post (Tawal)\n";
		}
		else if (location == "dipsung" || location == "bap" || location == "chheskam" ||
		         location == "phalam" || location == "maiti")
		{
		    cout << "                                         1. Dipsung Health Post (Dipsung)\n";
		    cout << "                                         2. Bap Health Post (Bap)\n";
		    cout << "                                         3. Chheskam Health Post (Chheskam)\n";
		    cout << "                                         4. Phalam Health Post (Phalam)\n";
		    cout << "                                         5. Maiti Health Post (Maiti)\n";
		}
	}

		
		if(district == "morang"){
		if (location == "biratnagar" || location == "ratuwamai" || location == "belbari" ||
		    location == "letang" || location == "sundarharaicha")
		{
		    cout << "                                         1. Biratnagar District Hospital (Biratnagar)\n";
		    cout << "                                         2. Ratuwamai Health Post (Ratuwamai)\n";
		    cout << "                                         3. Belbari Health Post (Belbari)\n";
		    cout << "                                         4. Letang Health Post (Letang)\n";
		    cout << "                                         5. Sundarharaicha Health Post (Sundarharaicha)\n";
		}
		else if (location == "biratchowk" || location == "dharan" || location == "pathari" ||
		         location == "birtamod" || location == "rangeli")
		{
		    cout << "                                         1. Biratchowk Health Post (Biratchowk)\n";
		    cout << "                                         2. Dharan Health Post (Dharan)\n";
		    cout << "                                         3. Pathari Health Post (Pathari)\n";
		    cout << "                                         4. Birtamod Health Post (Birtamod)\n";
		    cout << "                                         5. Rangeli Health Post (Rangeli)\n";
		}
		else if (location == "ramdhuni" || location == "jhumka" || location == "bhimnagar" ||
		         location == "sundarpur" || location == "kushma")
		{
		    cout << "                                         1. Ramdhuni Health Post (Ramdhuni)\n";
		    cout << "                                         2. Jhumka Health Post (Jhumka)\n";
		    cout << "                                         3. Bhimnagar Health Post (Bhimnagar)\n";
		    cout << "                                         4. Sundarpur Health Post (Sundarpur)\n";
		    cout << "                                         5. Kushma Health Post (Kushma)\n";
		}
		else if (location == "rangeli (partly)" || location == "letang (partly)" || location == "belbari (partly)" ||
		         location == "biratchowk (partly)" || location == "sundarharaicha (partly)")
		{
		    cout << "                                         1. Rangeli Health Post (Rangeli, partly)\n";
		    cout << "                                         2. Letang Health Post (Letang, partly)\n";
		    cout << "                                         3. Belbari Health Post (Belbari, partly)\n";
		    cout << "                                         4. Biratchowk Health Post (Biratchowk, partly)\n";
		    cout << "                                         5. Sundarharaicha Health Post (Sundarharaicha, partly)\n";
		}
	}

		
			if(district == "okhaldhunga"){
		if (location == "okhaldhunga" || location == "phulping" || location == "katunje" ||
		    location == "khiji" || location == "shailung")
		{
		    cout << "                                         1. Okhaldhunga District Hospital (Okhaldhunga)\n";
		    cout << "                                         2. Phulping Health Post (Phulping)\n";
		    cout << "                                         3. Katunje Health Post (Katunje)\n";
		    cout << "                                         4. Khiji Health Post (Khiji)\n";
		    cout << "                                         5. Shailung Health Post (Shailung)\n";
		}
		else if (location == "manebhanjyang" || location == "bhalukharka" || location == "phaktanglung" ||
		         location == "dhungesanghu" || location == "sisne")
		{
		    cout << "                                         1. Manebhanjyang Health Post (Manebhanjyang)\n";
		    cout << "                                         2. Bhalukharka Health Post (Bhalukharka)\n";
		    cout << "                                         3. Phaktanglung Health Post (Phaktanglung)\n";
		    cout << "                                         4. Dhungesanghu Health Post (Dhungesanghu)\n";
		    cout << "                                         5. Sisne Health Post (Sisne)\n";
		}
		else if (location == "chaundade" || location == "pangma" || location == "dhuskun" ||
		         location == "khidima" || location == "khurkot")
		{
		    cout << "                                         1. Chaundade Health Post (Chaundade)\n";
		    cout << "                                         2. Pangma Health Post (Pangma)\n";
		    cout << "                                         3. Dhuskun Health Post (Dhuskun)\n";
		    cout << "                                         4. Khidima Health Post (Khidima)\n";
		    cout << "                                         5. Khurkot Health Post (Khurkot)\n";
		}
		else if (location == "ratmata" || location == "dipsung" || location == "bap" ||
		         location == "phaktanglung (partly)" || location == "khiji (partly)")
		{
		    cout << "                                         1. Ratmata Health Post (Ratmata)\n";
		    cout << "                                         2. Dipsung Health Post (Dipsung)\n";
		    cout << "                                         3. Bap Health Post (Bap)\n";
		    cout << "                                         4. Phaktanglung Health Post (Phaktanglung, partly)\n";
		    cout << "                                         5. Khiji Health Post (Khiji, partly)\n";
		}
	}

		
		if(district == "panchthar"){
		if (location == "phidim" || location == "mahilung" || location == "phedap" ||
		    location == "chiyabari" || location == "kummayak")
		{
		    cout << "                                         1. Phidim District Hospital (Phidim)\n";
		    cout << "                                         2. Mahilung Health Post (Mahilung)\n";
		    cout << "                                         3. Phedap Health Post (Phedap)\n";
		    cout << "                                         4. Chiyabari Health Post (Chiyabari)\n";
		    cout << "                                         5. Kummayak Health Post (Kummayak)\n";
		}
		else if (location == "mahabir" || location == "bakhundol" || location == "sitalpati" ||
		         location == "ilamphok" || location == "morang")
		{
		    cout << "                                         1. Mahabir Health Post (Mahabir)\n";
		    cout << "                                         2. Bakhundol Health Post (Bakhundol)\n";
		    cout << "                                         3. Sitalpati Health Post (Sitalpati)\n";
		    cout << "                                         4. Ilamphok Health Post (Ilamphok)\n";
		    cout << "                                         5. Morang Health Post (Morang)\n";
		}
		else if (location == "rani" || location == "naya bazzar" || location == "jangalikot" ||
		         location == "jirmale" || location == "panchakanya")
		{
		    cout << "                                         1. Rani Health Post (Rani)\n";
		    cout << "                                         2. Naya Bazzar Health Post (Naya Bazzar)\n";
		    cout << "                                         3. Jangalikot Health Post (Jangalikot)\n";
		    cout << "                                         4. Jirmale Health Post (Jirmale)\n";
		    cout << "                                         5. Panchakanya Health Post (Panchakanya)\n";
		}
	}

		
			if(district == "sankhuwasabha"){
		if (location == "khandbari" || location == "num" || location == "marmat" ||
		    location == "chichila" || location == "darma")
		{
		    cout << "                                         1. Khandbari District Hospital (Khandbari)\n";
		    cout << "                                         2. Num Health Post (Num)\n";
		    cout << "                                         3. Marmat Health Post (Marmat)\n";
		    cout << "                                         4. Chichila Health Post (Chichila)\n";
		    cout << "                                         5. Darma Health Post (Darma)\n";
		}
		else if (location == "salleri" || location == "mahalaxmi" || location == "dudhawa" ||
		         location == "tamku" || location == "bahundangi")
		{
		    cout << "                                         1. Salleri Health Post (Salleri)\n";
		    cout << "                                         2. Mahalaxmi Health Post (Mahalaxmi)\n";
		    cout << "                                         3. Dudhawa Health Post (Dudhawa)\n";
		    cout << "                                         4. Tamku Health Post (Tamku)\n";
		    cout << "                                         5. Bahundangi Health Post (Bahundangi)\n";
		}
		else if (location == "makalu" || location == "sabhapokhari" || location == "bhotang" ||
		         location == "nametar" || location == "tawa")
		{
		    cout << "                                         1. Makalu Health Post (Makalu)\n";
		    cout << "                                         2. Sabhapokhari Health Post (Sabhapokhari)\n";
		    cout << "                                         3. Bhotang Health Post (Bhotang)\n";
		    cout << "                                         4. Nametar Health Post (Nametar)\n";
		    cout << "                                         5. Tawa Health Post (Tawa)\n";
		}
	}

		
		if(district == "solukhumbu"){
		if (location == "salleri" || location == "kharikhola" || location == "chaurikharka" ||
		    location == "phaplu" || location == "jumla")
		{
		    cout << "                                         1. Salleri District Hospital (Salleri)\n";
		    cout << "                                         2. Kharikhola Health Post (Kharikhola)\n";
		    cout << "                                         3. Chaurikharka Health Post (Chaurikharka)\n";
		    cout << "                                         4. Phaplu Health Post (Phaplu)\n";
		    cout << "                                         5. Jumla Health Post (Jumla)\n";
		}
		else if (location == "lukla" || location == "namche" || location == "thame" ||
		         location == "khumjung" || location == "pangboche")
		{
		    cout << "                                         1. Lukla Health Post (Lukla)\n";
		    cout << "                                         2. Namche Health Post (Namche)\n";
		    cout << "                                         3. Thame Health Post (Thame)\n";
		    cout << "                                         4. Khumjung Health Post (Khumjung)\n";
		    cout << "                                         5. Pangboche Health Post (Pangboche)\n";
		}
		else if (location == "phaplu (partly)" || location == "salleri (partly)" || location == "thulung")
		{
		    cout << "                                         1. Phaplu Health Post (Phaplu, partly)\n";
		    cout << "                                         2. Salleri Health Post (Salleri, partly)\n";
		    cout << "                                         3. Thulung Health Post (Thulung)\n";
		}
	}

		
			if(district == "sunsari"){
		if (location == "inaruwa" || location == "itahari" || location == "dharan" ||
		    location == "barahachhetra" || location == "pakali")
		{
		    cout << "                                         1. Inaruwa District Hospital (Inaruwa)\n";
		    cout << "                                         2. Itahari Health Post (Itahari)\n";
		    cout << "                                         3. Dharan Health Post (Dharan)\n";
		    cout << "                                         4. Barahachhetra Health Post (Barahachhetra)\n";
		    cout << "                                         5. Pakali Health Post (Pakali)\n";
		}
		else if (location == "gadhi" || location == "bhaluwa" || location == "harinagara" ||
		         location == "ramdhuni" || location == "jhumka")
		{
		    cout << "                                         1. Gadhi Health Post (Gadhi)\n";
		    cout << "                                         2. Bhaluwa Health Post (Bhaluwa)\n";
		    cout << "                                         3. Harinagara Health Post (Harinagara)\n";
		    cout << "                                         4. Ramdhuni Health Post (Ramdhuni)\n";
		    cout << "                                         5. Jhumka Health Post (Jhumka)\n";
		}
		else if (location == "damak" || location == "rangeli" || location == "biratnagar" ||
		         location == "birtamod" || location == "sundarharaicha")
		{
		    cout << "                                         1. Damak Health Post (Damak)\n";
		    cout << "                                         2. Rangeli Health Post (Rangeli)\n";
		    cout << "                                         3. Biratnagar Health Post (Biratnagar)\n";
		    cout << "                                         4. Birtamod Health Post (Birtamod)\n";
		    cout << "                                         5. Sundarharaicha Health Post (Sundarharaicha)\n";
		}
	}

		
		if(district == "taplejung"){
		if (location == "taplejung" || location == "mewa" || location == "mawakhola" ||
		    location == "phungling" || location == "siding")
		{
		    cout << "                                         1. Taplejung District Hospital (Taplejung)\n";
		    cout << "                                         2. Mewa Health Post (Mewa)\n";
		    cout << "                                         3. Mawakhola Health Post (Mawakhola)\n";
		    cout << "                                         4. Phungling Health Post (Phungling)\n";
		    cout << "                                         5. Siding Health Post (Siding)\n";
		}
		else if (location == "fikkal" || location == "sitalpati" || location == "panchakanya" ||
		         location == "yangma" || location == "chabung")
		{
		    cout << "                                         1. Fikkal Health Post (Fikkal)\n";
		    cout << "                                         2. Sitalpati Health Post (Sitalpati)\n";
		    cout << "                                         3. Panchakanya Health Post (Panchakanya)\n";
		    cout << "                                         4. Yangma Health Post (Yangma)\n";
		    cout << "                                         5. Chabung Health Post (Chabung)\n";
		}
		else if (location == "siding (partly)" || location == "phungling (partly)" || location == "mawakhola (partly)")
		{
		    cout << "                                         1. Siding Health Post (Siding, partly)\n";
		    cout << "                                         2. Phungling Health Post (Phungling, partly)\n";
		    cout << "                                         3. Mawakhola Health Post (Mawakhola, partly)\n";
		}
	}

		
			if(district == "terhathum"){
		if (location == "myanglung" || location == "piple" || location == "bhotkhola" ||
		    location == "menchhari" || location == "chimung")
		{
		    cout << "                                         1. Myanglung District Hospital (Myanglung)\n";
		    cout << "                                         2. Piple Health Post (Piple)\n";
		    cout << "                                         3. Bhotkhola Health Post (Bhotkhola)\n";
		    cout << "                                         4. Menchhari Health Post (Menchhari)\n";
		    cout << "                                         5. Chimung Health Post (Chimung)\n";
		}
		else if (location == "ramite" || location == "mahalaxmi" || location == "kanchha" ||
		         location == "samdo" || location == "sibhuwa")
		{
		    cout << "                                         1. Ramite Health Post (Ramite)\n";
		    cout << "                                         2. Mahalaxmi Health Post (Mahalaxmi)\n";
		    cout << "                                         3. Kanchha Health Post (Kanchha)\n";
		    cout << "                                         4. Samdo Health Post (Samdo)\n";
		    cout << "                                         5. Sibhuwa Health Post (Sibhuwa)\n";
		}
	}

		
		if(district == "udayapur"){
		if (location == "gaighat" || location == "triupura" || location == "katari" ||
		    location == "chimdi" || location == "beltar")
		{
		    cout << "                                         1. Gaighat District Hospital (Gaighat)\n";
		    cout << "                                         2. Triupura Health Post (Triupura)\n";
		    cout << "                                         3. Katari Health Post (Katari)\n";
		    cout << "                                         4. Chimdi Health Post (Chimdi)\n";
		    cout << "                                         5. Beltar Health Post (Beltar)\n";
		}
		else if (location == "jarmundi" || location == "bhaluwang" || location == "bagaicha" ||
		         location == "saptakoshi" || location == "rayagada")
		{
		    cout << "                                         1. Jarmundi Health Post (Jarmundi)\n";
		    cout << "                                         2. Bhaluwang Health Post (Bhaluwang)\n";
		    cout << "                                         3. Bagaicha Health Post (Bagaicha)\n";
		    cout << "                                         4. Saptakoshi Health Post (Saptakoshi)\n";
		    cout << "                                         5. Rayagada Health Post (Rayagada)\n";
		}
	}

		
		if(district == "dhankuta"){
		if (location == "dhankuta" || location == "pakhribas" || location == "bhedetar" ||
		    location == "sanghutar" || location == "chhathar")
		{
		    cout << "                                         1. Dhankuta District Hospital (Dhankuta)\n";
		    cout << "                                         2. Pakhribas Health Post (Pakhribas)\n";
		    cout << "                                         3. Bhedetar Health Post (Bhedetar)\n";
		    cout << "                                         4. Sanghutar Health Post (Sanghutar)\n";
		    cout << "                                         5. Chhathar Health Post (Chhathar)\n";
		}
		else if (location == "mahalaxmi" || location == "chhathar (partly)" || location == "bhimtar" ||
		         location == "sanghutar (partly)" || location == "pakhribas (partly)")
		{
		    cout << "                                         1. Mahalaxmi Health Post (Mahalaxmi)\n";
		    cout << "                                         2. Chhathar Health Post (Chhathar, partly)\n";
		    cout << "                                         3. Bhimtar Health Post (Bhimtar)\n";
		    cout << "                                         4. Sanghutar Health Post (Sanghutar, partly)\n";
		    cout << "                                         5. Pakhribas Health Post (Pakhribas, partly)\n";
		}
	}

	  	if(district == "bara"){
		if (location == "kalaiya" || location == "parwanipur" || location == "simra" ||
		    location == "jatwara" || location == "madanpur")
		{
		    cout << "                                         1. Kalaiya District Hospital (Kalaiya) - complete\n";
		    cout << "                                         2. Parwanipur Health Post (Parwanipur) - complete\n";
		    cout << "                                         3. Simra Health Post (Simra) - complete\n";
		    cout << "                                         4. Jatwara Health Post (Jatwara) - complete\n";
		    cout << "                                         5. Madanpur Health Post (Madanpur) - complete\n";
		}
		else if (location == "kumarwarti" || location == "pachraha" || location == "narayangadhi" ||
		         location == "madanpur (partly)" || location == "simra (partly)")
		{
		    cout << "                                         1. Kumarwarti Health Post (Kumarwarti) - complete\n";
		    cout << "                                         2. Pachraha Health Post (Pachraha) - complete\n";
		    cout << "                                         3. Narayangadhi Health Post (Narayangadhi) - complete\n";
		    cout << "                                         4. Madanpur Health Post (Madanpur, partly) - half/partly\n";
		    cout << "                                         5. Simra Health Post (Simra, partly) - half/partly\n";
		}
	}

	if(district == "dhanusha"){
		if (location == "janakpur" || location == "bahadurpur" || location == "ganeshpur" ||
		    location == "singiya" || location == "sabaila")
		{
		    cout << "                                         1. Janakpur District Hospital (Janakpur) - complete\n";
		    cout << "                                         2. Bahadurpur Health Post (Bahadurpur) - complete\n";
		    cout << "                                         3. Ganeshpur Health Post (Ganeshpur) - complete\n";
		    cout << "                                         4. Singiya Health Post (Singiya) - complete\n";
		    cout << "                                         5. Sabaila Health Post (Sabaila) - complete\n";
		}
		else if (location == "janakpur (partly)" || location == "dhalkebar" || location == "mukhiyapatti" ||
		         location == "bhaudaha" || location == "aurahi")
		{
		    cout << "                                         1. Janakpur Health Post (Janakpur, partly) - half/partly\n";
		    cout << "                                         2. Dhalkebar Health Post (Dhalkebar) - complete\n";
		    cout << "                                         3. Mukhiyapatti Health Post (Mukhiyapatti) - complete\n";
		    cout << "                                         4. Bhaudaha Health Post (Bhaudaha) - complete\n";
		    cout << "                                         5. Aurahi Health Post (Aurahi) - complete\n";
		}
	}

	  	if(district == "mahottari"){
		if (location == "jaleshwar" || location == "ramgopalpur" || location == "bhangaha" ||
		    location == "mahottari" || location == "manara")
		{
		    cout << "                                         1. Jaleshwar District Hospital (Jaleshwar) - complete\n";
		    cout << "                                         2. Ramgopalpur Health Post (Ramgopalpur) - complete\n";
		    cout << "                                         3. Bhangaha Health Post (Bhangaha) - complete\n";
		    cout << "                                         4. Mahottari Health Post (Mahottari) - complete\n";
		    cout << "                                         5. Manara Health Post (Manara) - complete\n";
		}
		else if (location == "bairiya" || location == "samsi" || location == "sugauli" ||
		         location == "samsi (partly)" || location == "sugauli (partly)")
		{
		    cout << "                                         1. Bairiya Health Post (Bairiya) - complete\n";
		    cout << "                                         2. Samsi Health Post (Samsi) - complete\n";
		    cout << "                                         3. Sugauli Health Post (Sugauli) - complete\n";
		    cout << "                                         4. Samsi Health Post (Samsi, partly) - half/partly\n";
		    cout << "                                         5. Sugauli Health Post (Sugauli, partly) - half/partly\n";
		}
	}

	  	if(district == "parsa"){
		if (location == "birgunj" || location == "kalaiya" || location == "jhitkaiya" ||
		    location == "kushaha" || location == "pachraha")
		{
		    cout << "                                         1. Birgunj District Hospital (Birgunj) - complete\n";
		    cout << "                                         2. Kalaiya Health Post (Kalaiya) - complete\n";
		    cout << "                                         3. Jhitkaiya Health Post (Jhitkaiya) - complete\n";
		    cout << "                                         4. Kushaha Health Post (Kushaha) - complete\n";
		    cout << "                                         5. Pachraha Health Post (Pachraha) - complete\n";
		}
		else if (location == "gadhimai" || location == "parsauni" || location == "kolhabi" ||
		         location == "bishrampur" || location == "pachraha (partly)")
		{
		    cout << "                                         1. Gadhimai Health Post (Gadhimai) - complete\n";
		    cout << "                                         2. Parsauni Health Post (Parsauni) - complete\n";
		    cout << "                                         3. Kolhabi Health Post (Kolhabi) - complete\n";
		    cout << "                                         4. Bishrampur Health Post (Bishrampur) - complete\n";
		    cout << "                                         5. Pachraha Health Post (Pachraha, partly) - half/partly\n";
		}
	}

	  	if(district == "rautahat"){
		if (location == "gadhimai" || location == "bikram" || location == "bikram (partly)" ||
		    location == "bikram (partly)" || location == "bikram (partly)")
		{
		    cout << "                                         1. Gadhimai Health Post (Gadhimai) - complete\n";
		    cout << "                                         2. Bikram Health Post (Bikram) - complete\n";
		    cout << "                                         3. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         4. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         5. Bikram Health Post (Bikram, partly) - half/partly\n";
		}
		else if (location == "bikram (partly)" || location == "bikram (partly)" || location == "bikram (partly)")
		{
		    cout << "                                         1. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         2. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         3. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         4. Bikram Health Post (Bikram, partly) - half/partly\n";
		    cout << "                                         5. Bikram Health Post (Bikram, partly) - half/partly\n";
		}
	}

	    	if(district == "saptari"){
		if (location == "rajbiraj" || location == "kalyanpur" || location == "kalyanpur (partly)" ||
		    location == "kalyanpur (partly)" || location == "kalyanpur (partly)")
		{
		    cout << "                                         1. Rajbiraj Health Post (Rajbiraj) - complete\n";
		    cout << "                                         2. Kalyanpur Health Post (Kalyanpur) - complete\n";
		    cout << "                                         3. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		    cout << "                                         4. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		    cout << "                                         5. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		}
		else if (location == "kalyanpur (partly)" || location == "kalyanpur (partly)" || location == "kalyanpur (partly)")
		{
		    cout << "                                         1. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		    cout << "                                         2. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		    cout << "                                         3. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
		    cout << "                                         4. Kalyanpur Health Post (Kalyanpur, partly) - half/partly\n";
  } }

	  if(district == "baglung"){
    if (location == "baglung" || location == "dhorpatan" || location == "taman" || location == "butwal" || location == "bihadi") {
        cout << "1. Baglung District Hospital (Baglung) - complete\n";
        cout << "2. Dhorpatan Health Post (Dhorpatan) - complete\n";
        cout << "3. Taman Health Post (Taman) - complete\n";
        cout << "4. Butwal Health Post (Butwal) - complete\n";
        cout << "5. Bihadi Health Post (Bihadi) - complete\n";
    }
    else if (location == "niskhola" || location == "rishikhola" || location == "bhakunde" || location == "gurja" || location == "malika") {
        cout << "1. Nisikhola Health Post (Nisikhola) - complete\n";
        cout << "2. Rishikhola Health Post (Rishikhola) - complete\n";
        cout << "3. Bhakunde Health Post (Bhakunde) - complete\n";
        cout << "4. Gurja Health Post (Gurja) - complete\n";
        cout << "5. Malika Health Post (Malika) - complete\n";
    }
}

	  if(district == "gorkha"){
    if (location == "gorkha" || location == "palungtar" || location == "siddhartha" || location == "bhumlichowk" || location == "sundarbazar") {
        cout << "1. Gorkha District Hospital (Gorkha) - complete\n";
        cout << "2. Palungtar Health Post (Palungtar) - complete\n";
        cout << "3. Siddhartha Health Post (Siddhartha) - complete\n";
        cout << "4. Bhumlichowk Health Post (Bhumlichowk) - complete\n";
        cout << "5. Sundarbazar Health Post (Sundarbazar) - complete\n";
    }
    else if (location == "bihi" || location == "tadi" || location == "barpak" || location == "chhekampar" || location == "chumchet") {
        cout << "1. Bihi Health Post (Bihi) - complete\n";
        cout << "2. Tadi Health Post (Tadi) - complete\n";
        cout << "3. Barpak Health Post (Barpak) - complete\n";
        cout << "4. Chhekampar Health Post (Chhekampar) - complete\n";
        cout << "5. Chumchet Health Post (Chumchet) - complete\n";
    }
}

if(district == "kaski"){
    if (location == "pokhara" || location == "pokhara (partly)" || location == "bhadrakali" || location == "rupa" || location == "kushma") {
        cout << "1. Pokhara District Hospital (Pokhara) - complete\n";
        cout << "2. Pokhara Health Post (Pokhara, partly) - half/partly\n";
        cout << "3. Bhadrakali Health Post (Bhadrakali) - complete\n";
        cout << "4. Rupa Health Post (Rupa) - complete\n";
        cout << "5. Kushma Health Post (Kushma) - complete\n";
    }
    else if (location == "besisahar" || location == "chame" || location == "lamachaur" || location == "kushma (partly)" || location == "rishikesh") {
        cout << "1. Besisahar Health Post (Besisahar) - complete\n";
        cout << "2. Chame Health Post (Chame) - complete\n";
        cout << "3. Lamachaur Health Post (Lamachaur) - complete\n";
        cout << "4. Kushma Health Post (Kushma, partly) - half/partly\n";
        cout << "5. Rishikesh Health Post (Rishikesh) - complete\n";
    }
}

	  if(district == "lamjung"){
    if (location == "bhulbhule" || location == "besisahar" || location == "dhamilikuwa" || location == "kathmandu" || location == "kathmandu (partly)") {
        cout << "1. Bhulbhule Health Post (Bhulbhule) - complete\n";
        cout << "2. Besisahar Health Post (Besisahar) - complete\n";
        cout << "3. Dhamilikuwa Health Post (Dhamilikuwa) - complete\n";
        cout << "4. Kathmandu Health Post (Kathmandu) - complete\n";
        cout << "5. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
    }
    else if (location == "kathmandu (partly)" || location == "kathmandu (partly)" || location == "kathmandu (partly)" || location == "kathmandu (partly)" || location == "kathmandu (partly)") {
        cout << "1. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
        cout << "2. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
        cout << "3. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
        cout << "4. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
        cout << "5. Kathmandu Health Post (Kathmandu, partly) - half/partly\n";
    }
}

	  if(district == "manang"){
    if (location == "chame" || location == "chame (partly)" || location == "chame (partly)" || location == "chame (partly)" || location == "chame (partly)") {
        cout << "1. Chame Health Post (Chame) - complete\n";
        cout << "2. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "3. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "4. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "5. Chame Health Post (Chame, partly) - half/partly\n";
    }
    else if (location == "chame (partly)" || location == "chame (partly)" || location == "chame (partly)" || location == "chame (partly)" || location == "chame (partly)") {
        cout << "1. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "2. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "3. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "4. Chame Health Post (Chame, partly) - half/partly\n";
        cout << "5. Chame Health Post (Chame, partly) - half/partly\n";
    }
}

	  if(district == "mustang"){
    if (location == "jomsom" || location == "jomsom (partly)" || location == "jomsom (partly)" || location == "jomsom (partly)" || location == "jomsom (partly)") {
        cout << "1. Jomsom Health Post (Jomsom) - complete\n";
        cout << "2. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "3. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "4. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "5. Jomsom Health Post (Jomsom, partly) - half/partly\n";
    }
    else if (location == "jomsom (partly)" || location == "jomsom (partly)" || location == "jomsom (partly)" || location == "jomsom (partly)" || location == "jomsom (partly)") {
        cout << "1. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "2. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "3. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "4. Jomsom Health Post (Jomsom, partly) - half/partly\n";
        cout << "5. Jomsom Health Post (Jomsom, partly) - half/partly\n";
    }
}

	  if(district == "myagdi"){
    if (location == "beni" || location == "beni (partly)" || location == "beni (partly)" || location == "beni (partly)" || location == "beni (partly)") {
        cout << "1. Beni Health Post (Beni) - complete\n";
        cout << "2. Beni Health Post (Beni, partly) - half/partly\n";
        cout << "3. Beni Health Post (Beni, partly) - half/partly\n";
        cout << "4. Beni Health Post (Beni, partly) - half/partly\n";
        cout << "5. Beni Health Post (Beni)";
}}

if(district == "arghakhanchi"){
    if(location == "sandhikharka" || location == "bangad" || location == "panchebhatti" || location == "pipalchaur" || location == "khanchikot"){
        cout << "1. Sandhikharka District Hospital (Sandhikharka) - complete\n";
        cout << "2. Bangad Health Post (Bangad) - complete\n";
        cout << "3. Panchebhatti Health Post (Panchebhatti) - complete\n";
        cout << "4. Pipalchaur Health Post (Pipalchaur) - complete\n";
        cout << "5. Khanchikot Health Post (Khanchikot) - complete\n";
    }
    else if(location == "chhatrakot" || location == "kharphak" || location == "dibya" || location == "dibya (partly)" || location == "panchebhatti (partly)"){
        cout << "1. Chhatrakot Health Post (Chhatrakot) - complete\n";
        cout << "2. Kharphak Health Post (Kharphak) - complete\n";
        cout << "3. Dibya Health Post (Dibya) - complete\n";
        cout << "4. Dibya Health Post (Dibya, partly) - half/partly\n";
        cout << "5. Panchebhatti Health Post (Panchebhatti, partly) - half/partly\n";
    }
}
if(district == "banke"){
    if(location == "nepalgunj" || location == "rajapur" || location == "duduwa" || location == "kanchanpur" || location == "baijanath"){
        cout << "1. Nepalgunj District Hospital (Nepalgunj) - complete\n";
        cout << "2. Rajapur Health Post (Rajapur) - complete\n";
        cout << "3. Duduwa Health Post (Duduwa) - complete\n";
        cout << "4. Kanchanpur Health Post (Kanchanpur) - complete\n";
        cout << "5. Baijanath Health Post (Baijanath) - complete\n";
    }
    else if(location == "baijanath (partly)" || location == "gurahi" || location == "shikarpur" || location == "rajhena" || location == "gulariya"){
        cout << "1. Baijanath Health Post (Baijanath, partly) - half/partly\n";
        cout << "2. Gurahi Health Post (Gurahi) - complete\n";
        cout << "3. Shikarpur Health Post (Shikarpur) - complete\n";
        cout << "4. Rajhena Health Post (Rajhena) - complete\n";
        cout << "5. Gulariya Health Post (Gulariya) - complete\n";
    }
}
if(district == "bardiya"){
    if(location == "gulariya" || location == "babai" || location == "thakurdwara" || location == "badhikatti" || location == "kuhari"){
        cout << "1. Gulariya District Hospital (Gulariya) - complete\n";
        cout << "2. Babai Health Post (Babai) - complete\n";
        cout << "3. Thakurdwara Health Post (Thakurdwara) - complete\n";
        cout << "4. Badhikatti Health Post (Badhikatti) - complete\n";
        cout << "5. Kuhari Health Post (Kuhari) - complete\n";
    }
    else if(location == "kuhari (partly)" || location == "maharajgunj" || location == "geruwa" || location == "paraspur" || location == "babai (partly)"){
        cout << "1. Kuhari Health Post (Kuhari, partly) - half/partly\n";
        cout << "2. Maharajgunj Health Post (Maharajgunj) - complete\n";
        cout << "3. Geruwa Health Post (Geruwa) - complete\n";
        cout << "4. Paraspur Health Post (Paraspur) - complete\n";
        cout << "5. Babai Health Post (Babai, partly) - half/partly\n";
    }
}
if(district == "dang"){
    if(location == "ghorahi" || location == "tulsipur" || location == "lamahi" || location == "rapti" || location == "bhagawati"){
        cout << "1. Ghorahi District Hospital (Ghorahi) - complete\n";
        cout << "2. Tulsipur Health Post (Tulsipur) - complete\n";
        cout << "3. Lamahi Health Post (Lamahi) - complete\n";
        cout << "4. Rapti Health Post (Rapti) - complete\n";
        cout << "5. Bhagawati Health Post (Bhagawati) - complete\n";
    }
    else if(location == "rapti (partly)" || location == "bhagawati (partly)" || location == "banglachuli" || location == "jhimruk" || location == "banglachuli (partly)"){
        cout << "1. Rapti Health Post (Rapti, partly) - half/partly\n";
        cout << "2. Bhagawati Health Post (Bhagawati, partly) - half/partly\n";
        cout << "3. Banglachuli Health Post (Banglachuli) - complete\n";
        cout << "4. Jhimruk Health Post (Jhimruk) - complete\n";
        cout << "5. Banglachuli Health Post (Banglachuli, partly) - half/partly\n";
    }
}
if(district == "gulmi"){
    if(location == "tamghas" || location == "resunga" || location == "musikot" || location == "sirsekot" || location == "ghartigaun"){
        cout << "1. Tamghas District Hospital (Tamghas) - complete\n";
        cout << "2. Resunga Health Post (Resunga) - complete\n";
        cout << "3. Musikot Health Post (Musikot) - complete\n";
        cout << "4. Sirsekot Health Post (Sirsekot) - complete\n";
        cout << "5. Ghartigaun Health Post (Ghartigaun) - complete\n";
    }
    else if(location == "ghartigaun (partly)" || location == "chhatraghat" || location == "kawaban" || location == "bikhara" || location == "sirsekot (partly)"){
        cout << "1. Ghartigaun Health Post (Ghartigaun, partly) - half/partly\n";
        cout << "2. Chhatraghat Health Post (Chhatraghat) - complete\n";
        cout << "3. Kawaban Health Post (Kawaban) - complete\n";
        cout << "4. Bikhara Health Post (Bikhara) - complete\n";
        cout << "5. Sirsekot Health Post (Sirsekot, partly) - half/partly\n";
    }
}
if(district == "kapilvastu"){
    if(location == "taulihawa" || location == "buddhabhumi" || location == "banganga" || location == "shivapur" || location == "gotihawa"){
        cout << "1. Taulihawa District Hospital (Taulihawa) - complete\n";
        cout << "2. Buddhabhumi Health Post (Buddhabhumi) - complete\n";
        cout << "3. Banganga Health Post (Banganga) - complete\n";
        cout << "4. Shivapur Health Post (Shivapur) - complete\n";
        cout << "5. Gotihawa Health Post (Gotihawa) - complete\n";
    }
    else if(location == "gotihawa (partly)" || location == "banganga (partly)" || location == "buddhabhumi (partly)" || location == "shivapur (partly)" || location == "taulihawa (partly)"){
        cout << "1. Gotihawa Health Post (Gotihawa, partly) - half/partly\n";
        cout << "2. Banganga Health Post (Banganga, partly) - half/partly\n";
        cout << "3. Buddhabhumi Health Post (Buddhabhumi, partly) - half/partly\n";
        cout << "4. Shivapur Health Post (Shivapur, partly) - half/partly\n";
        cout << "5. Taulihawa Health Post (Taulihawa, partly) - half/partly\n";
    }
}
if(district == "parasi"){
    if(location == "bardaghat" || location == "sunwal" || location == "ramgram" || location == "butwal" || location == "mahalakshmi"){
        cout << "1. Bardaghat Health Post (Bardaghat) - complete\n";
        cout << "2. Sunwal Health Post (Sunwal) - complete\n";
        cout << "3. Ramgram Health Post (Ramgram) - complete\n";
        cout << "4. Butwal Health Post (Butwal) - complete\n";
        cout << "5. Mahalakshmi Health Post (Mahalakshmi) - complete\n";
    }
    else if(location == "sunwal (partly)" || location == "ramgram (partly)" || location == "bardaghat (partly)" || location == "mahalakshmi (partly)" || location == "butwal (partly)"){
        cout << "1. Sunwal Health Post (Sunwal, partly) - half/partly\n";
        cout << "2. Ramgram Health Post (Ramgram, partly) - half/partly\n";
        cout << "3. Bardaghat Health Post (Bardaghat, partly) - half/partly\n";
        cout << "4. Mahalakshmi Health Post (Mahalakshmi, partly) - half/partly\n";
        cout << "5. Butwal Health Post (Butwal, partly) - half/partly\n";
    }
}
if(district == "palpa"){
    if(location == "tansen" || location == "rumi" || location == "kotdarbar" || location == "sital" || location == "rampur"){
        cout << "1. Tansen District Hospital (Tansen) - complete\n";
        cout << "2. Rumi Health Post (Rumi) - complete\n";
        cout << "3. Kotdarbar Health Post (Kotdarbar) - complete\n";
        cout << "4. Sital Health Post (Sital) - complete\n";
        cout << "5. Rampur Health Post (Rampur) - complete\n";
    }
    else if(location == "sital (partly)" || location == "rampur (partly)" || location == "rumi (partly)" || location == "kotdarbar (partly)" || location == "tansen (partly)"){
        cout << "1. Sital Health Post (Sital, partly) - half/partly\n";
        cout << "2. Rampur Health Post (Rampur, partly) - half/partly\n";
        cout << "3. Rumi Health Post (Rumi, partly) - half/partly\n";
        cout << "4. Kotdarbar Health Post (Kotdarbar, partly) - half/partly\n";
        cout << "5. Tansen Health Post (Tansen, partly) - half/partly\n";
    }
}
if(district == "pyuthan"){
    if(location == "pyuthan" || location == "gauradaha" || location == "paudwar" || location == "khade" || location == "bijuwar"){
        cout << "1. Pyuthan District Hospital (Pyuthan) - complete\n";
        cout << "2. Gauradaha Health Post (Gauradaha) - complete\n";
        cout << "3. Paudwar Health Post (Paudwar) - complete\n";
        cout << "4. Khade Health Post (Khade) - complete\n";
        cout << "5. Bijuwar Health Post (Bijuwar) - complete\n";
    }
    else if(location == "bijuwar (partly)" || location == "khade (partly)" || location == "paudwar (partly)" || location == "gauradaha (partly)" || location == "pyuthan (partly)"){
        cout << "1. Bijuwar Health Post (Bijuwar, partly) - half/partly\n";
        cout << "2. Khade Health Post (Khade, partly) - half/partly\n";
        cout << "3. Paudwar Health Post (Paudwar, partly) - half/partly\n";
        cout << "4. Gauradaha Health Post (Gauradaha, partly) - half/partly\n";
        cout << "5. Pyuthan Health Post (Pyuthan, partly) - half/partly\n";
    }
}
if(district == "rolpa"){
    if(location == "libang" || location == "rolpa" || location == "musikot" || location == "jang" || location == "liwang"){
        cout << "1. Libang Health Post (Libang) - complete\n";
        cout << "2. Rolpa District Hospital (Rolpa) - complete\n";
        cout << "3. Musikot Health Post (Musikot) - complete\n";
        cout << "4. Jang Health Post (Jang) - complete\n";
        cout << "5. Liwang Health Post (Liwang) - complete\n";
    }
    else if(location == "liwang (partly)" || location == "jang (partly)" || location == "musikot (partly)" || location == "rolpa (partly)" || location == "libang (partly)"){
        cout << "1. Liwang Health Post (Liwang, partly) - half/partly\n";
        cout << "2. Jang Health Post (Jang, partly) - half/partly\n";
        cout << "3. Musikot Health Post (Musikot, partly) - half/partly\n";
        cout << "4. Rolpa Health Post (Rolpa, partly) - half/partly\n";
        cout << "5. Libang Health Post (Libang, partly) - half/partly\n";
    }
}
if(district == "rukum east"){
    if(location == "lamjung" || location == "puskhar" || location == "simta" || location == "chodkha" || location == "rukum"){
        cout << "1. Lamjung Health Post (Lamjung) - complete\n";
        cout << "2. Puskhar Health Post (Puskhar) - complete\n";
        cout << "3. Simta Health Post (Simta) - complete\n";
        cout << "4. Chodkha Health Post (Chodkha) - complete\n";
        cout << "5. Rukum District Hospital (Rukum) - complete\n";
    }
    else if(location == "rukum (partly)" || location == "chodkha (partly)" || location == "simta (partly)" || location == "puskhar (partly)" || location == "lamjung (partly)"){
        cout << "1. Rukum Health Post (Rukum, partly) - half/partly\n";
        cout << "2. Chodkha Health Post (Chodkha, partly) - half/partly\n";
        cout << "3. Simta Health Post (Simta, partly) - half/partly\n";
        cout << "4. Puskhar Health Post (Puskhar, partly) - half/partly\n";
        cout << "5. Lamjung Health Post (Lamjung, partly) - half/partly\n";
    }
}
if(district == "rupandehi"){
    if(location == "butwal" || location == "siddharthanagar" || location == "sainamaina" || location == "devdaha" || location == "banghawa"){
        cout << "1. Butwal District Hospital (Butwal) - complete\n";
        cout << "2. Siddharthanagar Health Post (Siddharthanagar) - complete\n";
        cout << "3. Sainamaina Health Post (Sainamaina) - complete\n";
        cout << "4. Devdaha Health Post (Devdaha) - complete\n";
        cout << "5. Banghawa Health Post (Banghawa) - complete\n";
    }
    else if(location == "banghawa (partly)" || location == "gajedi" || location == "lumbini" || location == "butwal (partly)" || location == "sainamaina (partly)"){
        cout << "1. Banghawa Health Post (Banghawa, partly) - half/partly\n";
        cout << "2. Gajedi Health Post (Gajedi) - complete\n";
        cout << "3. Lumbini Health Post (Lumbini) - complete\n";
        cout << "4. Butwal Health Post (Butwal, partly) - half/partly\n";
        cout << "5. Sainamaina Health Post (Sainamaina, partly) - half/partly\n";
    }
}
if(district == "dailekh"){
    if(location == "dailekh" || location == "dullu" || location == "narayan" || location == "bhairabi" || location == "thantikandh"){
        cout << "1. Dailekh District Hospital (Dailekh) - complete\n";
        cout << "2. Dullu Health Post (Dullu) - complete\n";
        cout << "3. Narayan Health Post (Narayan) - complete\n";
        cout << "4. Bhairabi Health Post (Bhairabi) - complete\n";
        cout << "5. Thantikandh Health Post (Thantikandh) - complete\n";
    }
    else if(location == "thantikandh (partly)" || location == "narayan (partly)" || location == "dullu (partly)" || location == "dailekh (partly)" || location == "bhairabi (partly)"){
        cout << "1. Thantikandh Health Post (Thantikandh, partly) - half/partly\n";
        cout << "2. Narayan Health Post (Narayan, partly) - half/partly\n";
        cout << "3. Dullu Health Post (Dullu, partly) - half/partly\n";
        cout << "4. Dailekh Health Post (Dailekh, partly) - half/partly\n";
        cout << "5. Bhairabi Health Post (Bhairabi, partly) - half/partly\n";
    }
}
if(district == "dolpa"){
    if(location == "dunai" || location == "juphal" || location == "thuli" || location == "shey" || location == "chharka"){
        cout << "1. Dunai Health Post (Dunai) - complete\n";
        cout << "2. Juphal Health Post (Juphal) - complete\n";
        cout << "3. Thuli Health Post (Thuli) - complete\n";
        cout << "4. Shey Health Post (Shey) - complete\n";
        cout << "5. Chharka Health Post (Chharka) - complete\n";
    }
    else if(location == "chharka (partly)" || location == "shey (partly)" || location == "thuli (partly)" || location == "juphal (partly)" || location == "dunai (partly)"){
        cout << "1. Chharka Health Post (Chharka, partly) - half/partly\n";
        cout << "2. Shey Health Post (Shey, partly) - half/partly\n";
        cout << "3. Thuli Health Post (Thuli, partly) - half/partly\n";
        cout << "4. Juphal Health Post (Juphal, partly) - half/partly\n";
        cout << "5. Dunai Health Post (Dunai, partly) - half/partly\n";
    }
}
if(district == "humla"){
    if(location == "simikot" || location == "dhuli" || location == "namkha" || location == "kharpunath" || location == "adanchuli"){
        cout << "1. Simikot District Hospital (Simikot) - complete\n";
        cout << "2. Dhuli Health Post (Dhuli) - complete\n";
        cout << "3. Namkha Health Post (Namkha) - complete\n";
        cout << "4. Kharpunath Health Post (Kharpunath) - complete\n";
        cout << "5. Adanchuli Health Post (Adanchuli) - complete\n";
    }
    else if(location == "adanchuli (partly)" || location == "kharpunath (partly)" || location == "namkha (partly)" || location == "dhuli (partly)" || location == "simikot (partly)"){
        cout << "1. Adanchuli Health Post (Adanchuli, partly) - half/partly\n";
        cout << "2. Kharpunath Health Post (Kharpunath, partly) - half/partly\n";
        cout << "3. Namkha Health Post (Namkha, partly) - half/partly\n";
        cout << "4. Dhuli Health Post (Dhuli, partly) - half/partly\n";
        cout << "5. Simikot Health Post (Simikot, partly) - half/partly\n";
    }
}
if(district == "jajarkot"){
    if(location == "khalanga" || location == "mahal" || location == "bheri" || location == "rasuwa" || location == "sani"){
        cout << "1. Khalanga District Hospital (Khalanga) - complete\n";
        cout << "2. Mahal Health Post (Mahal) - complete\n";
        cout << "3. Bheri Health Post (Bheri) - complete\n";
        cout << "4. Rasuwa Health Post (Rasuwa) - complete\n";
        cout << "5. Sani Health Post (Sani) - complete\n";
    }
    else if(location == "sani (partly)" || location == "rasuwa (partly)" || location == "bheri (partly)" || location == "mahal (partly)" || location == "khalanga (partly)"){
        cout << "1. Sani Health Post (Sani, partly) - half/partly\n";
        cout << "2. Rasuwa Health Post (Rasuwa, partly) - half/partly\n";
        cout << "3. Bheri Health Post (Bheri, partly) - half/partly\n";
        cout << "4. Mahal Health Post (Mahal, partly) - half/partly\n";
        cout << "5. Khalanga Health Post (Khalanga, partly) - half/partly\n";
    }
}
if(district == "jumla"){
    if(location == "jumla" || location == "patarasi" || location == "khajura" || location == "mugu" || location == "sinja"){
        cout << "1. Jumla District Hospital (Jumla) - complete\n";
        cout << "2. Patarasi Health Post (Patarasi) - complete\n";
        cout << "3. Khajura Health Post (Khajura) - complete\n";
        cout << "4. Mugu Health Post (Mugu) - complete\n";
        cout << "5. Sinja Health Post (Sinja) - complete\n";
    }
    else if(location == "sinja (partly)" || location == "mugu (partly)" || location == "khajura (partly)" || location == "patarasi (partly)" || location == "jumla (partly)"){
        cout << "1. Sinja Health Post (Sinja, partly) - half/partly\n";
        cout << "2. Mugu Health Post (Mugu, partly) - half/partly\n";
        cout << "3. Khajura Health Post (Khajura, partly) - half/partly\n";
        cout << "4. Patarasi Health Post (Patarasi, partly) - half/partly\n";
        cout << "5. Jumla Health Post (Jumla, partly) - half/partly\n";
    }
}
if(district == "kalikot"){
    if(location == "manma" || location == "pachaljharan" || location == "shubha" || location == "dharmasala" || location == "rasuwa"){
        cout << "1. Manma District Hospital (Manma) - complete\n";
        cout << "2. Pachaljharan Health Post (Pachaljharan) - complete\n";
        cout << "3. Shubha Health Post (Shubha) - complete\n";
        cout << "4. Dharmasala Health Post (Dharmasala) - complete\n";
        cout << "5. Rasuwa Health Post (Rasuwa) - complete\n";
    }
    else if(location == "rasuwa (partly)" || location == "dharmasala (partly)" || location == "shubha (partly)" || location == "pachaljharan (partly)" || location == "manma (partly)"){
        cout << "1. Rasuwa Health Post (Rasuwa, partly) - half/partly\n";
        cout << "2. Dharmasala Health Post (Dharmasala, partly) - half/partly\n";
        cout << "3. Shubha Health Post (Shubha, partly) - half/partly\n";
        cout << "4. Pachaljharan Health Post (Pachaljharan, partly) - half/partly\n";
        cout << "5. Manma Health Post (Manma, partly) - half/partly\n";
    }
}
if(district == "mugu"){
    if(location == "murma" || location == "chhayanath" || location == "tilagufa" || location == "khalanga" || location == "kaurija"){
        cout << "1. Murma Health Post (Murma) - complete\n";
        cout << "2. Chhayanath Health Post (Chhayanath) - complete\n";
        cout << "3. Tilagufa Health Post (Tilagufa) - complete\n";
        cout << "4. Khalanga Health Post (Khalanga) - complete\n";
        cout << "5. Kaurija Health Post (Kaurija) - complete\n";
    }
    else if(location == "kaurija (partly)" || location == "khalanga (partly)" || location == "tilagufa (partly)" || location == "chhayanath (partly)" || location == "murma (partly)"){
        cout << "1. Kaurija Health Post (Kaurija, partly) - half/partly\n";
        cout << "2. Khalanga Health Post (Khalanga, partly) - half/partly\n";
        cout << "3. Tilagufa Health Post (Tilagufa, partly) - half/partly\n";
        cout << "4. Chhayanath Health Post (Chhayanath, partly) - half/partly\n";
        cout << "5. Murma Health Post (Murma, partly) - half/partly\n";
    }
}
if(district == "rukum west"){
    if(location == "musikot" || location == "chaurjahari" || location == "sani" || location == "lamjung" || location == "simta"){
        cout << "1. Musikot Health Post (Musikot) - complete\n";
        cout << "2. Chaurjahari Health Post (Chaurjahari) - complete\n";
        cout << "3. Sani Health Post (Sani) - complete\n";
        cout << "4. Lamjung Health Post (Lamjung) - complete\n";
        cout << "5. Simta Health Post (Simta) - complete\n";
    }
    else if(location == "simta (partly)" || location == "lamjung (partly)" || location == "sani (partly)" || location == "chaurjahari (partly)" || location == "musikot (partly)"){
        cout << "1. Simta Health Post (Simta, partly) - half/partly\n";
        cout << "2. Lamjung Health Post (Lamjung, partly) - half/partly\n";
        cout << "3. Sani Health Post (Sani, partly) - half/partly\n";
        cout << "4. Chaurjahari Health Post (Chaurjahari, partly) - half/partly\n";
        cout << "5. Musikot Health Post (Musikot, partly) - half/partly\n";
    }
}
if(district == "salyan"){
    if(location == "salyan" || location == "bagchaur" || location == "kumarwarti" || location == "chalna" || location == "harpan"){
        cout << "1. Salyan District Hospital (Salyan) - complete\n";
        cout << "2. Bagchaur Health Post (Bagchaur) - complete\n";
        cout << "3. Kumarwarti Health Post (Kumarwarti) - complete\n";
        cout << "4. Chalna Health Post (Chalna) - complete\n";
        cout << "5. Harpan Health Post (Harpan) - complete\n";
    }
    else if(location == "harpan (partly)" || location == "chalna (partly)" || location == "kumarwarti (partly)" || location == "bagchaur (partly)" || location == "salyan (partly)"){
        cout << "1. Harpan Health Post (Harpan, partly) - half/partly\n";
        cout << "2. Chalna Health Post (Chalna, partly) - half/partly\n";
        cout << "3. Kumarwarti Health Post (Kumarwarti, partly) - half/partly\n";
        cout << "4. Bagchaur Health Post (Bagchaur, partly) - half/partly\n";
        cout << "5. Salyan Health Post (Salyan, partly) - half/partly\n";
    }
}
if(district == "surkhet"){
    if(location == "birendranagar" || location == "chaukune" || location == "ghorahi" || location == "bheriganga" || location == "simta"){
        cout << "1. Birendranagar District Hospital (Birendranagar) - complete\n";
        cout << "2. Chaukune Health Post (Chaukune) - complete\n";
        cout << "3. Ghorahi Health Post (Ghorahi) - complete\n";
        cout << "4. Bheriganga Health Post (Bheriganga) - complete\n";
        cout << "5. Simta Health Post (Simta) - complete\n";
    }
    else if(location == "simta (partly)" || location == "bheriganga (partly)" || location == "ghorahi (partly)" || location == "chaukune (partly)" || location == "birendranagar (partly)"){
        cout << "1. Simta Health Post (Simta, partly) - half/partly\n";
        cout << "2. Bheriganga Health Post (Bheriganga, partly) - half/partly\n";
        cout << "3. Ghorahi Health Post (Ghorahi, partly) - half/partly\n";
        cout << "4. Chaukune Health Post (Chaukune, partly) - half/partly\n";
        cout << "5. Birendranagar Health Post (Birendranagar, partly) - half/partly\n";
    }
}
if(district == "achham"){
    if(location == "mangalsen" || location == "kamalbazar" || location == "chamunda" || location == "kahalle" || location == "dhakari"){
        cout << "1. Mangalsen District Hospital (Mangalsen) - complete\n";
        cout << "2. Kamalbazar Health Post (Kamalbazar) - complete\n";
        cout << "3. Chamunda Health Post (Chamunda) - complete\n";
        cout << "4. Kahalle Health Post (Kahalle) - complete\n";
        cout << "5. Dhakari Health Post (Dhakari) - complete\n";
    }
    else if(location == "dhakari (partly)" || location == "kahalle (partly)" || location == "chamunda (partly)" || location == "kamalbazar (partly)" || location == "mangalsen (partly)"){
        cout << "1. Dhakari Health Post (Dhakari, partly) - half/partly\n";
        cout << "2. Kahalle Health Post (Kahalle, partly) - half/partly\n";
        cout << "3. Chamunda Health Post (Chamunda, partly) - half/partly\n";
        cout << "4. Kamalbazar Health Post (Kamalbazar, partly) - half/partly\n";
        cout << "5. Mangalsen Health Post (Mangalsen, partly) - half/partly\n";
    }
}
if(district == "baitadi"){
    if(location == "baitadi" || location == "dadeldhura" || location == "phulbari" || location == "patan" || location == "sigas"){
        cout << "1. Baitadi District Hospital (Baitadi) - complete\n";
        cout << "2. Dadeldhura Health Post (Dadeldhura) - complete\n";
        cout << "3. Phulbari Health Post (Phulbari) - complete\n";
        cout << "4. Patan Health Post (Patan) - complete\n";
        cout << "5. Sigas Health Post (Sigas) - complete\n";
    }
    else if(location == "sigas (partly)" || location == "patan (partly)" || location == "phulbari (partly)" || location == "dadeldhura (partly)" || location == "baitadi (partly)"){
        cout << "1. Sigas Health Post (Sigas, partly) - half/partly\n";
        cout << "2. Patan Health Post (Patan, partly) - half/partly\n";
        cout << "3. Phulbari Health Post (Phulbari, partly) - half/partly\n";
        cout << "4. Dadeldhura Health Post (Dadeldhura, partly) - half/partly\n";
        cout << "5. Baitadi Health Post (Baitadi, partly) - half/partly\n";
    }
}
if(district == "bajhang"){
    if(location == "jangada" || location == "bajhang" || location == "dhurung" || location == "rith" || location == "dehimandu"){
        cout << "1. Jangada Health Post (Jangada) - complete\n";
        cout << "2. Bajhang District Hospital (Bajhang) - complete\n";
        cout << "3. Dhurung Health Post (Dhurung) - complete\n";
        cout << "4. Rith Health Post (Rith) - complete\n";
        cout << "5. Dehimandu Health Post (Dehimandu) - complete\n";
    }
    else if(location == "dehimandu (partly)" || location == "rith (partly)" || location == "dhurung (partly)" || location == "bajhang (partly)" || location == "jangada (partly)"){
        cout << "1. Dehimandu Health Post (Dehimandu, partly) - half/partly\n";
        cout << "2. Rith Health Post (Rith, partly) - half/partly\n";
        cout << "3. Dhurung Health Post (Dhurung, partly) - half/partly\n";
        cout << "4. Bajhang Health Post (Bajhang, partly) - half/partly\n";
        cout << "5. Jangada Health Post (Jangada, partly) - half/partly\n";
    }
}
if(district == "bajura"){
    if(location == "martadi" || location == "bajura" || location == "khap" || location == "rasuwa" || location == "ghusa"){
        cout << "1. Martadi District Hospital (Martadi) - complete\n";
        cout << "2. Bajura Health Post (Bajura) - complete\n";
        cout << "3. Khap Health Post (Khap) - complete\n";
        cout << "4. Rasuwa Health Post (Rasuwa) - complete\n";
        cout << "5. Ghusa Health Post (Ghusa) - complete\n";
    }
    else if(location == "ghusa (partly)" || location == "rasuwa (partly)" || location == "khap (partly)" || location == "bajura (partly)" || location == "martadi (partly)"){
        cout << "1. Ghusa Health Post (Ghusa, partly) - half/partly\n";
        cout << "2. Rasuwa Health Post (Rasuwa, partly) - half/partly\n";
        cout << "3. Khap Health Post (Khap, partly) - half/partly\n";
        cout << "4. Bajura Health Post (Bajura, partly) - half/partly\n";
        cout << "5. Martadi Health Post (Martadi, partly) - half/partly\n";
    }
}
if(district == "dadeldhura"){
    if(location == "dadeldhura" || location == "amargadhi" || location == "alagada" || location == "nawadurga" || location == "bhageshwar"){
        cout << "1. Dadeldhura District Hospital (Dadeldhura) - complete\n";
        cout << "2. Amargadhi Health Post (Amargadhi) - complete\n";
        cout << "3. Alagada Health Post (Alagada) - complete\n";
        cout << "4. Nawadurga Health Post (Nawadurga) - complete\n";
        cout << "5. Bhageshwar Health Post (Bhageshwar) - complete\n";
    }
    else if(location == "bhageshwar (partly)" || location == "nawadurga (partly)" || location == "alagada (partly)" || location == "amargadhi (partly)" || location == "dadeldhura (partly)"){
        cout << "1. Bhageshwar Health Post (Bhageshwar, partly) - half/partly\n";
        cout << "2. Nawadurga Health Post (Nawadurga, partly) - half/partly\n";
        cout << "3. Alagada Health Post (Alagada, partly) - half/partly\n";
        cout << "4. Amargadhi Health Post (Amargadhi, partly) - half/partly\n";
        cout << "5. Dadeldhura Health Post (Dadeldhura, partly) - half/partly\n";
    }
}
if(district == "darchula"){
    if(location == "darchula" || location == "malikarjun" || location == "mahabir" || location == "jangada" || location == "sipat"){
        cout << "1. Darchula District Hospital (Darchula) - complete\n";
        cout << "2. Malikarjun Health Post (Malikarjun) - complete\n";
        cout << "3. Mahabir Health Post (Mahabir) - complete\n";
        cout << "4. Jangada Health Post (Jangada) - complete\n";
        cout << "5. Sipat Health Post (Sipat) - complete\n";
    }
    else if(location == "sipat (partly)" || location == "jangada (partly)" || location == "mahabir (partly)" || location == "malikarjun (partly)" || location == "darchula (partly)"){
        cout << "1. Sipat Health Post (Sipat, partly) - half/partly\n";
        cout << "2. Jangada Health Post (Jangada, partly) - half/partly\n";
        cout << "3. Mahabir Health Post (Mahabir, partly) - half/partly\n";
        cout << "4. Malikarjun Health Post (Malikarjun, partly) - half/partly\n";
        cout << "5. Darchula Health Post (Darchula, partly) - half/partly\n";
    }
}
if(district == "doti"){
    if(location == "dipayal" || location == "dharmanagar" || location == "jhund" || location == "khalanga" || location == "shikharpur"){
        cout << "1. Dipayal District Hospital (Dipayal) - complete\n";
        cout << "2. Dharmanagar Health Post (Dharmanagar) - complete\n";
        cout << "3. Jhund Health Post (Jhund) - complete\n";
        cout << "4. Khalanga Health Post (Khalanga) - complete\n";
        cout << "5. Shikharpur Health Post (Shikharpur) - complete\n";
    }
    else if(location == "shikharpur (partly)" || location == "khalanga (partly)" || location == "jhund (partly)" || location == "dharmanagar (partly)" || location == "dipayal (partly)"){
        cout << "1. Shikharpur Health Post (Shikharpur, partly) - half/partly\n";
        cout << "2. Khalanga Health Post (Khalanga, partly) - half/partly\n";
        cout << "3. Jhund Health Post (Jhund, partly) - half/partly\n";
        cout << "4. Dharmanagar Health Post (Dharmanagar, partly) - half/partly\n";
        cout << "5. Dipayal Health Post (Dipayal, partly) - half/partly\n";
    }
}
if(district == "kailali"){
    if(location == "dhangadhi" || location == "tuleshwar" || location == "ghodaghodi" || location == "mahendranagar" || location == "bhajani"){
        cout << "1. Dhangadhi District Hospital (Dhangadhi) - complete\n";
        cout << "2. Tuleshwar Health Post (Tuleshwar) - complete\n";
        cout << "3. Ghodaghodi Health Post (Ghodaghodi) - complete\n";
        cout << "4. Mahendranagar Health Post (Mahendranagar) - complete\n";
        cout << "5. Bhajani Health Post (Bhajani) - complete\n";
    }
    else if(location == "bhajani (partly)" || location == "mahendranagar (partly)" || location == "ghodaghodi (partly)" || location == "tuleshwar (partly)" || location == "dhangadhi (partly)"){
        cout << "1. Bhajani Health Post (Bhajani, partly) - half/partly\n";
        cout << "2. Mahendranagar Health Post (Mahendranagar, partly) - half/partly\n";
        cout << "3. Ghodaghodi Health Post (Ghodaghodi, partly) - half/partly\n";
        cout << "4. Tuleshwar Health Post (Tuleshwar, partly) - half/partly\n";
        cout << "5. Dhangadhi Health Post (Dhangadhi, partly) - half/partly\n";
    }
}
if(district == "kanchanpur"){
    if(location == "mahendranagar" || location == "bedkot" || location == "shuklaphanta" || location == "dhangadhi" || location == "krishnapur"){
        cout << "1. Mahendranagar District Hospital (Mahendranagar) - complete\n";
        cout << "2. Bedkot Health Post (Bedkot) - complete\n";
        cout << "3. Shuklaphanta Health Post (Shuklaphanta) - complete\n";
        cout << "4. Dhangadhi Health Post (Dhangadhi) - complete\n";
        cout << "5. Krishnapur Health Post (Krishnapur) - complete\n";
    }
    else if(location == "krishnapur (partly)" || location == "dhangadhi (partly)" || location == "shuklaphanta (partly)" || location == "bedkot (partly)" || location == "mahendranagar (partly)"){
        cout << "1. Krishnapur Health Post (Krishnapur, partly) - half/partly\n";
        cout << "2. Dhangadhi Health Post (Dhangadhi, partly) - half/partly\n";
        cout << "3. Shuklaphanta Health Post (Shuklaphanta, partly) - half/partly\n";
        cout << "4. Bedkot Health Post (Bedkot, partly) - half/partly\n";
        cout << "5. Mahendranagar Health Post (Mahendranagar, partly) - half/partly\n";
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
