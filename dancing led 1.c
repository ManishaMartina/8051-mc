#include<reg51.h>
sbit led1=P2^0;
sbit led2=P2^1;
sbit led3=P2^2;
sbit led4=P2^3;
sbit led5=P2^4;
sbit led6=P2^5;
sbit led7=P2^6;
sbit led8=P2^7;
sbit led9=P3^0;
void delay (unsigned int);
void maim()
{
while(1)
{
	led1=led2=led3=led4=led5=led6=led7=led7=led8=led9=0;
led1=1;
delay(300);
led1=0;
delay(200);
led2=1;
delay(300);
led2=0;
delay(200);
led3=1;
delay(300);
led3=0;
delay(200);
led4=1;
delay(300);
led4=0;
delay(200);
led5=1;
delay(300);
led5=0;
delay(200);
led6=1;
delay(300);
led6=0;
delay(200);
led7=1;
delay(300);
led7=0;
delay(200);
led8=1;
delay(300);
led8=0;
delay(200);
led9=1;
delay(300);
led9=0;
delay(200);
}
}
void delay(unsigned int dly)
{
int i,j;
for(i=0;i<dly;i++)
for(j=0;j<600;j++);
}
