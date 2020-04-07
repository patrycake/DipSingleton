#include <iostream>
#include "AppInterface.h"

#ifndef APPIMP_H
#define APPIMP_H

namespace Widget{
class AppImplementation: public Widget::AppInterface{
    public:
    AppImplementation(){}
    void init(std::string name, int &appData) {
        std::cout << "App, " << name << ", Initing" << std::endl;
        int stuff;
        std::cin >> stuff;
        appData = stuff;
    }
    /*void setData(int data, std::string name, Widget::App* instance){
        std::cout << "App, " << name << " got data: " << data << std::endl;
    }*/
    int addToData(int user, int data){
        std::cout << "Add: " << user << " + " << data << " = " << user + data << std::endl;
        return user + data;
    }
};
};
#endif