#include<iostream>
int main()
{
	long long int t,n,c,i,s;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&c);
		long long int a[n];
		s=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			s+=a[i];
		}
		if(s<=c)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
