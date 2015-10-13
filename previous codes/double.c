#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
long long int a;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&a);
		if(a%2==0)
		{
			printf("%lld\n",a);
		}
		else { printf("%lld\n",a-1);}
	}
return 0;}
