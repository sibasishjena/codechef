#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[20],b[20];
	int i=0,l;
	char q ='x';
	scanf("%s",a);
	l =strlen(a);
	b[0] = 0;
	int j = 1;
	for(i=0;i<l;i++)
	{
		switch(q)
		{
			case 'x': if(a[i]=='a')
				{
					q = 'y';
					b[j]  = 0;j++;
				}
				else if(a[i]=='b')
				{	
					q = 'x';
					b[j] = 0;j++;
				} break;	
			
			case 'y': if(a[i]=='a')
				{
					q = 'x';
					b[j]  = 1;j++;
				}
				else if(a[i]=='b')
				{	
					q = 'y';
					b[j] = 0;j++;
				}	break;
		}
	}
		int count = 0;
		for(i=0;i<j;i++)
		{if(b[i]==1) count++;}
		printf("%d\n",count);

return 0;}
