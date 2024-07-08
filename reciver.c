#include<reg51.h>
sbit inPin1=P1^0;
sbit inPin2=P1^1;
sbit rs=P1^3;
sbit rw=P1^4;
sbit en=P1^5;
void lcdcmd (char com);
void lcddat (char dat);
void delay();
void main()
{
P2=0x00;
	inPin1=inPin2=0;
while(1)
{
	if(inPin1==1)
{
lcdcmd (0X38);
delay();
lcdcmd (0X01);
delay();
lcdcmd (0x06);
delay();
lcdcmd (0x0C0);
delay();
lcdcmd (0X80);
delay();
lcddat ('l');
delay();
lcddat ('i');
delay();
lcddat('v');
delay();
	lcddat ('e');
delay();
lcddat ('w');
delay();
lcddat('i');
delay();
lcddat ('r');
delay();
lcddat ('e');
delay();
rs=0;
rw=0;
en=1;
delay();
en=0;
}
void lcddat (char dat)
{
P2=dat;
rs=1;
rw=0;
en=1;
delay();
en=0;
}
}
else
{
	inPin1=inPin2=0;
}
if(inPin2==1)
{
lcdcmd (0X38);
delay();
lcdcmd (0X01);
delay();
lcdcmd (0x06);
delay();
lcdcmd (0x0C0);
delay();
lcdcmd (0X80);
delay();
lcddat ('m');
delay();
lcddat ('a');
delay();
lcddat('n');
delay();
lcddat ('i');
delay();
lcddat ('s');
delay();
lcddat('h');
delay();
lcddat('a');
delay();
}
else
{
	inPin1=inPin2=0;
}
}
}
void lcdcmd (char cmd)
{
P2=cmd;
rs=0;
rw=0;
en=1;
delay();
en=0;
}
void lcddat (char dat)
{
P2=dat;
rs=1;
rw=0;
en=1;
delay();
en=0;
}