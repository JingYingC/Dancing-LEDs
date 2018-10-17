#include <AT89X51.H>
void delayms(unsigned int time);

main()
{
 while(1)
  {
    unsigned  char   k;	 

    for(k=0x01; k<0x80; k<<=1)
     {
      P1=~k;
      delayms(200);
     }

    for(k=0x80; k>0x01; k>>=1)
     {
      P1=~k;
      delayms(200);
     }
   }
}

void delayms(unsigned int time)
{
  unsigned int n;
  while(time>0)
   {
    n=120;
    while(n>0)  n--;
    time--;
   }
}