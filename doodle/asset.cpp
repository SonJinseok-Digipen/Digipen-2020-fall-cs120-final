#pragma once
#include"asset.h"
void load_image() 
{
    Jelly_image_map[asset::Sprite::blue] = doodle::Image {"assets/jelly/blue.png"};
    Jelly_image_map[asset::Sprite::green] = doodle::Image{"assets/jelly/green.png"};
    Jelly_image_map[asset::Sprite::grey]  = doodle::Image{"assets/jelly/grey.png"};
    Jelly_image_map[asset::Sprite::purple] = doodle::Image{"assets/jelly/purple.png"};
    Jelly_image_map[asset::Sprite::red]    = doodle::Image{"assets/jelly/red.png"};
    Jelly_image_map[asset::Sprite::yellow] = doodle::Image{"assets/jelly/yellow.png"};
}

void clear_image() 
{
    Jelly_image_map.clear();
}