#include<stdio.h>
#include<stdlib.h>

long long int n,count;
int main()
{
	int n,k,count = 0;
	scanf("%d %d",&n,&k);
	int a[1000],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			if((a[i]>0)&&(a[i]>=a[k-1]))
				{
					count++;
				}
		}
	}
	printf("%d\n",count);
	
return 0;}
