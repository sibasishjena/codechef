#include<stdio.h>
#include<stdlib.h>
int main()
{
 int t,i;
 long int n,f,a,b,s1,c,s2,sum;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {scanf("%ld",&n);
   a=n*2;
   b=n*(2+a);
   s1=b/2;
   c=n*(n-1);
   s2=c/2;
   sum=s1+s2;
   sum=sum%1000007;
   printf("%ld\n",sum);
  }
 return 0;
}
