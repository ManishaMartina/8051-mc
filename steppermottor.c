#include<reg51.h>
sbit motorpina=P2^0;
sbit motorpinb=P2^1;
sbit motorpinc=P2^2;
sbit motorpind=P2^3;
void delay(void);
void main()
{
	while(1)
	{
		motorpina=1;
		motorpinb=motorpinc=motorpind=0;
		delay();
		motorpinb=1;
		motorpina=motorpinc=motorpind=0;
		delay();
		motorpinc=1;
		motorpina=motorpinb=motorpind=0;
		delay();
		motorpind=1;
		motorpina=motorpinb=motorpinc=0;
		delay();
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
