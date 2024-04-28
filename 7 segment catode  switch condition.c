#include <reg51.h>
#define SEG_PORT P2
void delay(unsigned int count) 
{
  unsigned int i, j;
  for(i=0; i<count; i++) 
  {
    for(j=0; j<300; j++);
  }
}
void display(unsigned char num) 
{
  switch(num) 
  {
    case 0: SEG_PORT = 0x3F; break;
    case 1: SEG_PORT = 0x06; break;
    case 2: SEG_PORT = 0x5B; break;
    case 3: SEG_PORT = 0x4F; break;
    case 4: SEG_PORT = 0x66; break;
    case 5: SEG_PORT = 0x6D; break;
    case 6: SEG_PORT = 0x7D; break;
    case 7: SEG_PORT = 0x07; break;
    case 8: SEG_PORT = 0x7F; break;
    case 9: SEG_PORT = 0x6F; break;
    default: SEG_PORT = 0xFF; break;
  }
}
void main() 
{
  unsigned char i;
  while(1) 
  {
    for(i=0; i<=9; i++) 
	{
      display(i);
      delay(500);
    }
  }
}