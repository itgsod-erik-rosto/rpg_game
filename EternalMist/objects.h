struct OBJECTS : WORLD
{

char* object_type;

void prep();
}square[10], crate[10];

void OBJECTS::prep()
{
 

    if (object_type=="crate_medium")
{
    setwidth(88);
    setheight(92);
    setdepth(30);
    setimgsource("Data/Images/Objects/crate1.bmp");
}

if (testchar.isInArea==isInArea)
{
    draw();
}

}

void load_objects()
{
  crate[0].object_type="crate_medium";
    crate[0].setpos(500, 200);
    crate[0].isInArea="testhall1";   
}

