#include<stdio.h>
#include<stdlib.h>


long long int n,k,dumy,mon,a[1000000],b[1000000];

int main()
{
	int t,count,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		mon = 0;
		for(i=0;i<n;i++)
		{
			dumy = a[i];
			count = 0;
			while(dumy<=k)
			{
				dumy = dumy+a[i];
				count++;
			}
			if((b[i]*count)>mon) mon = b[i]*count;
		}
		printf("%lld\n",mon);
	}
return 0;}
