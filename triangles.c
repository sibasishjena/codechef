#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i;
 long long int p,s,r;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {scanf("%lld",&p);
   s=p-1;
   r=(p*p)+(s*s);
   printf("%lld\n",r);
  }
 return 0;
}
