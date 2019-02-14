#include <kipr/botball.h>

void drive_forward(int distance);
void rightturn(int degrees);
void leftturn(int degrees);

int main()
{
    //add wait for light and stop in 118 secs
    drive_forward(450);
    leftturn(90);
    drive_forward(800);
    rightturn(90);
    drive_forward(10);
    ao();
    return 0;
}

//int seconds or unit forward? using encoders? so void function (number of units forward or degrees)
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

