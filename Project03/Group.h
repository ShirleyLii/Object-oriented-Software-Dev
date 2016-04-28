/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Group.h
 * Author: shirley
 *
 * Created on March 20, 2016, 8:16 PM
 */

#ifndef Group_h
#define Group_h
#include <iostream>
#include "Employee.h"
#include "Accept.h"
#include <vector>
#include <string>

using namespace std;

class Group: public AccpetV{
protected:
    string m_GroupName;
    vector<Employee*> m_Member;
    
public:

    //Constructor
    Group(const string groupName){
        m_GroupName = groupName;
        vector<Employee*> v;
        m_Member = v;
    }
   
    //Default Constructor
    Group(){
        vector<Employee*> v;
        m_GroupName = "";
        m_Member = v;
    }

    //Copy Constructor
    Group(const Group &group){
        m_GroupName = group.m_GroupName;
        m_Member = group.m_Member;
    }
    
    //Assignment Operator
    Group &operator=(const Group &group){
        m_GroupName = group.m_GroupName;
        m_Member = group.m_Member;
        return *this;
    }
    
    //Get Functions
    string getName() const{
        return m_GroupName;
    }
    
    int getGroupSize(){
        return m_Member.size();
    }
    
    AccpetV* getGroup(int i){
        return m_Member[i];
    };

    
    //Set Functions
    
    void setGroupName(const string groupName){
        m_GroupName = groupName;
    }
    
    void setMember(const vector<Employee*> member){
        m_Member = member;
    }
    
    void addGroupMember(Employee* group){
        m_Member.push_back(group);
    }
    
    virtual void Accept(Visitor* v){
        v->VisitGroup(this);
    }
    
    

};


#endif /* Group_h */