#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t,count,index;
	char a[100000],b[26];
	scanf("%d",&t);
	while(t--)
	{
		int i,j;
		index =0;
		scanf("%s",a);
		int l = strlen(a);
		b[index] = a[0];
		index++;
		for(i=1;i<l;i++)
		{	count = 0;
			for(j=0;j<index;j++)
			{
				
				if(b[j] != a[i])
				{
					count++;
				}
			}
			if(count==index)
			{
				b[index] = a[i];
				index+=1;
			}
		}
		
		printf("%d\n",index);
	}
return 0;}
