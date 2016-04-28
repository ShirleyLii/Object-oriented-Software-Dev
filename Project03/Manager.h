#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "Employee.h"
#include <vector>

using namespace std;

class Manager: public Employee {
    
protected:
    unsigned int m_rank;
public:
    
    //Constructor
    Manager(const string firstName,
            const string lastName,
            const int salary,
            const unsigned int hiringYear,
            const unsigned int id,
            const unsigned int rank):Employee(firstName, lastName, salary,
                    hiringYear, id){
        
        m_rank = rank;
        
    }
    
    //Default Constructor
    Manager(): Employee(){
        m_rank = 0;
        
    }
    
    //destructor
    virtual ~Manager(){}
    
    //Copy Constructor
    Manager(const Manager& manager){
        m_first = manager.m_first;
        m_last = manager.m_last;
        m_salary = manager.m_salary;
        m_hiringYear = manager.m_hiringYear;
        m_id = manager.m_id;
        m_rank = manager.m_rank;
    }
    
    //Assignment Operator
    Manager& operator=(const Manager& manager){
        m_first = manager.m_first;
        m_last = manager.m_last;
        m_salary = manager.m_salary;
        m_hiringYear = manager.m_hiringYear;
        m_id = manager.m_id;
        m_rank = manager.m_rank;
        return *this;
    }
    
    
    //Get Functions
    unsigned int getRank() const{ 
        return m_rank;
    }
    
    
    //setters
    void setRank(const unsigned int rank){
        m_rank = rank;
    }
    
    virtual void Accept(Visitor* v){
        v->VisitManager(this);
    }
};


#endif /* MANAGER_H */
