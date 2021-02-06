#include "Jelly.h"
Jelly::Jelly(double posx, double posy, double width, double height, asset::Sprite sprite_type)
    : posx(posx), posy(posy), width(width), height(height), sprite_type(sprite_type){};

void Jelly::update() 
{
    posx = posx +doodle::random(-5,5);
    posy = posy + doodle::random(-5, 5);
}

void Jelly::draw() const
{ 
    
    //doodle::draw_image(Jelly_image_map[sprite_type], posx, posy); 
    doodle::draw_image(Jelly_image_map[sprite_type], posx,posy);
}

