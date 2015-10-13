#include<stdio.h>
#include<stdlib.h>
long long int p;

int powr(int n,int i)
{
	int sum=1;
	n =2;
	if(i==0)
	{return 1;}
	while(i!=0)
	{
		sum =sum*n;
		i--;
	}
	return sum;
		
}
int main()
{
	int t,i;
	
	int res;
	scanf("%d",&t);
	while(t--)
	{ 
		int count =0;
		scanf("%lld",&p);
		while(p!=0)
		{	
			for(i=0;i<12;i++)
			{
				res = powr(2,i);
				
				if(res>p)
				{
					res = powr(2,i-1);
					count++;
					p =p - res;
					break;
				}
				else if(i==11)
				{	p = p - res;
					count++;
					break;
				}
				else if(res == p)
				{	p = p - res;
					count++;
					break;
				}
				

			}
		}
		printf("%d\n",count);
	}
return 0;}
