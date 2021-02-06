#include<iostream>
#include"doodle/doodle.hpp"
#include<string>
#include"asset.h"
#include"sence.h"
int main() 
{ 
    
    sence game;
    game.setup();
    while (!doodle::is_window_closed())
    {
        
        game.update();
        game.draw();
        
    }
    game.save_data();
    clear_image();


}