/* 
 * File:   Manager.h
 * Author: Huaigu Xu    A49269154
 *         Yingfei Li	A47225481
 * Class:  CSE335 Section 1
 *
 * Created on January 26, 2016, 5:10 PM
 */


#ifndef CMANAGER_H
#define CMANAGER_H

#include "CEmployee.h"
#include <vector>
#include <iostream>

class CManager :public CEmployee {
protected:
    string m_department;
    vector<CEmployee*> m_group;
    
public:
    //constructor
    CManager(const string firstName,const string lastName,const int salary, 
            const tm hiringYear,const string department,
            const vector<CEmployee*> group):CEmployee (firstName, lastName,
                    salary,hiringYear){
        m_group = group;
        m_department = department;
    }
    
    //default constructor.
    CManager ():CEmployee(){
        vector<CEmployee*> emps;
        m_group = emps;
        m_department = "";
    }
    
    //copy constructor.
    CManager(const CManager& cmanager){
        m_first = cmanager.m_first;
        m_last = cmanager.m_last;
        m_salary = cmanager.m_salary;
        m_hiringYear = cmanager.m_hiringYear;
        m_department = cmanager.m_department;
        m_group = cmanager.m_group;
    }
    
    //assignment operator
    CManager& operator=(const CManager& cmanager){
        m_first = cmanager.m_first;
        m_last = cmanager.m_last;
        m_salary = cmanager.m_salary;
        m_hiringYear = cmanager.m_hiringYear;
        m_department = cmanager.m_department;
        m_group = cmanager.m_group;
    }   
    //Get Functions
    string getDepartment() const{
        return m_department;
    }
    vector<CEmployee*> getGroup() const{
        return m_group;
    }
    void setDepartment (const string department){
        m_department = department;
    }
    void setGroup (const vector<CEmployee*> group){
        m_group = group;
    }
    
    //virtual function for printing
    virtual void DisplayEmployee() const{
        cout << m_first << " " << m_last 
                << "; " <<m_salary 
                << "; " <<m_hiringYear
                << "; " << m_department  << endl;
        /*        << "    Subordinates:" << m_group.size()
                << endl;
        if (m_group.size()!=0){
            for (int i=0;i<m_group.size();i++){
            cout <<"    Subordinates:";
            m_group[i]->DisplayEmployee();
            }    
        }*/
    }
};



#endif /* CMANAGER_H */

