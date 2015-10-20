#include<iostream>
#include<algorithm>
int a[30];
int subset(int m,int k)
{
	int i,j,p;
	for(i=k-1;i>=0;i--)
	{
		if(a[i]<=m)
		{
			break;
		}
	}
	if(a[i]>m)
	{
		return 0;
	}
	if(a[i]==m)
	{
		return 1;
	}
	for(j=i;j>=0;j--)
	{
		p=subset(m-a[j],j);
		if(p==1)
		{
			return 1;
		}
	}
	return 0;
}
using namespace std;
int main()
{
	int t,n,m,i,s,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		if(s<m)
		{
			printf("No\n");
		}
		else if(s==m)
		{
			printf("Yes\n");
		}
		else
		{
			sort(a,a+n);
			k=subset(m,n);
			if(k==1)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
