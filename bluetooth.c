#include<reg51.h>
sbit IN1 = P2^0;
sbit IN2 = P2^1;
sbit IN3 = P2^2;
sbit IN4 = P2^3;
void ser_int();
unsigned char rx();
void tx(unsigned char a);
void main()
{
    unsigned char get;
    ser_int();
    while(1)
			{
            get=rx();
            tx(get);
            if(get == 'F')
							{
                    IN1 = 1;
                    IN3 = 1;
                    IN2 = 0; 
                    IN4 = 0;
            }
							else if (get == 'R') 
							{
                    IN2 = 1;
                    IN4 = 1;
                    IN1 = 0;
                    IN3 = 0;       
            } 
							else if (get == 'W') {
                  
                    IN1 = 1;
                    IN2 = 0;
                    IN3 = 0;
                    IN4 = 0;
                    
            }
							else if (get == 'L') {
                 
                    IN3 = 1;
                    IN2 = 0;
                    IN1 = 0;
                    IN4 = 0;   
            } 
							else if (get == 'S')
								{   
                    IN1 = IN2 = IN3 = IN4 = 0;
                }
    }
}
void ser_int()
{
    SCON=0x50;
    TMOD=0x20;
    TH1=TL1=0xFD;
    TR1=1;
}
unsigned char rx()
{
    while(RI==0);
    RI=0;
    return SBUF;
}
void tx(unsigned char a)
{
	SBUF=a;
	while(TI==0);
	TI=0;
}