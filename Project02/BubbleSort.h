/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: u
 *
 * Created on February 2, 2016, 2:03 PM
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortableVector.h"

class BubbleSort{
public:
    void sort(SortableVector* sortableVector){
        bool sorted = false;
        int n = sortableVector->getSize();
        while (!sorted){
            sorted = true;
            for ( int i =1;i< n;i++){
                bool run = Compare(sortableVector,i-1,i);
                if (run){
                    sortableVector->swap(i-1,i);
                    sorted  = false;
                }
            }
            n--;
        }
};
virtual bool Compare(SortableVector* sortableVector,int i, int j) = 0;
};


#endif /* BUBBLESORT_H */

