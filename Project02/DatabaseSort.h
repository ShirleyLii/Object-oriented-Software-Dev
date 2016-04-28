/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DatabaseSort.h
 * Author: u
 *
 * Created on February 22, 2016, 3:14 PM
 */

#ifndef DATABASESORT_H
#define DATABASESORT_H
#include "SortableVector.h"
#include "CDatabase.h"
#include "CEmployee.h"

class DatabaseSort: public SortableVector, public CDatabase{

public:
    DatabaseSort(){};
    DatabaseSort(CDatabase database):CDatabase(database){}
        
    virtual unsigned int getSize() const {
        return getAllRecord().size();
    }
    virtual bool smaller (int i, int j) const = 0;
    virtual void swap(int i, int j) {
        CEmployee* temp = getEmployee(i);
        setEmployee(getEmployee(j),i);
        setEmployee(temp,j);
    }
    
};


#endif /* DATABASESORT_H */

