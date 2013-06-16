#include <graphics.h>


class WORLD : GRAPHICS // I declare the class "WORLD" which will be used for all the "physical"
{//objects in the game.
    protected: 
   int width;
   int height;     
   int depth;
   int x;
   int x2;
   int y;
   int y2;
   int speed;
   
   int x_vel;
   int y_vel;
   
   
   BITMAP *bitmap;
   
   public:
        bool hasProperties;
        bool isPlayer;
        char* isInArea;
    int getwidth();
    int getheight();
    int getdepth();
    int getpos();
    int getposx();
    int getposy();
    int getspeed();
    char* getimgsource();
    bool d_once;
    
    void setwidth(int w);
    void setheight(int h);
    void setdepth(int d);
    void setimgsource(char *is);
    void setpos(int X, int Y);
    void setspeed(int spd);
    
    
    void velocity();
    void draw();
};


void WORLD::velocity()
{
ofY-=y_vel;
//y2+=y_vel;

ofX-=x_vel;
//x2+=x_vel;
}

void WORLD::draw()
{
   imgerror();
   
   if (isInArea==NULL)
   {
        isInArea="testhall1";
    }
   
   bitmap = load_bitmap(imgsource, NULL);
 

   if (isPlayer!=true)
   masked_blit(bitmap, buffer, 0, 0, getposx()+ofX, getposy()+ofY, getwidth(), getheight());
   else
   masked_blit(bitmap, buffer, 0, 0, getposx(), getposy(), getwidth(), getheight());
   
    if (isPlayer!=true)
line(buffer, getposx()+ofX, getposy()+ofY+getheight()-getdepth(), getposx()+ofX+getwidth(), getposy()+ofY+getheight()-getdepth(), makecol(255, 0, 0));
   
   
   velocity();
}
char* WORLD::getimgsource()
{
 char* imgs=imgsource;
 
 return (imgs);   
}
void WORLD::setimgsource(char *is)
{
 imgsource=is;
}
int WORLD::getwidth()
{
    int w = (width);
    
    return(w);
}
int WORLD::getheight()
{
    int h = (height);
    
    return(h);
}
int WORLD::getdepth()
{
 int d = (depth);
 
 return(d);   
}

void WORLD::setdepth(int d)
{
     depth = d;
     }
void WORLD::setwidth(int w)
{
    width = w;
    
}
void WORLD::setheight(int h)
{
    height = h;
}
void WORLD::setspeed(int spd)
{
 speed = spd;   
}
int WORLD::getspeed()
{
    int spd = (speed);
    
    return (spd);
}
int WORLD::getpos()
{
    int posX = (x + getwidth()/2);
    int posY = (y + getheight()/2);
    
    return(posX, posY);
}
int WORLD::getposx()
{
    int posX = (x + getwidth()/2);
    
    return(posX);
}
int WORLD::getposy()
{
    int posY = (y + getheight()/2);
    
    return(posY);
}
void WORLD::setpos(int X, int Y)
{
x = X - getwidth();
x2 = X + getwidth();

y = Y - getheight();   
y2 = Y + getheight();   
}






