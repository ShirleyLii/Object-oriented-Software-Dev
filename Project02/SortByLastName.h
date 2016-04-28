/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortByLastName.h
 * Author: u
 *
 * Created on February 22, 2016, 4:22 PM
 */

#ifndef SORTBYLASTNAME_H
#define SORTBYLASTNAME_H
#include "DatabaseSort.h"

class SortByLastName: public DatabaseSort{
    public:
    SortByLastName(){};
    
    SortByLastName(CDatabase database):DatabaseSort(database){}
    virtual bool smaller( int i, int j) const {
        if(getEmployee(i)->getLastName()<getEmployee(j)->getLastName())
                return true;
            else 
                return false;
    }
};


#endif /* SORTBYLASTNAME_H */

