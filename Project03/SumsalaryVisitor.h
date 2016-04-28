/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SumsalaryVisitor.h
 * Author: u
 *
 * Created on March 21, 2016, 8:24 AM
 */

#ifndef SUMSALARYVISITOR_H
#define SUMSALARYVISITOR_H

#include <iostream>
#include "Visitor.h"
#include "Accept.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"
#include "Group.h"


class SumsalaryVisitor: public Visitor{
private:
    int m_total; 
    
public:
    double getTotalSalary(){
        return m_total;
    }
    
    void restTotalSalary(){
        m_total = 0;
    }
    
    virtual void VisitEmployee(Employee* e){
        m_total += e->getSalary();
    }
    
    virtual void VisitManager(Manager* m){
        m_total += m->getSalary();
    }
    
    virtual void VisitDepartment(Department* d){
       for (int i =0; i<d->getDptSize(); i++){
           d->getDepartment(i)->Accept(this);
       }
    }

    virtual void VisitGroup(Group* g){
        for (int i =0; i<g->getGroupSize();i++){
            g->getGroup(i)->Accept(this);
        }
       
    }
    
};



#endif /* SUMSALARYVISITOR_H */

