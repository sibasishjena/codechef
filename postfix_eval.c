#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

 char x[50];
 int y[55];
 int a,b,c,i,j=-1;
 printf("Enter the postfix expression: ");
 scanf("%s",x);
 for(i=0;i<strlen(x);i++)
 {
  if(x[i]>=48&&x[i]<=57)
   {j++;
    y[j]=x[i]-48;}
  else
   {b=y[j];j--;
    a=y[j];j--;
    if(x[i]=='*')
     {c=a*b;}
    else if(x[i]=='/')
     {c=a/b;}
    else if(x[i]=='+')
     {c=a+b;}
    else if(x[i]=='-')
     {c=a-b;}
    j++;
    y[j]=c;
   }
 }
 printf("%d",y[j]);
 return 0;
}
