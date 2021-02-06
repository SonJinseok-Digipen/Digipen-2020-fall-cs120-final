#pragma once
#include"button.h"
#include"Jelly.h"
#include<map>
#include<iostream>
#include<fstream>

class sence
{
private:
    button             button1{500,900};
    std::vector<Jelly> jellys;

public:
    void setup();
    void update();
    void draw();
    void save_data();


};
