#include"LPC214x.h"

int main(void)
{
	int i=0,j=0;

 	IO0DIR=0xffffffff;
	IO1DIR=0xffffffff;
	while(1)
	{
	  {
	   IO0SET=0x80000000;
	   IO1SET=0x02000000;
	 	for(i=0;i<1000;i++)
	 		{
	 			for(j=0;j<1000;j++)
				{
					;
				}
			}
   	   }
   
   	  {
	   IO0CLR=0x80000000;
	   IO1CLR=0x02000000;
	 	for(i=0;i<1000;i++)
	 		{
	 		for(j=0;j<1000;j++)
				{
					;
				}
			}
   	   }
   }
}

/*
Step-1: Specify the direction of pins as output using IO1DIR.
Step-2:Set pins P1.16-P1.23 using IO1SET.
Step-3:Clear pins P1.16-P1.23 using IO1CLR.
Step-4:Go to step-2.
*/