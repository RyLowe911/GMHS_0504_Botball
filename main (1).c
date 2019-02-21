#include <kipr/botball.h>

int main()
{
    rightturn(180);
    //NOTICE: FOR RIGHT NOW THIS CODE ONLY RECORDS THE VALUES OF COLORS SEEN BY THE IR CAMERA, AND DOES NOT(!!!) MOVE THE ROBOT THROUGH THE FLOOD ZONE
    while (digital(8) != 1) //IR through flood zone to black tape
    {
        printf("reflectance: %d\n", analog(0));
        msleep(1000);
    }
    //end of 15-30 seconds
    return 0;
}
