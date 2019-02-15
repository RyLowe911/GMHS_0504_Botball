#include <kipr/botball.h>

void drive_forward(int distance);
void drive_backward(int distance);
void rightturn(int degrees);
void leftturn(int degrees);

int main()
{
	wait_for_light(3);
    shut_down_in(118);
    drive_forward(450);
    leftturn(90);
    drive_forward(800);
    rightturn(90);
    drive_forward(10);
    //end of 0-15 seconds
    //close claw
    rightturn(180);
    //IR through flood zone to black tape
    //end of 0-30 seconds
    //scan the rightmost building for fire
    //if the building is burning
        drive_forward();
    	drive_backward();
    //else
        leftturn(90);
    	drive_forward();
    	rightturn(90);
    	drive_forward();
    	drive_backward();
    //end of 30-45 seconds
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
