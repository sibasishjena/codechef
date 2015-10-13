#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[3001];
	int n,i,count = 0,k=0;
	scanf("%d",&n);

	for(i=0;i<3*n;i++)
	{
		if(i%3==0)
		{
			if(count>=2) k++;
			 count = 0;
		}
		scanf("%d",&a[i]);
		if(a[i] == 1) count++;
	}
	if(count>=2)
	printf("%d\n",k+1);
	else printf("%d\n",k);

return 0;}
