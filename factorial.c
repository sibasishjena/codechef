#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long z(long);
int main()
{
 long t,i,n,d;
 scanf("%ld",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%ld",&n);
  d=z(n);
  printf("%ld\n",d);
 }
return 0;
}
long z(long a)
{
 long k=1,d,s=0;
 while(1)
 {
  d=a/pow(5,k);
  if(d!=0)
  {
   s=s+d;
   k=k+1;
  }
  else
  {break;}
 }
return s;
}















































































































































































































































































  
