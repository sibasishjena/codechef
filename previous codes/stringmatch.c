#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *a = "amar amari amarit amaritansh",s[20];
	int L = strlen(a);
	scanf("%s",s);
	int l = strlen(s);
	int i,j,count,pos;
	for(j=0;j<L;j++)
	{
		if(s[0]==a[j])
		{	int k = j;i=0;count = 0;
			while(i<l) 
			{
				if(s[i++]==a[k++])
				{
					count++;
				
				}
				else break;
			}
			if(count==l) {pos = l-k; break;}
		}
		
	}
	if(count==l) printf("yes at pos %d\n",pos);	
	else printf("no\n");
	

return 0;}

