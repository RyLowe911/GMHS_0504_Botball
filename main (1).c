#include <kipr/botball.h>

void drive_forward(int distance);
void drive_backward(int distance);
void rightturn(int degrees);
void leftturn(int degrees);

int main()
{
    wait_for_light(3);
    shut_down_in(118);
    drive_forward(45);
    leftturn(90);
    drive_forward(80);
    rightturn(90);
    drive_forward(1);
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
    rightturn(180);
    drive_forward(); //towards the utility zone
    rightturn(90);
    drive_forward(); //move to the black tape around the utility zone
    drive_forward(); //move into utility zone
    //open claw around Water Reclamation Unit
    //end of 45-60 seconds
    drive_backward(); //to the edge of the utility zone
    rightturn(90);
    drive_forward(); 
    rightturn(90);
    drive_foward();
    //open claw around gas valve
    //close claw around gas valve
    //lift claw with gas valve
    //end of 60-75 seconds 
    drive_backward();
    rightturn(90);
    drive_forward();
    //end of 75-90 seconds
    leftturn(90);
    drive_forward();
    rightturn(90);
    drive_foward();
    //rotate claw 90 degrees left
    //open claw around gas valve
    //end of 90-105 seconds 
    drive_backward();
    leftturn(90);
    drive_forward(); //towards the right power line
    //raise arm to connect power line
    //end of 105-120 seconds
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
