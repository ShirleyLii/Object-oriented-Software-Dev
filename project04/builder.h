#ifndef BUILDER_H
#define BUILDER_H
#include <vector>
#include <QString>

class Builder{
public:
    Builder(){}
    virtual void createFile(std::vector<std::vector<QString> > vec) =0;
};


#endif // BUILDER_H
