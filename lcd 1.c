#include<reg51.h>
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void lcdcmd (char com);
void lcddat (char dat);
void delay();
void main()
{
P2=0x00;
while(1)
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
lcddat ('r');
delay();
lcddat ('e');
delay();
lcddat('d');
delay();
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