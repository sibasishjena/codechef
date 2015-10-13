#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[500],res[500],ope[500];
int top=-1;
void push(char c)
{
 top++;
 ope[top]=c;
}
char pop()
{
 char p;
 p=ope[top];
 top--;
 return p;
}
int main()
{
 int n,len,i,j,d,c;
 char p;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   scanf("%s",str);
   len=strlen(str);
   c=0;
   for(j=0;j<=len;j++)
    {
      d=str[j];
      if(d>=97&&d<=122)
       { res[c]=str[j];
         c=c+1;}
      else if(str[j]=='+'||str[j]=='-'||str[j]=='*'||str[j]=='/'||str[j]=='^')
       {push(str[j]);}
      else if(str[j]==')')
       {p=pop();
        res[c]=p;
        c=c+1;}
    }
   while(top>-1)
    {p=pop();
     res[c]=p;
     c=c+1;}
   res[c]='\0';
   printf("%s\n",res);
 }
 return 0;
} 
