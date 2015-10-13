#include<stdio.h>

long long int a,b,t;

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		a = a+b;
		printf("%lld\n",a);
	}
return 0;}
