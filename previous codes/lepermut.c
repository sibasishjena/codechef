#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,n,a[1000];
	scanf("%d",&t);
	while(t--)
	{
		int i,j,g_in=0,l_in=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j]) g_in++;
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1]) l_in++;
		}
		
		if(g_in == l_in) printf("YES\n");
		else printf("NO\n");
	}
return 0;}
