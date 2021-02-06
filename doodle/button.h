#pragma once
#include<string>
#include"doodle/doodle.hpp"
class button
{
private:
    double posx;
    double posy;
    double            width{100};
    double            height{50};
    bool              mousewaspressed = false;
    const std::string label{"click it"};

public:
    button(double posx, double posy);
    bool isclicked();
    void draw();





};
