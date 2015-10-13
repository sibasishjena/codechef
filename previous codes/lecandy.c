#include<stdio.h>
#include<stdlib.h>

long long int c,sum;

int main()
{
	int t;
	int n,a[10000];
	scanf("%d",&t);
	while(t--)
	{	sum =0;
		scanf("%d%lld",&n,&c);
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		
		if(sum<=c)
		{ printf("Yes\n",sum);}
		else {printf("No\n",sum);}
	}	
return 0;}
