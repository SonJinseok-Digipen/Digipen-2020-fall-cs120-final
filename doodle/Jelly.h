#pragma once
#include"asset.h"
class Jelly
{
private:
  

public:
    double posx;
    double posy;
    double        width;
    double        height;
    asset::Sprite sprite_type;
    explicit Jelly(double posx, double posy, double width, double height, asset::Sprite sprite_type);
    void update();
    void draw() const ;
};
