#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define in(n) scanf("%d",&n)
#define out(n) printf("%d",n)
#define N 100
main()
{
int t;
in(t);
	while(t--)
	{
		int m,n;
		in(m); in(n);
		int i,j,w[N][N];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				in(w[i][j]);
			}	printf("\n");
		}
		int max,sum = 0;
		max = sum;
		int diff;
		if((m==2)&&(n==2))
		{
			diff = 1;
			sum+= w[i][j];
		}
		
		sum = sum+w[i][j];
			
	}
}
