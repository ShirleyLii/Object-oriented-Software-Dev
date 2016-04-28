/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortByHiringYear.h
 * Author: u
 *
 * Created on February 22, 2016, 4:26 PM
 */

#ifndef SORTBYHIRINGYEAR_H
#define SORTBYHIRINGYEAR_H
#include "DatabaseSort.h"

class SortByHiringYear: public DatabaseSort{
    public:
    SortByHiringYear(){};
    
    SortByHiringYear(CDatabase database):DatabaseSort(database){}
    virtual bool smaller( int i, int j) const {
        if(getEmployee(i)->getHiringYear()<getEmployee(j)->getHiringYear())
                return true;
            else 
                return false;
    }
};


#endif /* SORTBYHIRINGYEAR_H */

