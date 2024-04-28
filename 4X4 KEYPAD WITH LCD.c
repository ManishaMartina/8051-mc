#include<reg51.h>
sbit r1=P1^0;
sbit r2=P1^1;
sbit r3=P1^2;
sbit r4=P1^3;
sbit c1=P1^4;
sbit c2=P1^5;
sbit c3=P1^6;
sbit c4=P1^7;
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void lcdcmd (char com);
void lcddat (char dat);
void delay();
void delay1();
void main()
{
P2=0x00;
while(1)
{
lcdcmd(0X38);
delay();
lcdcmd(0X01);
delay();
lcdcmd(0X06);
delay();
lcdcmd(0X0C);
delay();
lcdcmd(0X80);
delay();
r1=0;
if(c1==0)
{
lcddat('7');
delay();
delay1();
}
if(c2==0)
{
lcddat('8');
delay();
delay1();
}
if(c3==0)
{
lcddat('9');
delay();
delay1();
}
if(c4==0)
{
lcddat('/');
delay();
delay1();
}
r1=1;r2=0;
if(c1==0)
{
lcddat('4');
delay();
delay1();
}
if(c2==0)
{
lcddat('5');
delay();
delay1();
}
if(c3==0)
{
lcddat('6');
delay();
delay1();
}
if(c4==0)
{
lcddat('*');
delay();
delay1();
}
r2=1;r3=0;
if(c1==0)
{
lcddat('1');
delay();
delay1();
}
if(c2==0)
{
lcddat('2');
delay();
delay1();
}
if(c3==0)
{
lcddat('3');
delay();
delay1();
}
if(c4==0)
{
lcddat('-');
delay();
delay1();
}
r3=1;r4=0;
if(c1==0)
{
lcddat('o');
lcddat('n');
lcddat('/');
lcddat('c');
delay();
delay1();
}
if(c2==0)
{
lcddat('0');
delay();
delay1();
}
if(c3==0)
{
lcddat('=');
delay();
delay1();
}
if(c4==0)
{
lcddat('+');
delay();
delay1();
}
r4=1;
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
