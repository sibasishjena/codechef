#include<stdio.h>
#include<stdlib.h>

long long int n,z;
int a[1000000],p[1000000] = {0};

int main()
{
	int k,i,t,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %d",&n,&k);
		z = 0;
		j = 0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&p[i]);
			z = z+1;
				while(1)
				{
					if(z==p[i]) break;
					a[j++] = z++;
				}
		} z = z+1;
		for(i=j;i<n;i++)
		{
			a[i] = z;
			z++;
		}
		printf("*%lld*\n",n);
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}printf("\n");
	}
}
