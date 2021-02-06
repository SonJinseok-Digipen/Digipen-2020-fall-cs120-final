#include "sence.h"
#include"asset.h"

void sence::setup() 
{
    const std::string window_title{"Jelly bubble"};
    doodle::create_window(window_title, 1000, 1000);
    doodle::set_frame_of_reference(doodle::FrameOfReference::LeftHanded_OriginTopLeft);
    doodle::set_rectangle_mode(doodle::RectMode::Center);
    load_image();
    if(std::filesystem::exists("result.txt"))
    {
        std::ifstream ifs{"result.txt"};
        double        temp_posx;
        double        temp_posy;
        double        width;
        double        height;
        int           sprite_type;
        while (ifs>>temp_posx>>temp_posy>>width>>height>>sprite_type)
        {
            Jelly temp_jelly{temp_posx, temp_posy, width, height, static_cast<asset::Sprite>(sprite_type)};
            jellys.push_back(temp_jelly);
         }


    }
}

void sence::update() 
{ 
    
    doodle::update_window();
    doodle::clear_background(doodle::HexColor{0x03b6fcff});
    for (auto& b : jellys)
    {
        b.update();
    }
    
    if (button1.isclicked())
    {
        double temp_posx=doodle::random(100,900);
        double temp_posy=doodle::random(100,900);
        double temp_width = doodle::random(100, 200);
        double temp_height = doodle::random(100, 200);
        asset::Sprite temp_sprite = static_cast<asset::Sprite>(doodle::random(0, 7));
        Jelly         temp_jelly{temp_posx, temp_posy, temp_width, temp_height,temp_sprite};
        jellys.push_back(temp_jelly);
        std::cout << jellys.size() << std::endl;
        save_data();
    }

    
    



}


void sence::draw() 
{ 
    for (const auto &b:jellys)
    {
        b.draw();
    }

    button1.draw();

}


void sence::save_data() 
{
    std::ofstream ofs{"result.txt"};
    for (auto i=jellys.begin(); i!=jellys.end(); i++)
    {
        ofs << (*i).posx << " " << (*i).posy << " " << (*i).width << " " << (*i).height << " "
            << static_cast<int>((*i).sprite_type) << '\n';
    }
}

