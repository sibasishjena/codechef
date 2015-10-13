#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int n,t,c,d;
 scanf("%lld",&t);
 while(t--)
 {scanf("%lld",&n);
  c=0;
  while(n>0)
   {d=n%2;
    if(d==0)
     {c++;n=n/2;}
    else
     {break;}
   }
  printf("%lld\n",c);
 }
 return 0;
}
