#include<reg51.h>
sbit relaypin=P2^0;
void delayms(int);
void main()
{
	do 
	{
		relaypin=1;
		delayms(10000);
		relaypin=0;
		delayms(10000);
	}
	while(1);
}
void delayms(int k)
{
	int j;
	int i;
	for(i=0;i<k;i++)
	{
		for(j=0;j<100;j++);
	}
}
