#ifndef SORT_H
#define SORT_H
#include <vector>
#include <QString>

class Sort{

private:
    std::vector<std::vector<QString> > m_vec;
public:
    Sort(std::vector<std::vector<QString> > vec){m_vec = vec;};
    void sortit(int position,int click){
            bool sorted = false;
            int n = m_vec.size();
            while (!sorted){
                sorted = true;
                for ( int i =1;i< n;i++){
                    bool run = m_vec[i-1][position]>m_vec[i][position];
                    if (click==-1)
                        run = !run;
                    if (run){
                        std::vector<QString> temp = m_vec[i-1];
                        m_vec[i-1] = m_vec[i];
                        m_vec[i]= temp;
                        sorted  = false;
                    }
                }
                n--;
            }
    }

    std::vector<std::vector<QString> > getVec(){
        return m_vec;
    }
};

#endif // SORT_H
