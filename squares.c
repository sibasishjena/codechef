#include<stdio.h>
#include<stdlib.h>
int main()
{
 int k,j,p=0;
 while(1)
 {
  scanf("%d",&k);
  p=0;
  if(k==0)
  {break;}
  else
  {
   for(j=1;j<=k;j++)
   {
    p=p+(j*j);
   }
   printf("%d\n",p);
  } 
 }
 return 0;
}
