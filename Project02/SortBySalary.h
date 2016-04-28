/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortBySalary.h
 * Author: u
 *
 * Created on February 22, 2016, 4:25 PM
 */

#ifndef SORTBYSALARY_H
#define SORTBYSALARY_H

#include "DatabaseSort.h"

class SortBySalary: public DatabaseSort{
    public:
    SortBySalary(){};
    
    SortBySalary(CDatabase database):DatabaseSort(database){}
    virtual bool smaller( int i, int j) const {
        if(getEmployee(i)->getSalary()<getEmployee(j)->getSalary())
                return true;
            else 
                return false;
    }
};


#endif /* SORTBYSALARY_H */

