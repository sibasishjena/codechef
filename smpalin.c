#include<stdio.h>
#include<stdlib.h>
long long int t,i,k,kc,kcc,d,p=0;
int main()
{
 scanf("%lld",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%lld",&k);
  kc=k+1;
  while(1)
  {
   kcc=kc;
   p=0;
   while(kcc!=0)
   {
    d=kcc%10;
    p=(p*10)+d;
    kcc=kcc/10;
   }
   if(p==kc)
   {printf("%lld\n",p);
    break;}
   kc=kc+1;
  }
 }
 return 0;
}


   
 
