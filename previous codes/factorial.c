#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

long long int N,sum,n;

int main()
{
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&N);
		 n = 5;
		sum = 0;
		while(n<N)
		{
			sum+= (N/n);
			n = n*5;
			
		}
		printf("%ld\n",sum);
		
	}
	return 0;
}
