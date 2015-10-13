#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t,l;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		l = strlen(a);
		if(l>10)
		{
			printf("%c%d%c\n",a[0],l-2,a[l-1]);
		}
		else
		{
			printf("%s\n",a);
		}
		
	}
return 0;}
