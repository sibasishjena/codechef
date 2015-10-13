#include<stdio.h>
#include<string.h>
char stack[100001],n[100001];
int top=-1,i;
void push(char a)
{
 top++;
 stack[top]=a;
}
void pop()
{
 if(top!=-1)
 {
  stack[top]='0';
  top--;
 }
}
int main()
{
 char b;
 int len;
 scanf("%s",n);
 len=strlen(n);
 for(i=0;i<len;i++)
 {
  b=n[i];
  if(stack[top]==b)
   {pop();}
  else
   {push(b);}
 }
 if(top==-1)
  {printf("Yes\n");}
 else
  {printf("No\n");}
}





































