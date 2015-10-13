#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[100],b[100];
	scanf("%s",a);
	int l= strlen(a),len;
	int i,mid,p,j=0;
	mid = l/2;
	for(i=l-1;i>mid;i--)
	{
		b[j++] = a[i];
		
	}
	printf("%s",b);
	printf("\n");
		p = 0;
		int count = -1;
		for(i=0;i<mid;i++)
		{	
			if(a[i]==b[p])
			{
				i=i+1;
				p=p+1;
			}
			else if(a[i]!=b[p])
			{	count++;
				if(count==1) break;
				int m = p;
				len = j+1;
				while(j>=m)
				{
					b[j+1] = b[j];
					j--;
				}
				b[p] = a[i];
			}
		}
		if(count==1) printf("NA\n");
		else 
		{
			for(i=0;i<mid;i++)
			{
				printf("%c",a[i]);	
			}
			for(i=len-1;i>=mid;i--)
			{
				printf("%c",a[i]);
			}
		}
return 0;}
