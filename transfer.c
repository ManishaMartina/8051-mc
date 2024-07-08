#include<reg51.h>
sbit sw1=P1^0;
sbit outPin1=P2^0;
sbit sw2=P1^1;
sbit outPin2=P2^1;

void main()
{
	sw1=1;
	sw2=1;
while(1)
{
if(sw1==0)
{
outPin1=0;
	while(sw1==0);
}
outPin1=1;
if(sw2==0)
{
	outPin2=0;
	while(sw2==0);
}
outPin2=1;
}
	
	
}

	
	


