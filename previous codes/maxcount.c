#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,n,a[1000];
	scanf("%d",&t);
	while(t--)
	{
		int b[100001] = {0};
		scanf("%d",&n);
		int i;
		if(n<=100)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				b[a[i]]++; 
			}
		}
		
		int max=0,c;
		for(i=0;i<=10000;i++)
		{
			if(b[i]!=0)
			{
				if(b[i]>max)
				{ max = b[i];
				c=i;
				}
				if(b[i]==max)
				{	
					if(i<c)
					{ max =b[i];
						c =i;	
					}
				}
			}
		}
		printf("%d %d\n",c,max);
	}
return 0;}
