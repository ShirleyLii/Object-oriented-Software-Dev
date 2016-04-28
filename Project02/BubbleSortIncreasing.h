/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: u
 *
 * Created on February 22, 2016, 3:04 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H
#include "BubbleSort.h"
#include "SortableVector.h"

class BubbleSortIncreasing: public BubbleSort{
    virtual bool Compare(SortableVector* sortableVector,int i, int j){
        return (!sortableVector->smaller(i,j));
    }
};




#endif /* BUBBLESORTINCREASING_H */

