#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[1000];
	int i;
	scanf("%s",a);
	int l = strlen(a);
	for(i=0;i<l;i++)
	{
		if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||(a[i]=='Y')||(a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a	[i]=='o')||(a[i]=='u')||(a[i]=='y'))
			a[i] = '*';
	}
	for(i=0;i<l;i++)
	{
		if(a[i]!='*')
		{
			if(a[i]<=91)
			{
				
				printf(".%c",a[i]+32);
			}
			else printf(".%c",a[i]);
		}
	} printf("\n");
	
return 0;}
