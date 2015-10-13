#include<stdio.h>
#include<stdlib.h>
long long int t,s,m,n,n_s,n_m;

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&s,&m);
		int counts=0,countm=0;
		n = s;
		while(n!=0)
		{
			n = n/10;
			counts++;
		}
		n = m;
		while(n!=0)
		{
			n = n/10;
			countm++;
		}
		if(counts==countm)
		{
			
		}
		else
		{
		}
	}
return 0;}
