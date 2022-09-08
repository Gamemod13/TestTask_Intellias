#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "Empoyee_Information.h"


using namespace std;


int main()
{
    ifstream inputFile;
    inputFile.open("C\\:test_file.csv");
    string line{ "" };
    while (getline(inputFile, line)) {
        string name;
        string mail;
        string department;
        string position;
        string project;
        string task;
        string date;
        string logger_hours;
        line = "";
    }
    cout << "Fine!" << endl;
}

