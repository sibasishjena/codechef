#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,k,x,y,c,d,num,count;
	int i,j;
	char a[100];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	while(k--)
	{
		if(scanf("%d",&num) == 1)
		{
			scanf("%d %d",&x,&y);
			a[x] = y;
			for(i=0;i<=n;i++)
			{
				printf("i = %d a[i] = %c",i,a[i]);
				printf("\n");
			}		
		}
		
		else if(scanf("%d",&num) == 2)
		{ 	
			count = 0;
			scanf("%d %d",&c,&d);
			for(i=c;i<=d;i++)
			{	num = a[i];
				if(num%3==0) count++;
				for(j=i+1;j<=d;j++)
				{
					num = num*10+a[j];
					if(num%3==0) count++;
				}
			}
			printf("%d\n",count);
		}
		
		
	}
}
