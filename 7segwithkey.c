#include<reg51.h>
sbit R1=P1^0;
sbit R2=P1^1;
sbit R3=P1^2;
sbit R4=P1^3;
sbit C1=P1^4;
sbit C2=P1^5;
sbit C3=P1^6;
void seg(unsigned int);
void main()
{
	
	while(1)
	{
		R1=0;
		if(C1==0)
		{
			seg(0xF9);
		
		}
		if(C2==0)
		{
			seg(0xA4);
		}
		if(C3==0)
		{
				seg(0xB0);
		}
		
		R1=1;R2=0;
		if(C1==0)
		{
				seg(0x99);
		}
		if(C2==0)
		{
				seg(0x92);
		}
		if(C3==0)
		{
				seg(0x82);
		}
		
		R2=1;R3=0;
		if(C1==0)
		{
				seg(0XF8);
		}
		if(C2==0)
		{
				seg(0x80);
		}
		if(C3==0)
		{
				seg(0x90);
		}
		
		R3=1;R4=0;
		if(C2==0)
		{
				seg(0xC0);
		}
		R4=1;
	}
}
void seg(unsigned int c)
{
	P2=0x00;
	P2=c;
}

