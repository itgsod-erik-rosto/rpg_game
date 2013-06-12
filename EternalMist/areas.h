
struct AREAS : WORLD
{

char* name;

void a_draw();
}t_area[0];

void AREAS::a_draw()
{
    if (d_once!=true)
    {
        bitmap=load_bitmap(getimgsource(), NULL);
        d_once=true;
    }
    
masked_blit(bitmap, buffer, 0, 0, getposx()+ofX, getposy()+ofY, getwidth(), getheight());

}

void load_areas()
{
t_area[0].isInArea="World";
t_area[0].setimgsource("Data/Images/Areas/testhall1.bmp");
t_area[0].name="testhall1";
t_area[0].setwidth(3000);
t_area[0].setheight(3000);
t_area[0].setpos(0, 0);
}
