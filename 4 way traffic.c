#include<reg51.h>
sbit t1_r1=P1^0;
sbit t1_y1=P1^1;
sbit t1_g1=P1^2;
sbit t2_r2=P1^3;
sbit t2_y2=P1^4;
sbit t2_g2=P1^5;
sbit t3_r3=P1^6;
sbit t3_y3=P1^7;
sbit t3_g3=P2^0;
sbit t4_r4=P2^1;
sbit t4_y4=P2^2;
sbit t4_g4=P2^3;
void delay (unsigned int);
void main()
{
while(1)
{
t1_r1=t1_y1=t1_g1=0;
t2_r2=t2_y2=t2_g2=0;
t3_r3=t3_y3=t3_g3=0;
t4_r4=t4_y4=t4_g4=0;
t2_r2=t3_r3=t4_r4=1;
delay(1000);
t1_r1=1;
delay(300);
t1_r1=0;
delay(200);
t1_y1=1;
delay(300);
t1_y1=0;
delay(200);
t1_g1=1;
delay(300);
t1_g1=0;
delay(200);
t1_r1=t3_r3=t4_r4=1;
delay(1000);
t2_r2=1;
delay(300);
t2_r2=0;
delay(200);
t2_y2=1;
delay(300);
t2_y2=0;
delay(200);
t2_g2=1;
delay(300);
t2_g2=0;
delay(200);
t1_r1=t2_r2=t4_r4=1;
delay(1000);
t3_r3=1;
delay(300);
t3_r3=0;
delay(200);
t3_y3=1;
delay(300);
t3_y3=0;
delay(200);
t3_g3=1;
delay(300);
t3_g3=0;
delay(200);
t1_r1=t2_r2=t3_r3=1;
delay(1000);
t4_r4=1;
delay(300);
t4_r4=0;
delay(200);
t4_y4=1;
delay(300);
t4_y4=0;
delay(200);
t4_g4=1;
delay(300);
t4_g4=0;
delay(200);
}
}
void delay (unsigned int dly)
{
int i;
int j;

for(i=0;i<dly;i++);
for (j=0;j<6000;j++);
}

