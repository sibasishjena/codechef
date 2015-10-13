#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,n,m,a[100],b[100],flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			b[i] = m - a[i];
			if(b[i]==0) {printf("Yes\n");break;}
			for(j=0;j<n;j++)
			{	
				if(i!=j)
				{
					if(b[i]==a[j])
					{ 	m = a[j];
						flag =1;
						break;
					}
				} 
			}	
		}
	}
return 0;}
