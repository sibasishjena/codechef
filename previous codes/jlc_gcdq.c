#include<stdio.h>
#include<stdlib.h>
/*inline void Scan_f(int a)
{
	char c = 0;
	while(c<33)
	c = getc(stdin);
	a = 0;
	while(c>33)
	{
		a = a*10 + c - '0';
		c = getc(stdin);
	}
}*/

int gcd(int a,int b)
{
	if(b==0)
	 return a;
	else return gcd(b,a%b);
}
int main()
{
	int t,n,q,l,r,a[100000],i,res;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		while(q--)
		{
			res = 0;
			scanf("%d %d",&l,&r);
			for(i=0;i<l-1;i++)
			{
				res = gcd(a[i],res);
			}
			for(i=r;i<n;i++)
			{
				res = gcd(a[i],res);
			}
			printf("%d\n",res);
		}
		
	}
return 0;}

