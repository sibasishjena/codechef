#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int t,i,n,j,a,sum;
 scanf("%lld",&t);
 for(i=1;i<=t;i++)
  {printf("\n");
   scanf("%lld",&n);
   sum=0;
    for(j=1;j<=n;j++)
     {scanf("%lld",&a);
      sum=sum+(a%n);}
    if(sum%n==0)
      {printf("YES\n");}
    else
      {printf("NO\n");}
   }
 return 0;
}
