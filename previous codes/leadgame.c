#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	int  t;
	int a[20001];
	scanf("%d",&t);
	
		int i,g=0,k,n;
		n = t*2;
		for(i=0;i<n;i+=2)
		{
			scanf("%d%d",&a[i],&a[i+1]);
		}

		for(i=0;i<n;i+=2)
		{
			if(a[i]>a[i+1])
					k=1;
				else{ k=2;}
			a[i] = abs(a[i]-a[i+1]);
			if(g <a[i])
			{ 
				g =a[i];
			}
			
		}
			printf("%d %d\n",k,g);
	return 0;
}
