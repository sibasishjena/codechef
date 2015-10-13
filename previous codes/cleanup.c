#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n,a[1000],b[1000],t;
	scanf("%d",&t);
	while(t--)	
	{
		scanf("%d%d",&n,&m);
		int i;
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}

		int j;
		for(j=0;j<n;j++)
		{
			b[j] = j+1;
		}

		for(j=0;j<m;j++)
		{
			b[a[j]-1] = 0;
		}
		i=0;
		for(j=0;j<n;j++)
		{
			if(b[j]!=0)
			{a[i++] = b[j];}
		}
		for(j=0;j<i;j+=2)
		{
			printf("%d ",a[j]);
		}printf("\n");

		for(j=1;j<i;j+=2)
		{
			printf("%d ",a[j]);
		}printf("\n");				
	}
return 0;}
