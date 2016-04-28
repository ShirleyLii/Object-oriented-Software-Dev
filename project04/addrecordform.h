/*
 * File:   addrecordform.h
 * Author: Huaigu Xu  A49269154
 *         Shirley Li A47225481
 * Class:  CSE335 Section 1
 *
 *
 */


#ifndef ADDRECORDFORM_H
#define ADDRECORDFORM_H

#include <QDialog>

namespace Ui {
class AddRecordForm;
}

class AddRecordForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecordForm(QWidget *parent = 0);
    ~AddRecordForm();

signals:
    void formSent(std::vector<QString>);

private slots:

    void on_buttonBox_accepted();

private:
    Ui::AddRecordForm *ui;
};

#endif // ADDRECORDFORM_H
