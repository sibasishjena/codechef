#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int a[100000],b[100000];
int main()
{
	int n,count;
	
	while(scanf("%d",&n))
	{
		if(n==0)
		{exit(0);}

		int i;
		for(i =1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]] = i;				
		}

		count = 0;
		for(i=1;i<=n;i++)
		{
			if(a[i] == b[i])
			{count+=1;}
		}
		
		if(count==n)
		{printf("ambiguous\n");}
		else { printf("not ambiguous\n");}
		
	}
return 0;}
