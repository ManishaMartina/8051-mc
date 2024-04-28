#include<reg51.h>
void msdelay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	for (j=0;j<1275;j++);
}
void main()
{
	unsigned char seg[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
	int k;
	while(1)
	{
	 for(k=0;k<10;k++)
	{
		P2=seg[k];
		msdelay(100);
	}
}
	}