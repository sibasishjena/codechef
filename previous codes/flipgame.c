#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,a[101],i;
	int count=0,temp=0,init;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(scanf("%d",&a[i])==1) count++;
	} temp = count;
	init = count;
	int j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{	temp = init;
			if(a[j]==1) temp--;
			else if(a[j]==0) temp++;
		}
		if(temp>count) count = temp;
	}
	printf("%d\n",count);

return 0;
}
