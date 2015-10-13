#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t,b[200];
	char a[210];
	int cost=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		int i;
		cost = 0;
		memset(b,0,sizeof(b));
		for(i=0;i<strlen(a);i++)
		{
						
			if (b[a[i]]==0)
			{
				cost++;
				b[a[i]]=1;	
			}
			else 
			{
				b[a[i]]=0;
			}
			
		}
		printf("%d\n",cost);
	}

return 0;}
