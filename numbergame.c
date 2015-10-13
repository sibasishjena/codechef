#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int n,d;
 scanf("%lld",&n);
 if(n%10==0)
  {printf("2\n");}
 else
  {printf("1\n");
   d=n%10;
   printf("%lld\n",d);
  }
 return 0;
}
