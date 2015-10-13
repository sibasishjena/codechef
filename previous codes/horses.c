#include<stdio.h>
#include<stdlib.h>

long long int a[5001],small;

int main()
{
	int t,n;		
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		small = abs(a[0] - a[1]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(small>=abs(a[i]-a[j]))
					small = abs(a[i]-a[j]);
			}
		}
		printf("%lld\n",small);
	}
return 0;}
