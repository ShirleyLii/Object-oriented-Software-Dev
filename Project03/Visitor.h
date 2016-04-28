/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: shirley
 *
 * Created on March 20, 2016, 8:18 PM
 */

#ifndef Visitor_h
#define Visitor_h
class Employee;
class Department;
class Group;
class Manager;

class Visitor{
public:
    virtual void VisitEmployee(Employee*) = 0;
    virtual void VisitManager(Manager*) = 0;
    virtual void VisitDepartment(Department*) = 0;
    virtual void VisitGroup(Group*) = 0;
    
};

#endif /* Visitor_h */

