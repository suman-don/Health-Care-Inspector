#ifndef CLS_H
#define CLS_H
#include <iostream>
#include <string>
#include <cctype>  
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class welcome {
public:
    void welcomePage();
};

class detail {
public:
    string name, gender, symptom, severity, address,date,contact;
    int age;
    int duration;
    string suggestionName;

    bool matched = false;
    bool matched1 = false;
    bool matched2 = false;

    // get data from user
    void getdata();
    void detecting();


    // show health disease
    void healthinfo();
    void healthinfoSecond();
    void healthinfoThird();
    
    // option
    void suggestion();
    void suggestion2();
    void suggestion3();
    void hospital();
    void money();
    void money2();
    void money3();
   
     void addRecord() {
        ofstream outfile("patientHistory.txt", ios::app);
        if (!outfile) {
            cout << "Unable to open file.\n";
            return;
        }

        // Use | as delimiter to handle spaces
        outfile << name << "|" << age << "|" << gender << "|" << address << "|" 
                << contact << "|" << suggestionName << "|" << date << endl;
        outfile.close();
        cout << "Record added successfully!\n";
    }

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
        }

        infile.close();

    }
    
    void reset(){
    	
		matched = false;
        matched1 = false;
        matched2 = false;
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

