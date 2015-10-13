#include<stdio.h>

long long int n;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n%2==0)
		{printf("ALICE\n");}
		else {printf("BOB\n");}
	}
return 0;}
