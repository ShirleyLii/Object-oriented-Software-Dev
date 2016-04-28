/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortByFirstName.h
 * Author: u
 *
 * Created on February 22, 2016, 3:28 PM
 */

#ifndef SORTBYFIRSTNAME_H
#define SORTBYFIRSTNAME_H
#include "DatabaseSort.h"

class SortByFirstName: public DatabaseSort{
    public:
    SortByFirstName(){};
    
    SortByFirstName(CDatabase database):DatabaseSort(database){}
    virtual bool smaller( int i, int j) const {
        if(getEmployee(i)->getFirstName()<getEmployee(j)->getFirstName())
                return true;
            else 
                return false;
    }
};


#endif /* SORTBYFIRSTNAME_H */

