#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct xxx 
{
	int data;
	struct xxx *ad;
};
struct xxx *sp=0,*q;
int main()
{
 int a,b,c,i;
 char x[100];
 printf("Enter Postfix Expression: ");
 scanf("%s",x);
 for(i=0;i<strlen(x);i++)
 {
	if(x[i]>=48&&x[i]<=57)
	{
		if(sp==0)
		{
			sp=malloc(sizeof(struct xxx));
			sp->ad=0;
			sp->data=x[i]-48;
		}
		else
		{
			q=malloc(sizeof(struct xxx));
			q->ad=sp;
			sp=q;
			sp->data=x[i]-48;
		}
	}
	else
	{
		b=sp->data;
		sp=sp->ad;
		a=sp->data;
		if(x[i]=='*')
		{
			c=a*b;
		}		
		else if(x[i]=='/')
		{
			c=a/b;
		}
		else if(x[i]=='+')
		{
			c=a+b;
		}
		else if(x[i]=='-')
		{
			c=a-b;
		}
		sp->data=c;
	}
 }
 printf("%d\n",sp->data);
 return 0;
}
