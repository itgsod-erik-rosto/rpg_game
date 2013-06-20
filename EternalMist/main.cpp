#include <main.h>
int i1;

string testname;

int main(){
    
    declarevalues();
 
 
    allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, Screen.getwidth(), Screen.getheight(), 0, 0);
    
    buffer = create_bitmap(Screen.getwidth(), Screen.getheight());


Loadproperties();


while (!key[KEY_ESC]) // Here is the game loop.
{

    declarearray();
    create_world();
     
     
     circlefill(buffer, mouse_x, mouse_y, 5, makecol(255, 0, 0));
    
    
    


    
        textprintf_ex(buffer, font, 10, 10, makecol(255, 100, 200), -1, "%s", testchar.testname.c_str() );
        
    
         
       
       
              
    blit(buffer, screen, 0, 0, 0, 0, Screen.getwidth(), Screen.getheight());
    clear_bitmap(buffer);
}   
    return 0;   
}   
END_OF_MAIN(); 
