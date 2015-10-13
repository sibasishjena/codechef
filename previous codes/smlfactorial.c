#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	int t,n,x;	
	int k,index,rem;;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d",&n);
		int i=0;
		int j,temp =0;
		int a[1000000]={1};
	for(j=1;j<=n;j++)
	{	
		for(index=0;index<=i;index++)
		{
		x = a[index]*j+temp;
		a[index] = x%10;
		temp = x/10;	
		}
	while(temp!=0)
	{
		i++;		
		a[i] = temp%10;
		temp = temp/10;
		
	}
	}


	for(k=i;k>=0;k--)
	{
		printf("%d",a[k]);
	}printf("\n");

			
	}
return 0;
}
