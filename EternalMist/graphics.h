#include <iostream>
#include <fstream>


BITMAP *buffer;
BITMAP *b_world;

int ofX;
int ofY;

class GRAPHICS : GAME // I declare the class "Graphics" which is for the non-physical objects in the game
{//such as the width, height or depth of the screen or if it's windowed or fullscreen.
protected:
    int width;
    int height;
    int depth;
    char *imgsource;
    
public:
    int getwidth();
    int getheight();
    int getdepth();
    
    void setwidth(int w);
    void setheight(int h);
    void setdepth(int d);
    
    void imgerror();
}Screen;

void GRAPHICS::imgerror()// This function checks if the object has a picture or not.
{//If a path to a picture hasn't been specified it will show an error picture instead of crashing the game.
 if (imgsource==NULL)
 {
     imgsource="Data/Images/errorimg.bmp";   
     setwidth(100);
     setheight(100);
    }
}

void GRAPHICS::setwidth(int w)
{
width = w;
}

void GRAPHICS::setheight(int h)
{
height = h;
}

void GRAPHICS::setdepth(int d)
{
depth = d;
}

int GRAPHICS::getwidth()
{
 
return (width);    
}

int GRAPHICS::getheight()
{
 
return (height);    
}

int GRAPHICS::getdepth()
{
 
return (depth);    
}
