#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100];
	int n,j,key,k;
	scanf("%d",&n);
	a[0] = 0;
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=2;j<=n;j++)
	{
		key = a[j];
		k = j-1;
		while(1)
		{
			if(key<a[k])
			{
				a[k+1] = a[k];
				if(k>=1) k--;
				else break;
				if(a[k]==0)
				{
				a[k+1] = key;
				break;
			}
			}
			else 
			{
				a[k+1] = key;
				break;
			}
		}
	}
	for(j=1;j<=n;j++)
	{
		printf("%d",a[j]);
	}printf("\n");
return 0;}
