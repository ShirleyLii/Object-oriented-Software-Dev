/* 
 * File:   Employee.h
 * Author: Huaigu Xu  A49269154
 * Class:  CSE335 Section 1
 *
 * Created on January 26, 2016, 5:10 PM
 */

#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;


class CEmployee{
protected:
    string m_first;
    string m_last;
    int m_salary;
    int m_hiringYear;
    
public:
    //constructor.
    CEmployee(const string first,
              const string last, 
              const int salary,
              const tm hiringYear){
        m_first = first;
        m_last = last;
        m_salary = salary;
        m_hiringYear = hiringYear.tm_year;
    }
    //default constructor
    CEmployee(){
        m_first = "";
        m_last = "";
        m_salary = 0;
        m_hiringYear = 0;
    }
    
    //copy constructor
    CEmployee(const CEmployee& cemployee){
        m_first = cemployee.m_first;
        m_last = cemployee.m_last;
        m_salary = cemployee.m_salary;
        m_hiringYear = cemployee.m_hiringYear;
    }
    
    //assignment operator
    CEmployee& operator= (const CEmployee& cemployee){
        m_first = cemployee.m_first;
        m_last = cemployee.m_last;
        m_salary = cemployee.m_salary;
        m_hiringYear = cemployee.m_hiringYear;
    }
    
    //Get functions
    string getFirstName() const {
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
    
    //Set Functions
    void setFirstNmae (const string firstName){
        m_first = firstName;
    }
    void setLastNmae (const string lastName){
        m_last = lastName;
    }
    void setSalary (const int salary){
        m_salary = salary;
    }
    void setHiringYear (const tm hiringYear){
        m_hiringYear = hiringYear.tm_year;
    }
    
    //Virtual function for printing.
    virtual void DisplayEmployee() const{
            cout << m_first << " " << m_last 
                    << "    Salary:" <<m_salary 
                    << "    Hiring Year:" <<m_hiringYear
                    << endl;
    }
    
};



#endif /* CEMPLOYEE_H */

