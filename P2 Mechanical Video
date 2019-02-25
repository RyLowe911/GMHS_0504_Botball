#include <kipr/botball.h>

void drive_forward(int distance);
void drive_backward (int distance);
void rightturn(int degrees);
void leftturn(int degrees);

int main()
{
    enable_servos();
    set_servo_position(3,600);
    msleep(100);
    set_servo_position(3,1615);
    drive_forward(145);
    set_servo_position(3,600);
    msleep(100);
    disable_servos();
    ao();
    return 0;
}

void drive_forward (int distance)
       {
	cmpc(0);
    while(abs(gmpc(0))<distance)
    {
        mav(0,700);
        mav(3,740);
        msleep(distance*152);
    }
       }

void drive_backward (int distance)
{
    cmpc(0);
    while(abs(gmpc(0))<distance)
    {
        mav(0,-700);
        mav(3,-700);
        msleep(distance*152);

    }
}
void rightturn (int degrees)
      {
    cmpc(0);
    while(abs(gmpc(0))<degrees)
    {
	mav(0,700);
	mav(3,-700);
    msleep(degrees*15);
    }
      }
	
void leftturn (int degrees)	
      {
    cmpc(0);
    while(abs(gmpc(0))<degrees)
    {
	mav(0,-700);
	mav(3,715);
    msleep(degrees*15);
    }
      }

