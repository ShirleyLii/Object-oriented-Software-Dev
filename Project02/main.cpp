/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: u
 *
 * Created on February 18, 2016, 7:14 PM
 */

#include <cstdlib>
#include <iostream>

#include "CDatabase.h"
#include "CEmployee.h"
#include "CManager.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "DatabaseSort.h"
#include "SortByFirstName.h"
#include "SortByLastName.h"
#include "SortBySalary.h"
#include "SortByHiringYear.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    // Set up database
    vector<CEmployee*> emps;
    CDatabase database;
    tm hire2000;
    hire2000.tm_year = 2000;
    tm hire2010;
    hire2010.tm_year = 2010;
    tm hire2011;
    hire2011.tm_year = 2011;
    tm hire2012;
    hire2012.tm_year = 2012;
    tm hire2013;
    hire2013.tm_year = 2013;
   
    database.AddRecord(new CEmployee("John","Smith1",10000,hire2011));
    database.AddRecord(new CEmployee("John","Smith2",20000,hire2012));
    database.AddRecord(new CEmployee("John","Smith3",30000,hire2013));
    database.AddRecord(new CManager("Tom","Cruise",40000,hire2000,"Sales",emps));
    database.AddRecord(new CEmployee("John","Doe1",15000,hire2010));
    database.AddRecord(new CEmployee("John","Doe2",25000,hire2011));
    database.AddRecord(new CEmployee("John","Doe3",35000,hire2012));
    database.AddRecord(new CManager("Alice","Cooper",45000,hire2000,"Human Resources",emps));
    
    //Before sorting.
    cout << "*********************** Before Sorting"<<endl;
    database.DisplayRecords();
    BubbleSortDecreasing bsd;
    BubbleSortIncreasing bsi;
    
    // Sort By first Name
    SortByFirstName sbfn(database);
    bsi.sort(&sbfn);
    cout << "*********************** After Sorting By FirstName Alphabetical"
            <<endl;
    sbfn.DisplayRecords();
    bsd.sort(&sbfn);
    cout << "*********************** After Sorting By FirstName Reverse Alphabetical"
            <<endl;
    sbfn.DisplayRecords();
    
    //Sort By Last Name
    SortByLastName sbln(database);
    bsi.sort(&sbln);
    cout << "*********************** After Sorting By LastName Alphabetical"
            <<endl;
    sbln.DisplayRecords();
    bsd.sort(&sbln);
    cout << "*********************** After Sorting By LastName Reverse Alphabetical"
            <<endl;
    sbln.DisplayRecords();
    
    //Sort By Salary
    SortBySalary sbs(database);
    bsi.sort(&sbs);
    cout << "*********************** After Sorting By Salary Increasing."
            <<endl;
    sbs.DisplayRecords();
    bsd.sort(&sbs);
    cout << "*********************** After Sorting By Salary Decreasing."
            <<endl;
    sbs.DisplayRecords();
    
    //Sort By Hireyear
    SortByHiringYear sbhy(database);
    bsi.sort(&sbhy);
    cout << "*********************** After Sorting By Hireyear Increasing."
            <<endl;
    sbhy.DisplayRecords();
    bsd.sort(&sbhy);
    cout << "*********************** After Sorting By Hireyear Decreasing."
            <<endl;
    sbhy.DisplayRecords();
    
    
    return 0;
}

