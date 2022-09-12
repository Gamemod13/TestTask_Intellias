#ifndef EMPLOYEE_INFORMATION_H
#define EMPLOYEE_INFORMATION_H
#include <String>
#include <iostream>

class EmployeeInformation
{
private:
	std::string m_name{ "" };
    std::string m_mail{ "" };
    std::string m_department{ "" };
    std::string m_position{ "" };
    std::string m_project{ "" };
    std::string m_task{ "" };
    std::string m_date{ "" };
    std::string m_logger_hours{ "" };
public:
    EmployeeInformation(std::string name, std::string mail, std::string department,
        std::string position, std::string project, std::string task,
        std::string date, std::string logger_hours) :
        m_name(name), m_mail(mail), m_department(department), m_position(position),
        m_project(project), m_task(task), m_date(date), m_logger_hours(logger_hours)
    {}
    void printInformation() const;
};
#endif
