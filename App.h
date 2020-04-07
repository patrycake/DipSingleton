#include<iostream>
#include"AppInterface.h"
#include<string>

#ifndef APP_H
#define APP_H

namespace Widget{
class App{
    public:
    
    void init(){
        _appInterface->init(_appName, _data);
    }
   
    int addToData(int userData){ return _appInterface->addToData(userData, _data);}
    static App* createApp(Widget::AppInterface* interface, std::string name){
        if(!appInstance){
            appInstance =  new(std::nothrow) App(interface, name);
            
        }else{
            std::cout<<"Already created returning the Instance"<< std::endl;
        }
        return appInstance;
     }

    private:

    int _data;
    static App* appInstance;
    Widget::AppInterface*  _appInterface;
    std::string _appName;


     void setData(int data){
        _data = data;
    }
    App(Widget::AppInterface* appInterface, std::string appName):
    _appInterface(appInterface), 
    _appName(appName){}
    

};
//Initialize pointer to zero so that it can be initialized in first call to getInstance
Widget::App *App::appInstance = 0;
};


#endif