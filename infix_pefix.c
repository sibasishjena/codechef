#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int checkp(int m)
{
	switch(m)
	{
		case'*':
		case'/':
		case'%':return 5;
		case'+':
		case'-':return 4;
	}
}
int main()
{	char opd[30],opr[30],x[30];
	int i,j=-1,k=-1,a,b;
	printf("Enter an Infix Expression: ");
	scanf("%s",x);
	for(i=0;i<=strlen(x);i++)
	{
		if(x[i]>=48&&x[i]<=57)
		{
			j++;
			opd[j]=x[i];
		}
		else
		{
			if(k==-1)
			{
				k++;
				opr[k]=x[i];
			}
			else
			{
				a=checkp(x[i]);
				b=checkp(opr[k]);
				while(k>=0&&a<=b)
				{
					j++;
					opd[j]=opr[k];
					k--;
					b=checkp(opr[k]);
				}
				k++;
				opr[k]=x[i];
			}
		}
	}
	while(k>=0)
	{
		j++;
		opd[j]=opr[k];
		k--;
	}
	for(i=0;i<=j;i++)
	{printf("%c",opd[i]);}
return 0;
}
