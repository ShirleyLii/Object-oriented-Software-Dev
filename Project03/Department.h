/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Department.h
 * Author: shirley
 *
 * Created on March 20, 2016, 8:16 PM
 */

#ifndef Department_h
#define Department_h
#include <vector>
#include <string>
#include <iostream>

#include "Employee.h"
#include "Accept.h"

using namespace std;


class Department: public AccpetV{
protected:
    string m_DptName;
    vector<AccpetV*> m_dpt;
    
public:
    
    //Constructors
    Department(const string dptName, const vector<AccpetV*> v){
        m_DptName = dptName;
        m_dpt = v;
    }
    
    Department(const string dptName){
        vector<AccpetV*>v;
        m_DptName = dptName;
        m_dpt = v;
    }
    
    //Default Constructor
    Department(){
        vector<AccpetV*> emptyVec;
        m_DptName = "";
        m_dpt= emptyVec;
    }
    
    //Destructor
    virtual ~Department(){}
    
    //Copy Constructor
    Department(const Department &department){
        m_DptName = department.m_DptName;
        m_dpt = department.m_dpt;
    }
    
    //Assignment Operator
    Department &operator=(const Department &department){
        m_DptName = department.m_DptName;
        m_dpt = department.m_dpt;
        return *this;
    }
    
    //Getters
    
    string getDepartmentName() const{
        return m_DptName;
    }
    

    int getDptSize(){
        return m_dpt.size();
    }
        
    AccpetV* getDepartment(int i){
        return m_dpt[i];
    };
    
    
    //Setters
    void setDptName(const string dptName){
        m_DptName = dptName;
    }

    void setDpt(const vector<AccpetV*> v){
        m_dpt = v;
    }
    
    void addDepartmentMember(AccpetV* u){
        m_dpt.push_back(u);
    }
    
    virtual void Accept(Visitor* v){
        v->VisitDepartment(this);
    }
    
    
    
};


#endif /* Department_h */
