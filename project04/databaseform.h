/*
 * File:   databaseform.h
 * Author: Huaigu Xu  A49269154
 *         Shirley Li A47225481
 * Class:  CSE335 Section 1
 *
 *
 */

#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>
#include "observer.h"

namespace Ui {
class DatabaseForm;
}

class DatabaseForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit DatabaseForm(QWidget *parent = 0);
    ~DatabaseForm();

private slots:
    void on_add_clicked();
    void on_ok_clicked();
    void add_data(std::vector<QString>);
    void sort(int);
    void file_save();


private:
    Ui::DatabaseForm *ui;
    Observer ob;
};

#endif // DATABASEFORM_H
