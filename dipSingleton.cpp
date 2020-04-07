#include<iostream>
#include "App.h"
#include "AppImplementation.h"

int main(){
    
    
    Widget::AppImplementation* AppImp_ptr = new Widget::AppImplementation;
    Widget::App* app = app->createApp(AppImp_ptr, "Only App");
    //Widget::App::createApp(AppImp_ptr, "Only App")->init();
    app->init();
    int add = app->addToData(2);

    return 0;
}