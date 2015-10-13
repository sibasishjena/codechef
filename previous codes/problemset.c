#include<stdio.h>
#include<stdlib.h>

long long int a[1000000];
int main()
{
	int n,m,x,y;
	char o;
	scanf("%d%d",&n,&m);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	while(m--)
	{
		int sum =0;
		scanf(" %c %d %d",&o,&x,&y);
		if(o=='s')
		{	
			for(i=x-1;i<y;i++)
			{
				sum+=a[i];
			}
			printf("%d\n",sum);
		}
		int big =0;
		if(o=='m')
		{
			for(i=x-1;i<y;i++)
			{
				if(a[i]>big) 
				big =a[i];
			}
			printf("%d\n",big);
		}
		int start;
		if(o=='i')
		{
			for(i=x-1;i<y;i++)
			{
				start = a[x-1];
				if(a[i]<start)
				start = a[i];
			}
			if(start == a[x-1])
			{ printf("1\n");}
			else printf("0\n");
		}
		int end;	
		if(o=='d')
		{
			for(i=x-1;i<y;i++)
			{
				end = a[y-1];
				if(a[i]>end)
				end = a[i];
			}
			if(end == a[y-1])
			printf("0\n");
			else printf("1\n");
		}
		if(o=='u')
		{
			a[x-1] = y; 
		}
		
	}
	
	
return 0;}
