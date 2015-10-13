#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,a[1000],pos=1,start,i,j;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d ",pos);
	pos = start;
	while(a[pos]!=start)
	{
		printf("%d",a[pos]);
		j = a[pos];
		pos = a[pos];
	}
return 0;}
