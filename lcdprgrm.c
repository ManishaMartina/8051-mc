#include<reg51.h>
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void lcdcmd(char com);
void lcddat(char dat);
void delay();
void seven_seg();
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
		lcdcmd(0x0F);
		delay();
		lcdcmd(0x80);
		delay();
		lcddat('M');
		delay();
		lcddat('A');
		delay();
		lcddat('N');
		delay();
		lcddat('I');
		delay();
		lcddat('S');
		delay();
		
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

void seven_seg()
{
	unsigned char seg[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	unsigned char x;
	unsigned int j;
	P0=0x00;
	while(1)
	{
		for(x=0;x<10;x++)
		{
			P0=seg[x];
			for(j=0;j<1275;j++);
		}
	}
}

		