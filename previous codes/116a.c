#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,a[1000],b[1000],left = 0,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0) left = b[i];
		else
		{
			k = left -a[i];
			if(k+b[i]>left) left = k + b[i]; 
		}
	}
	printf("%d\n",left);
return 0;}
