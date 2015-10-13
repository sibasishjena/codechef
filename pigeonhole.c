#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 long long int t,i,n,a,d,b;
 scanf("%lld",&t);
 for(i=1;i<=t;i++)
  {scanf("%lld",&n);
   a=4+(4*n);
   d=sqrt(a);
   b=(d-2)/2;
   printf("Case %lld: %lld\n",i,b);
  }
 return 0;
}
