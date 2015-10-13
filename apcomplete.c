#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int a,b,sum,c,t,d,st,j,p;
 int i,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {scanf("%lld",&a);
   scanf("%lld",&b);
   scanf("%lld",&sum);
   c=a+b;
   t=(sum*2)/c;
   printf("%lld\n",t);
   d=(b-a)/(t-5);
   st=a-(2*d);
   for(j=0;j<t;j++)
    {p=st+(j*d);
     printf("%lld ",p);}
   printf("\n");
  }
 return 0;
}
 
