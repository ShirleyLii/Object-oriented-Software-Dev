/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unit.h
 * Author: shirley
 *
 * Created on March 20, 2016, 8:18 PM
 */

#ifndef ACCEPT_h
#define ACCEPT_h
using namespace std;
#include <string>

class AccpetV{
public:   
    virtual void Accept(class Visitor*) = 0;
    
};

#endif /* Unit_h */
