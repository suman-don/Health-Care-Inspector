#ifndef CLS_H
#define CLS_H

#include <iostream>
#include <utility>
#include <sstream>
#include <windows.h>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
class Welcome{
	public:
		void welcomePage();
};

class detail {
public:
    string name, date, contact, severity, gender, address;
    string symptom;
    int duration, age;
    int count = 0;
    string suggestionName;

    //------- Data Collection ---------
    void collectdata();
    void detectingAnimation();

    //---------- Health Info -------------
    pair<string,float> healthinfo1();
    pair<string,float> healthinfo2();
    pair<string,float> healthinfo3();
    void result1(pair<string,float> best);
	void result2(pair<string,float> best);
	void result3(pair<string,float> best);   

    //---------- Suggestion -------------
    void suggestion1(pair<string,float> best);
    void suggestion2(pair<string,float> best);
    void suggestion3(pair<string,float> best);
    
    //---------- Money ----------------
    void money1(pair<string,float> best);
    void money2(pair<string,float> best);
    void money3(pair<string,float> best);
    
    //--------- Patient detail record ----------
    
    //--------- Add Record -------------------
      void addRecord(pair<string,float> best) {
      	suggestionName = best.first;
        ofstream outfile("patientHistory.txt", ios::app);
        if (!outfile) {
            cout << "Unable to open file.\n";
            return;
        }

        // Use | as delimiter to handle spaces
        outfile << name << "|" << age << "|" << gender << "|" << address << "|" 
                << contact << "|" << suggestionName << "|" << date << endl;
        outfile.close();

    }
    
    //--------- Show Record ----------------

    void showRecord() {
    	
        ifstream infile("patientHistory.txt");
        if (!infile) {
            cout << "Unable to open file or no records exist.\n";
            return;
        }

        string line;
        cout << "\n                   --- Patient Records ---\n";

        while (getline(infile, line)) {
            stringstream ss(line);
            string readName, readGender, readAddress, readNumber, readIll, readDate;
            string ageStr;
            int readAge;

            // Split fields by '|'
            getline(ss, readName, '|');
            getline(ss, ageStr, '|');

            stringstream convert(ageStr);
            convert >> readAge;

            getline(ss, readGender, '|');
            getline(ss, readAddress, '|');
            getline(ss, readNumber, '|');
            getline(ss, readIll, '|');
            getline(ss, readDate, '|');
         
		 //-------- Alining Space -----------------------   
        	int namelength = readName.length();
 	        int agelength = (readAge == 0) ? 1 : (int)log10(readAge) + 1;
 	        int genderlength = readGender.length();
 	        int addresslength = readAddress.length();
 	        int numberlength = readNumber.length();
	        int illlength = readIll.length();
 	        int datelength = readDate.length();
            cout<<endl;
          cout<<"    --------------------------------------------------------------------------------------------------------------" << endl;
        	cout<<"   |   Field                |           Details                                                                   |"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Full Name            |           "<<readName<<setw(75-namelength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Age                  |           "<<readAge<<setw(75-agelength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Gender               |           "<<readGender<<setw(75-genderlength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Address              |           "<<readAddress<<setw(75-addresslength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Contact Number       |           "<<readNumber<<setw(75-numberlength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Illness              |           "<<readIll<<setw(75-illlength)<<"|"<<endl;
 	        cout<<"   |------------------------|-------------------------------------------------------------------------------------|"<<endl;
 	        cout<<"   |   Date                 |           "<<readDate<<setw(75-datelength)<<"|"<<endl;
 	        cout<<"    --------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"  ---------------------------------------------------------------------------------------------------------------------\n" << endl;
        }

        infile.close();

    }
    
     void searchRecord() {
    string searchName;
    cout << "Enter patient name to search: ";
    cin.ignore(); // Clear buffer if needed
    getline(cin, searchName);

    ifstream infile("patientHistory.txt");
    if (!infile) {
        cout << "Unable to open file.\n";
        return;
    }

    string line;
    bool found = false;
    while (getline(infile, line)) {
        stringstream ss(line);
        string readName, readGender, readAddress, readNumber, readIll, readDate;
        string ageStr;
        int readAge;

        // Split fields by '|'
        getline(ss, readName, '|');
        getline(ss, ageStr, '|');
        stringstream(ageStr) >> readAge;
        getline(ss, readGender, '|');
        getline(ss, readAddress, '|');
        getline(ss, readNumber, '|');
        getline(ss, readIll, '|');
        getline(ss, readDate, '|');

        if (readName == searchName) {
            found = true;

             cout<<"    -----------------------------------------------------------" << endl;
        	cout<<"       Field                |           Details                "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Full Name            |           "<<readName<<"             "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Age                  |           "<<readAge<<"              "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Gender               |           "<<readGender<<"           "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Address              |           "<<readAddress<<"          "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Contact Number       |           "<<readNumber<<"           "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Illness              |           "<<readIll<<"              "<<endl;
 	        cout<<"    ------------------------|----------------------------------"<<endl;
 	        cout<<"       Date                 |           "<<readDate<<"              "<<endl;
 	        cout<<"    -----------------------------------------------------------"<<endl;
            cout << "-----------------------------------------------------------\n" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Record does not exist.\n";
    }

    infile.close();
}

    void deleteRecord() {
    string deleteName;
    cout << "Enter patient name to delete: ";
    cin.ignore();
    getline(cin, deleteName);

    ifstream infile("patientHistory.txt");
    if (!infile) {
        cout << "Unable to open file.\n";
        return;
    }

    ofstream temp("temper.txt");
    if (!temp) {
        cout << "Unable to create temporary file.\n";
        return;
    }

    string line;
    bool found = false;

    while (getline(infile, line)) {
        stringstream ss(line);
        string readName, readGender, readAddress, readNumber, readIll, readDate;
        string ageStr;
        int readAge;

        // Split fields by '|'
        getline(ss, readName, '|');
        getline(ss, ageStr, '|');
        stringstream(ageStr) >> readAge;
        getline(ss, readGender, '|');
        getline(ss, readAddress, '|');
        getline(ss, readNumber, '|');
        getline(ss, readIll, '|');
        getline(ss, readDate, '|');

        if (readName == deleteName) {
            found = true;
            cout << "Record for '" << deleteName << "' deleted successfully.\n";
            continue; // skip writing this record
        }

        // Write record back to temp
        temp << readName << "|" << readAge << "|" << readGender << "|" 
             << readAddress << "|" << readNumber << "|" 
             << readIll << "|" << readDate << endl;
    }

    infile.close();
    temp.close();

    // Replace old file with new file
    remove("patientHistory.txt");
    rename("temper.txt", "patientHistory.txt");

    if (!found) {
        cout << "No record found for name: " << deleteName << endl;
    }
}
    
};

#endif

