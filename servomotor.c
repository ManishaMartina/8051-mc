#include<reg51.h>
sbit motorpina=P2^0;
void delay(unsigned int t)
{
	unsigned int i;
	while(t--)
	{
		for (i=0;i<1275;i++);
	}
}
void main()
{
	motorpina=0;
	while(1)
	{
		motorpina=1;
		delay(100);
		motorpina=0;
		delay(100);
	}
}
		