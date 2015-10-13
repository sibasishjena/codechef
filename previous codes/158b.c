#include<stdio.h>
#include<stdlib.h>
long long int sum = 0,k;
int main()
{
	int n,a[100001],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}
	k = sum/4;
	if(sum % 4==0) printf("%lld\n",k);
	else printf("%lld\n",k+1);

return 0;}
