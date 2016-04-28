/*
 * File:   addrecordform.cpp
 * Author: Huaigu Xu  A49269154
 *         Shirley Li A47225481
 * Class:  CSE335 Section 1
 *
 *
 */


#include "addrecordform.h"
#include "ui_addrecordform.h"
#include "databaseform.h"

AddRecordForm::AddRecordForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecordForm)
{
    ui->setupUi(this);
}

AddRecordForm::~AddRecordForm()
{
    delete ui;
}

void AddRecordForm::on_buttonBox_accepted()
{
    std::vector<QString> str_vec;
    str_vec.push_back(ui->FirstName->text());
    str_vec.push_back(ui->LastName->text());
    str_vec.push_back(ui->Salary->text());
    str_vec.push_back(ui->HiringYear->text());
    emit formSent(str_vec);
}
