#ifndef OBSERVER_H
#define OBSERVER_H
#include <vector>
#include <QString>
#include "sort.h"

class Observer{

private:
    std::vector<std::vector<QString> > m_str;
    std::vector<int> m_click;

public:
    Observer(){
        for (int i = 0;i<4;i++){
            m_click.push_back(-1);
        }
    }

    void setStr(std::vector<std::vector<QString> >  str){
        m_str = str;
    }

    std::vector<std::vector<QString> > getStr(){
        return m_str;
    }

    void StrPush(std::vector<QString> partstr){
        m_str.push_back(partstr);
    }

    int getClick(int i){
        return m_click[i];
    }

    void setOneClick(int i){
        m_click[i] = -m_click[i];
    }


    void trysort(int i){
        this->setOneClick(i);
        Sort st(m_str);
        st.sortit(i,this->getClick(i));
        this->setStr(st.getVec());


    }
};

#endif // OBSERVER_H
