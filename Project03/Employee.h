/* 
 * File:   Employee.h
 * Author: Huaigu Xu    A49269154
 *         Yingfei Li   A47225481
 * Class:  CSE335 Section 1
 *
 * Created on January 26, 2016, 5:10 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Accept.h"
#include "Visitor.h"
#include <string>

using namespace std;

class Employee: public AccpetV {
    
protected:
    
    string m_first;
    string m_last;
    int m_salary;
    int m_hiringYear;
    unsigned int m_id;
   
    
public:
    
    //Constructor
    Employee (const string firstName,
              const string lastName,
              const int salary,
              const int hiringYear, const unsigned int id){
        
        m_first = firstName;
        m_last = lastName;
        m_salary = salary;
        m_hiringYear = hiringYear;
        m_id = id;
    }
    
    //default Constructor
    Employee() {
        m_first = "";
        m_last = "";
        m_salary = 0;
        m_hiringYear = 0;
        m_id = 0; 
    }
    
    //Copy Constructor
    Employee(const Employee &employee){
        m_first = employee.m_first;
        m_last = employee.m_last;
        m_hiringYear = employee.m_hiringYear;
        m_salary = employee.m_salary;
        m_id  = employee.m_id;
    }
    
    //Assignment Operator
    Employee &operator=(const Employee &employee){
        m_first = employee.m_first;
        m_last = employee.m_last;
        m_hiringYear = employee.m_hiringYear;
        m_salary = employee.m_salary;
        m_id = employee.m_id;
        return *this;
    }
    
    //Get functions
    string getFirstName() const{        
        return m_first;   
    }
    
    string getLastName() const{
        return m_last;    
    }
    
    int getSalary() const{
        return m_salary;
    }
    
    int getHiringYear() const{
        return m_hiringYear; 
    }
    
    unsigned int getId() const {
        return m_id;   
    }
    
    //Set Functions
    void setFirstName(const string firstName){
        m_first = firstName;   
    }
    
    void setLastName(const string lastName){
        m_last = lastName;
    }
    
    void setSalary(const int salary){
        m_salary = salary;
    }
    
    void setHiringYear(const unsigned int hiringYear){     
        m_hiringYear = hiringYear;  
    }
    
    void setId(const unsigned int id){
        m_id = id;
    }
    
    virtual void Accept(Visitor* v){
        v->VisitEmployee(this);
    }

};


#endif /* EMPLOYEE_H */