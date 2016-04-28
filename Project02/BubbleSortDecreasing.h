/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: u
 *
 * Created on February 22, 2016, 3:06 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "BubbleSort.h"
#include "SortableVector.h"

class BubbleSortDecreasing: public BubbleSort{
    virtual bool Compare(SortableVector* sortableVector,int i, int j){
        return (sortableVector->smaller(i,j));
    }
};


#endif /* BUBBLESORTDECREASING_H */

