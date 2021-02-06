#include "button.h"

button::button(double posx, double posy) : posx{posx}, posy{posy} {};

bool button::isclicked() 
{
	const double left = posx - width / 2;
    const double right = posx + width / 2;
    const double top   = posy - height / 2;
    const double bottom = posy + height / 2;

    double mousex = doodle::get_mouse_x();
    double mousey = doodle::get_mouse_y();

    bool withinx = mousex > left && mousex < right;
    bool withiny = mousey > top && mousey < bottom;
    bool mouseisover = withinx && withiny;
    bool isclicked   = mouseisover && mousewaspressed && !doodle::MouseIsPressed;
    mousewaspressed  = doodle::MouseIsPressed;
    return isclicked;

}


void button::draw() 
{
    doodle::push_settings();
    doodle::draw_rectangle(posx, posy, width, height);
    doodle::push_settings();
    doodle::set_font_size(21);
    doodle::set_fill_color(0);
    doodle::draw_text(label, posx-45, posy+20);
    doodle::pop_settings();
}