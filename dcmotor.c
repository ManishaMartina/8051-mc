#include<reg51.h>
sbit motorpina=P2^0;
sbit motorpinb=P2^1;
void delay(void);
void delay1(void);
void main()
{
	while(1)
	{
		motorpina=1;
		motorpinb=0;
		delay();
		motorpina=1;
		motorpinb=1;
		delay1();
		motorpina=0;
		motorpinb=1;
		delay();
		motorpina=0;
		motorpinb=0;
		delay1();
	}
}
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++);
	}
}
	void delay1()
{
	int i,j;
	for(i=0;i<500;i++)
	{
		for(j=0;j<500;j++);
	}
}	