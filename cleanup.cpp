#include<iostream>
int main()
{
	int m,n,t,i,c,nch,nach,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int a[n],ch[n],ach[n];
		for(i=0;i<n;i++)
		{
			a[i]=0;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d",&k);
			a[k-1]=-1;
		}
		c=0;nch=0;nach=0;
		for(i=0;i<n;i++)
		{
			if(c==0 && a[i]!=-1)
			{
				ch[nch++]=i+1;
				c=1;
			}
			else if(c==1 && a[i]!=-1)
			{
				ach[nach++]=i+1;
				c=0;
			}
		}
		for(i=0;i<nch;i++)
		{
			printf("%d ",ch[i]);
		}
		printf("\n");
		for(i=0;i<nach;i++)
		{
			printf("%d ",ach[i]);
		}
		printf("\n");
	}
	return 0;
}
