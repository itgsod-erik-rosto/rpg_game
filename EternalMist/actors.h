

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
        char* action;
        char* animation;
        
        string s_name;
          string testname;
          int anim_g_timer;
          
    string getname();
    void setname(string n);
    
    void a_draw();
    void actions();
    void animations();
    void displayvalues();
    void collision();
    void loadproperties();
    
}testnpc[2], NPC[10];

void ACTORS::actions()
{
 if (action=="walk_down")
 {
        animation=action;
        dir=1;
        x_vel=0;
        y_vel=speed;   
    }   
    else if (action=="walk_up")
 {
         animation=action;
        dir=2;
        x_vel=0;
        y_vel= -speed;   
    }   
    else if (action=="walk_left")
 {
        dir=3;
        y_vel=0;
        x_vel=-speed;   
    }   
    else if (action=="walk_right")
 {
        dir=4;
        y_vel=0;
         x_vel=speed;   
    }   
    if (action=="idle")
    {
     x_vel=0;
     y_vel=0;   
    }
}
void ACTORS::animations()
{
    if (dir==1)
    {
        c_a_pY=0;
    }
    if (dir==2)
    {
     c_a_pY=150;   
    }
    if (dir==3)
    {
        c_a_pY=301;
    }
    if (dir==4)
    {
     c_a_pY=452;   
    }
    if (animation=="walk_up")
    {
        
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
   
    actions();
    animations();
    
     action="idle";
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
     action="walk_down";
    }   
     if (key[KEY_UP])
 {
    action="walk_up";
    }  
    
     if (key[KEY_RIGHT])
 {
    action="walk_right";
    }
     
     if (key[KEY_LEFT])
 {
     action="walk_left";
    }
    
         
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
 testchar.setimgsource("Data/Images/Characters/testchar1.bmp");   
 testchar.isInArea="testhall1";

}
