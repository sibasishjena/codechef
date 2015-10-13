#include<stdio.h>
long long int fact(long long int f)
{
 if(f==1)
 {return f;}
 else
 {return f*fact(f-1);}
}
main()
{
 long long int a;
 scanf("%lld",&a);
 printf("%lld",fact(a));
}

