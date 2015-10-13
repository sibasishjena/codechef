#include<stdio.h>
#include<stdlib.h>
long long int n;
int main()
{
	int t,g,i,q;
	int hcount,tcount;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&g);
		while(g--)
		{
			hcount = 0;tcount = 0;
			scanf("%d%lld%d",&i,&n,&q);
			if(n%2!=0)
			{
				if(i==1)
				{
					hcount = n/2;
					tcount = n/2+1;
				}
				else if(i==2)
				{
					hcount = n/2+1;
					tcount = n/2;
				}
			}
			else 
			{
				if(i==1)
				{
					hcount = n/2;
					tcount = n/2;
				}
				else if(i==2)
				{
					hcount = n/2;
					tcount = n/2;
				}
			}
			if(q==1)printf("%d\n",hcount);
			if(q==2)printf("%d\n",tcount);			
		}	
	}
}
