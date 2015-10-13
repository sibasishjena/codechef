#include<stdio.h>
#include<stdlib.h>
long long int max = 1000000;

int main()
{
	int t;
	int n,a[max],p=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i,count =1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		p = a[0];
		for(i=1;i<n;i++)
		{
			if((a[i]<a[i-1])&&(a[i]<p)) { p = a[i];count++;}
		}
		printf("%d\n",count);
		
	}
}

