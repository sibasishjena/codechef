#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

long int n,k,t;
int main()
{
	int count = 0;
	scanf("%ld%ld",&n,&k);
	while(n--)
	{
	
		scanf("%ld",&t);
		if(t%k==0) count++;
	}
	printf("%d",count);
return 0;}
