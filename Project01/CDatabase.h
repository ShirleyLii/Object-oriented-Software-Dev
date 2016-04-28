/* 
 * File:   CDatabase.h
 * Author: Huaigu Xu  A49269154
 * Class:  CSE335 Section 1
 *
 * Created on January 26, 2016, 5:30 PM
 */

#ifndef CDATABASE_H
#define CDATABASE_H

#include <iostream>
#include <vector>
#include "CEmployee.h"
#include "CManager.h"

class CDatabase{
protected:
    vector<CEmployee*> m_allRecord;
    
public:
    CDatabase(const vector<CEmployee*> allrecord){
        m_allRecord = allrecord;
    }
    
    //default constructor
    CDatabase(){
        vector<CEmployee*> emps;
        m_allRecord = emps;
    }
    
    //copy constructor
    CDatabase ( const CDatabase& cdatabase){
        m_allRecord = cdatabase.m_allRecord;
    }
    
    //assignment operator
    CDatabase& operator= (const CDatabase& cdatabase){
        m_allRecord = cdatabase.m_allRecord;
    }
    
    //Get & Set Function
    vector<CEmployee*> getAllRecord () const {
        return m_allRecord;
    }
    void setAllRecord (const vector<CEmployee*> allrecord){
        m_allRecord = allrecord;
    }
    
    void AddRecord(CEmployee* cemployee){
        m_allRecord.push_back(cemployee);
    }
    
    void DisplayRecords() const {
        for (int i=0;i<m_allRecord.size();i++){
            m_allRecord[i]->DisplayEmployee();
        }
        
    }
};


#endif /* CDATABASE_H */

