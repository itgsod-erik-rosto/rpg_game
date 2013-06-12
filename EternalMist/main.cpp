#include <main.h>
int i1;



int main(){
    
    declarevalues();
 
 
    allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300, 700, 0, 0);
    
    buffer = create_bitmap(Screen.getwidth(), Screen.getheight());


while (!key[KEY_ESC]) // Here is the game loop.
{

    declarearray();
    create_world();
     
     
     circlefill(buffer, mouse_x, mouse_y, 5, makecol(255, 0, 0));
     
     
    blit(buffer, screen, 0, 0, 0, 0, Screen.getwidth(), Screen.getheight());
    clear_bitmap(buffer);
}   
    return 0;   
}   
END_OF_MAIN(); 
