#include <allegro.h>
int i;

class GAME // This is the base class for the game. All the other classes will
{//be subclasses to this one.
    
};

#include <world.h>
#include <actors.h>
#include <areas.h>
#include <objects.h>

void declarearray()
{
   

i++;
}
void ACTORS::collision()
{
     if ((getposx()+getwidth() >= crate[0].getposx()+ofX && getposx() <= crate[0].getposx()+crate[0].getwidth()+ofX)
     && (getposy()+getheight()-crate[0].getdepth()-getdepth() >= crate[0].getposy()+ofY && getposy() <= crate[0].getposy()+crate[0].getheight()-getheight()+getdepth()+ofY))
     {
                              if (getposx()+getwidth() >= crate[0].getposx()+ofX && getposx()+getwidth() <= crate[0].getposx()+crate[0].getwidth()+ofX)
     ofX+=crate[0].getposx()-getposx()+getwidth();    
       
       else
      ofX-=crate[0].getposx()-getposx()+getwidth();                                                              
     }
}


void declarevalues()
{
 Screen.setdepth(32);  //Screen is an object of "GRAPHICS" so its values can also be declared with these commands.
 Screen.setwidth(1300);
 Screen.setheight(700);
 
load_objects();
load_areas();
load_actors();
}

void create_world()
{
clear_to_color(buffer, makecol(255, 255, 255));



    
    
   t_area[0].a_draw();
   
   crate[0].prep();
   
   line(buffer, testchar.getposx(), testchar.getposy()+testchar.getheight()-testchar.getdepth(), testchar.getposx()+testchar.getwidth(), testchar.getposy()+testchar.getheight()-testchar.getdepth(), makecol(255, 0, 0));
   
   
    testchar.draw();
   testchar.collision();
    testchar.controls();
    
    rect(buffer, testchar.getposx(), testchar.getposy(), testchar.getposx()+testchar.getwidth(), testchar.getposy()+testchar.getheight(), makecol(0, 0, 0));
    circlefill(buffer, testchar.getposx()+testchar.getwidth()/2, testchar.getposy()+testchar.getheight()/2, 3, makecol(0, 255, 0));
}

