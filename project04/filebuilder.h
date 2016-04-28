#ifndef TXTBUILDER_H
#define TXTBUILDER_H
#include "builder.h"
#include <QFile>
#include <QTextStream>
#include <QDir>

class FileBuilder: Builder{
  public:
    virtual void createFile(std::vector<std::vector<QString> > vec){
        QString filename1="MyData.csv";
        QString filename2="MyData.txt";
        QFile file1( filename1 );
        QFile file2( filename2 );
        if ( file1.open(QIODevice::ReadWrite) )
        {
            QTextStream stream1( &file1 );
            write(stream1,&vec);
        file1.close();
        }
        if ( file2.open(QIODevice::ReadWrite) )
        {
            QTextStream stream2( &file2 );
            write(stream2, &vec);
        file2.close();
        }
    }

    void write(QTextStream& stream,std::vector<std::vector<QString> >* vec ){
        stream << "FirstName    LastName    Slary   HiringYear" << endl;
        for (unsigned int k = 0;k<vec->size();k++){
            for (unsigned int j = 0; j<(*vec)[0].size(); j++){
               stream << (*vec)[k][j] << "\t";
            }
            stream << endl;
        }
    }

};

#endif // TXTBUILDER_H
