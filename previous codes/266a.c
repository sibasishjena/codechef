#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,j;
	char a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	int p;
	int count = 0,k=0;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			p = a[i];
			printf("%d\n",p);
			if(p == a[i+1]) count++;
			printf("%d\n",count);
		}
		else 
		{
			if(p == a[i])
			count++;
			else 
			{
				if(count>0)
				{	printf("************\n");
					j = count-1;
					k =k+j;
					count = 0;
				}
				p = a[i];
			}
		}
	}
	printf("**%d\n",k);
return 0;}
