#include<reg51.h>
sbit R1=P1^0;
sbit R2=P1^1;
sbit R3=P1^2;
sbit R4=P1^3;
sbit C1=P1^4;
sbit C2=P1^5;
sbit C3=P1^6;
sbit C4=P1^7;
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void lcdcmd(char com);
void lcddat(char dat);
void delay();
void delay1();
void main()
{
	P2=0x00;
	while(1)
	{
		lcdcmd(0x38);
		delay();
		lcdcmd(0x01);
		delay();
		lcdcmd(0x06);
		delay();
		lcdcmd(0x0c);
		delay();
		lcdcmd(0x80);
		delay();
		R1=0;
		if(C1==0)
		{
			lcddat('7');
			delay();
			delay1();
		}
		if(C2==0)
		{
			lcddat('8');
			delay();
			delay1();
		}
		if(C3==0)
		{
			lcddat('9');
			delay();
			delay1();
		}
		if(C4==0)
		{
			lcddat('/');
			delay();
			delay1();
		}
		R1=1;R2=0;
		if(C1==0)
		{
			lcddat('4');
			delay();
			delay1();
		}
		if(C2==0)
		{
			lcddat('5');
			delay();
			delay1();
		}
		if(C3==0)
		{
			lcddat('6');
			delay();
			delay1();
		}
		if(C4==0)
		{
			lcddat('*');
			delay();
			delay1();
		}
		R2=1;R3=0;
		if(C1==0)
		{
			lcddat('1');
			delay();
			delay1();
		}
		if(C2==0)
		{
			lcddat('2');
			delay();
			delay1();
		}
		if(C3==0)
		{
			lcddat('3');
			delay();
			delay1();
		}
		if(C4==0)
		{
			lcddat('-');
			delay();
			delay1();
		}
		R3=1;R4=0;
		if(C1==0)
		{
			lcddat('O');
			lcddat('N');
			delay();
			delay1();
		}
		if(C2==0)
		{
			lcddat('0');
			delay();
			delay1();
		}
		if(C3==0)
		{
			lcddat('=');
			delay();
			delay1();
		}
		if(C4==0)
		{
			lcddat('+');
			delay();
			delay1();
		}
		R4=1;
	}
}
void lcdcmd(char com)
{
	P2=com;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
}
void lcddat(char dat)
{
	P2=dat;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
}
void delay()
{
	unsigned int i;
	for(i=0;i<10000;i++);
}
void delay1()
{
	unsigned int i,j;
	for(i=0;i<200;i++)
	{
		for(j=0;j<2000;j++);
	}
}

	
