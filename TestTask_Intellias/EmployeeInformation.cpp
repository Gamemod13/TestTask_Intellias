#include "EmployeeInformation.h"



void EmployeeInformation::convertDateFormat()
{
    if (m_date.length() == 9) {
        int mounth = stoi(m_mounth);
        switch (mounth)
        {
        case 1:
            m_mounth = { "January" };
            break;
        case 2:
            m_mounth = { "February" };
            break;
        case 3:
            m_mounth = { "March" };
            break;
        case 4:
            m_mounth = { "April" };
            break;
        case 5:
            m_mounth = { "May" };
            break;
        case 6:
            m_mounth = { "June" };
            break;
        case 7:
            m_mounth = { "July" };
            break;
        case 8:
            m_mounth = { "August" };
            break;
        case 9:
            m_mounth = { "September" };
            break;
        case 10:
            m_mounth = { "October" };
            break;
        case 11:
            m_mounth = { "November" };
            break;
        case 12:
            m_mounth = { "December" };
            break;
        default:
            m_mounth = { "Error" };
            break;
        }
    }
    else {
        std::cout << "Error";
    }
}

void EmployeeInformation::printInformation(){
    convertDateFormat();
    std::cout << m_name << ", "<<m_mounth + " " + m_year << ", " << m_logger_hours << ";" << std::endl;
    
}
