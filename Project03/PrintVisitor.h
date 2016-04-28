/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: shirley
 *
 * Created on March 20, 2016, 8:19 PM
 */

#ifndef PrintVisitor_h
#define PrintVisitor_h
#include "Visitor.h"
#include "Accept.h"
#include "Employee.h"
#include "Manager.h"
#include "Department.h"
#include "Group.h"
#include <vector>


class PrintVisitor: public Visitor{
public:
    virtual void VisitEmployee(Employee* e){
        cout<<"             "<<e->getFirstName()<<" "<<e->getLastName()<<"; "<<e->getSalary()
                <<"; "<<e->getHiringYear()<<"; "<< e->getId()<< endl;
    }
    
    virtual void VisitManager(Manager* m){
        cout<<"     "<<m->getFirstName()<<" "<<m->getLastName()<<"; "<<m->getSalary()
                <<"; "<<m->getHiringYear()<<"; "<< m->getId()<< endl;
    }
//    
    virtual void VisitDepartment(Department* d){
        
        cout<<d->getDepartmentName()<<endl;
       for (int i =0; i<d->getDptSize(); i++){
           d->getDepartment(i)->Accept(this);
       }
    }
//    
    virtual void VisitGroup(Group* g){
        cout<<g->getName()<<" "<<endl;
        for (int i =0; i<g->getGroupSize();i++){
            g->getGroup(i)->Accept(this);
        }
       
    }
    

};

#endif /* PrintVisitor_h */