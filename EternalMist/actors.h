

int i3;
     int i2;

int NPC_amount=10;

struct ACTORS : WORLD // This class (struct) will take care of every "living" thing in the game.
{//Including the player.


protected:
    string name;
    int HP;
    int MP;
    int LVL;
    int dir;
    int anim_timer;
   int anim_frames_done;
    
    
    public:
        string s_name;
          string testname;
          int anim_g_timer;
          
    string getname();
    void setname(string n);
    
    void a_draw();
    void animations();
    void displayvalues();
    void collision();
    void loadproperties();
    
}testnpc[2], NPC[10];


void ACTORS::animations()
{
    if (dir==1)
    c_a_pY=0;
    if (dir==2)
    c_a_pY=150;
    
    anim_g_timer++;
    
    if (anim_g_timer>=100)
    {
    
    anim_timer++;
    
    if (anim_timer>=30+c_a_pX/anim_timer)
    {
c_a_pX+=getwidth()+1;
anim_timer=0;
anim_frames_done++;


if (anim_frames_done==3)
{
 c_a_pX=0;   
 anim_frames_done=0;
anim_g_timer=0;
}
}

}

}

void ACTORS::displayvalues()
{
 textprintf_ex(buffer, font, getposx()+getwidth()/2+ofX, getposy()-20+ofY, makecol(255, 100, 300), -1, "%s", getname().c_str());   
}
void ACTORS::setname(string n)
{
 name = n;
}
string ACTORS::getname()
{
string n = (name);

return n;   

}
        void ACTORS::a_draw()
{
    animations();
    
    draw();
}
           
struct PLAYER : ACTORS // I make a struct that is only going to be used by one object because 
{ // the player is going to have a lot of attributes that nobody else is allowed to have.
    
    void controls();
    
}testchar;


void PLAYER::controls()
{
     
 if (key[KEY_DOWN])
 {
     y_vel=speed;   
    dir=1;
    }   
     
     if (key[KEY_UP])
 {
     y_vel=-speed;   
     dir=2;
    }  
    if (!key[KEY_UP] && !key[KEY_DOWN])
    y_vel=0; 
    
     if (key[KEY_RIGHT])
 {
     x_vel=speed;   
    }
     
     if (key[KEY_LEFT])
 {
     x_vel=-speed;   
    }
     if (!key[KEY_RIGHT] && !key[KEY_LEFT])
    x_vel=0; 
         
}

void load_actors()
{

//testchar.loadproperties();
  testchar.setspeed(2);
 testchar.isPlayer=true;
 testchar.setwidth(75);
 testchar.setheight(150);
 testchar.setdepth(20);
 testchar.setpos(Screen.getwidth()/2, Screen.getheight()/2);
 testchar.setimgsource("Data/Images/testchar1.bmp");   
 testchar.isInArea="testhall1";

}
