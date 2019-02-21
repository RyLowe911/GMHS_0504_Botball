#include <kipr/botball.h>

void drive_forward(int distance);
void drive_backward (int distance);
void rightturn(int degrees);
void leftturn(int degrees);

int main()
{
    //scan the rightmost building for fire
    //if the building is burning
    if //color camera thingy is true
    	drive_backward(20);
    else //drive to left?
        leftturn(90);
    	drive_forward(25);
    	rightturn(90);
    	drive_backward(20);
    return 0;
}

void drive_forward (int distance)
       {
	cmpc(0);
    while(abs(gmpc(0))<distance)
    {
        mav(0,500);
        mav(3,500);
        msleep(distance/25*1000);
    }
       }

void drive_backward (int distance)
{
    cmpc(0);
    while(abs(gmpc(0))<distance)
    {
        mav(0,-500);
        mav(3,-500);
        msleep(distance/25*1000);
    }
}
void rightturn (int degrees)
      {
    cmpc(0);
    while(abs(gmpc(0))<degrees)
    {
	mav(0,500);
	mav(3,-500);
	msleep(degrees*20);
    }
      }
	
void leftturn (int degrees)	
      {
    cmpc(0);
    while(abs(gmpc(0))<degrees)
    {
	mav(0,-500);
	mav(3,500);
	msleep(degrees*20);
    }
      }

