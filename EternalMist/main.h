#include <allegro.h>
int i;

using namespace std;

class GAME // This is the base class for the game. All the other classes will
{//be subclasses to this one.
    
};

#include <world.h>
#include <actors.h>
#include <areas.h>
#include <objects.h>


void Loadproperties()
{
        

    NPC[i2].isNPC=true;
    
         ifstream NPCS("Data/NPC/NPCS.dat");
         
        
                
            string Name;
            bool IsPlayer;
            int Width;
            int Height;
            int Depth;
            int Speed;
            int X;
            int Y;
            int End;
            string ImgSource;
            string IsInArea;
            
               while (i2<NPC_amount)
        {
    NPCS >> Name;
    NPC[i2].setname(Name);
    
    NPCS >> IsPlayer;
    NPC[i2].isPlayer=IsPlayer;
    
    NPCS >> Width;
    NPC[i2].setwidth(Width);
    
    NPCS >> Height;
    NPC[i2].setheight(Height);
    
    NPCS >> Depth;
    NPC[i2].setdepth(Depth);
    
    NPCS >> Speed;
    NPC[i2].setspeed(Speed);
    
      NPCS >> X;
      NPCS >> Y;
      NPC[i2].setpos(X+ofX, Y+ofY);
    
     NPCS >> ImgSource;
     
       char * IS = new char[ImgSource.size() + 1];
     std::copy(ImgSource.begin(), ImgSource.end(), IS);

IS[ImgSource.size()] = '\0';

NPC[i2].setimgsource(IS);
  

    NPCS >> IsInArea;
    
      char * IIA = new char[IsInArea.size() + 1];
std::copy(IsInArea.begin(), IsInArea.end(), IIA);

IIA[IsInArea.size()] = '\0';

NPC[i2].isInArea=IIA;

   i2++;
} 

}

void declarearray()
{
   

i++;
}

void ACTORS::collision()
{
    
     if ((getposx()+getwidth() >= crate[0].getposx()+ofX && getposx() <= crate[0].getposx()+crate[0].getwidth()+ofX)
     && (getposy()+getheight()-crate[0].getdepth()-getdepth() >= crate[0].getposy()+ofY && getposy() <= crate[0].getposy()+crate[0].getheight()-getheight()+getdepth()+ofY))
     {    
            // Approach from left
     if (getposx()+getwidth() >= crate[0].getposx()+ofX && getposx()+getwidth() <= crate[0].getposx()+crate[0].getwidth()+ofX)
     {
     ofX+=crate[0].getposx()-getposx()+getwidth(); 
     }
     
      // Approach from right
       else if (getposx() >= crate[0].getposx()+ofX 
             && getposx() <= crate[0].getposx()+crate[0].getwidth()+ofX)
       {
      ofX-=crate[0].getposx()-getposx()+getwidth();                                                         
        }
        
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
   
   
    testchar.a_draw();
  
   testchar.collision();
    testchar.controls();
    
    NPC[0].a_draw();
    NPC[0].displayvalues();
    
    NPC[1].a_draw();
    NPC[1].displayvalues();
    
    NPC[2].a_draw();
    NPC[2].displayvalues();
    
    rect(buffer, testchar.getposx(), testchar.getposy(), testchar.getposx()+testchar.getwidth(), testchar.getposy()+testchar.getheight(), makecol(0, 0, 0));
    circlefill(buffer, testchar.getposx()+testchar.getwidth()/2, testchar.getposy()+testchar.getheight()/2, 3, makecol(0, 255, 0));
}

