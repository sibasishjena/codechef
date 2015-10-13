#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int n,l,r,i,sum;
long long int fact(long long int a)
{
	if(a==0) return 1;
	else return(a*fact(a-1));
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&l,&r);
		i = (r-l)+1;
		if(n!=i)
		{
			sum = fact(i+n)/(fact(n+1)*fact(i-1));
		}
		else
		{
			sum = fact(i+n)/(fact(n)*fact(i));
		}
		printf("%lld\n",(sum-1));
	}

return 0;
}
