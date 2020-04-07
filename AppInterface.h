#include <iostream>
//#include"App.h"

#ifndef APPINT_H
#define APPINT_H
namespace Widget{
class AppInterface{
    private:
    public:
    AppInterface(){}
    virtual void init(std::string, int &)=0;
    virtual int addToData(int, int)=0;
   // virtual void subToData(int)=0;
    //virtual App* createApp()=0;
};
};
#endif