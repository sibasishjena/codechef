#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	char a[200];
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",a);
		int len = strlen(a);
		int i,count=0;		
		for(i=0;i<len;i++)
		{
			if((a[i]=='A')||(a[i]=='D')||(a[i]=='O')||(a[i]=='P')||(a[i]=='R')||(a[i]=='Q'))
			{count++;}
			else if(a[i]=='B')
			{count+=2;}
		}
		printf("%d\n",count);
	} return 0;
}
