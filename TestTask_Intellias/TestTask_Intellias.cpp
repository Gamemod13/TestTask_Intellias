#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "EmployeeInformation.h"


using namespace std;


int main()
{
    ifstream inputFile;
    inputFile.open("C:\\test_file.csv");
    if (!inputFile.is_open()) {
        std::cout << "File can't be opened!" << endl;
        Sleep(2500);
        system("cls");
    }
    
    string line{ "" };
    vector<EmployeeInformation> employees;
    while (getline(inputFile, line)) {
        string name{ "" };
        string mail{ "" };
        string department{ "" };
        string position{ "" };
        string project{ "" };
        string task{ "" };
        string date{ "" };
        string logger_hours{ "" };

        stringstream inputString(line);

        getline(inputString, name, ';');
        getline(inputString, mail, ';');
        getline(inputString, department, ';');
        getline(inputString, position, ';');
        getline(inputString, project, ';');
        getline(inputString, task, ';');
        getline(inputString, date, ';');
        getline(inputString, logger_hours, ';');

        EmployeeInformation employee(name, mail, department, 
            position, project, task, date, logger_hours);


        employees.push_back(employee);

        line = "";
    }
    for (auto& employee : employees) {
        employee.printInformation();
    }
    cout << "Fine!" << endl;
    return 0;
}

