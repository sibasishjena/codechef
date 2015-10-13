#include<stdio.h>


long long int n,i,count;
int main()
{
	int t;
	count =0;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%lld",&n);
		while(n!=1)
	{	
		for(i=n-1;i*i<=n;i--)
		{
			if(i==1)
			{ n=n-1;
			count++;
			break;	}
			else if(n%i==0)
			{n=n-i;
			count++;
			break;}
		}
	}	
		if(count%2==0)
		{ printf("BOB\n");}
		else { printf("ALICE\n");}
		
	}
}
