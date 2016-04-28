/*
 * File:   databasefrom.cpp
 * Author: Huaigu Xu  A49269154
 *         Shirley Li A47225481
 * Class:  CSE335 Section 1
 *
 *
 */

#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include "builder.h"
#include "filebuilder.h"

DatabaseForm::~DatabaseForm()
{
    delete ui;

}

void DatabaseForm::add_data(std::vector<QString> str_vec){
    int i = ui->tableWidget->rowCount();
    ob.StrPush(str_vec);
    ui->tableWidget->setRowCount(i+1);
    for (int j = 0; j<ui->tableWidget->columnCount(); j++){
       ui->tableWidget->setItem(i,j,new QTableWidgetItem(str_vec[j]));
    }

}


void DatabaseForm::on_add_clicked()
{
    AddRecordForm* form = new AddRecordForm();
    form->show();
    connect(form, SIGNAL(formSent(std::vector<QString>)), this, SLOT(add_data(std::vector<QString>)));
}

void DatabaseForm::on_ok_clicked()
{
    this->close();

}

void DatabaseForm::sort(int i){
    ob.trysort(i);
    for (unsigned int k = 0;k<ob.getStr().size();k++){
        for (int j = 0; j<ui->tableWidget->columnCount(); j++){
           ui->tableWidget->setItem(k,j,new QTableWidgetItem(ob.getStr()[k][j]));
        }
    }


}


void DatabaseForm::file_save(){
    FileBuilder tb;
    tb.createFile(ob.getStr());
}

DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm){
    ui->setupUi(this);
    connect(ui->tableWidget->horizontalHeader(),SIGNAL(sectionClicked(int)),this,SLOT(sort(int)));
    connect(ui->actionSave_3,SIGNAL(triggered(bool)),this,SLOT(file_save()));
   }
