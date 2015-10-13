#include<stdio.h>
#include<stdlib.h>

long long int n,z,l,mid,dumy;
int a[100],p[100];

int main()
{
	int k,i,t,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %d",&n,&k);
		z = 0;
		j = 0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&p[i]);
			z = z+1;
				while(1)
				{
					if(z==p[i]) break;
					a[j++] = z++;
				}
		} z = z+1;
		for(i=j;i<n-k;i++)
		{
			a[i] = z;
			z++;
		}
		
		int c =1,check;
		int round = 1;
		int count = 0;
		i=0;
		 l = n-k-1;
		 
		while(c)
		{
			mid = (i+l)/2;
			check = 0;
			j = round;
			while(1)
			{	
				if(j<a[mid])
				{	if(a[mid+1]-j == 0){mid = mid+1; break;}
					if(a[mid-1]-j == 0) {mid = mid-1; break;}
					if(check==(a[mid]-j)) break;
					else
					{
						check = a[mid] - j;
						mid = (i+mid)/2;
					}
				}
				else if(j == a[mid])
				{
					break;
				}
				else if(j>a[mid])
				{
					if(j-a[mid+1] == 0){mid = mid+1; break;}
					if(j-a[mid-1] == 0) {mid = mid-1; break;}
					if(check==(j-a[mid])) break;
					else
					{
						check = j - a[mid];
						mid = (mid+1+l)/2;
					}
				}
			}
			
			dumy = mid;
			j = j - a[dumy];
			if((dumy==0)&&(j!=0)) break;
			if(j!=0) dumy--;
			
			else
			{
				round++;
				count++;
				c = 1;
			}		
		}
		if(round%2==0) printf("chef\n");
		else printf("mom\n");
	}
}
