#ifndef EMPLOYEE_INFORMATION_H
#define EMPLOYEE_INFORMATION_H
#include <String>
#include <iostream>
#include "Empoyee_Information.cpp"

class Empoyee_Information
{
private:
	std::string m_name;
    std::string m_mail;
    std::string m_department;
    std::string m_position;
    std::string m_project;
    std::string m_task;
    std::string m_date;
    std::string m_logger_hours;
public:
    Empoyee_Information(std::string name, std::string mail, std::string department,
        std::string position, std::string project, std::string task,
        std::string date, std::string logger_hours) :
        m_name(name), m_mail(mail), m_department(department), m_position(position),
        m_project(project), m_task(task), m_date(date), m_logger_hours(logger_hours)
    {}
    void printInformation() const {
        std::cout << "   Name:         " << m_name << std::endl;
        std::cout << "   Mail:         " << m_mail << std::endl;
        std::cout << "   Department:   " << m_name << std::endl;
        std::cout << "   Position:     " << m_name << std::endl;
        std::cout << "   Project:      " << m_name << std::endl;
        std::cout << "   Task:         " << m_name << std::endl; 
        std::cout << "   Date:         " << m_name << std::endl;
        std::cout << "   Logger hourse:" << m_name << std::endl;
    }
};
#endif
