#include<stdio.h>
#include<conio.h>
#include<string.h>
char n[1000009];
long long int l;
int pal(int f,int b)
{
 for(i=f,j=b;j<l;i--,j++)
  {if(
 
int main()
{
 long long int t,a,j;
 int c,m,b;
 scanf("%lld",&t);
 for(i=1;i<=t;i++)
  {scanf("%s",n);
   l=strlen(n);
   c=0;
   for(j=0;j<l;j++)
    {b=n[j]-48;
     if(b!=9)
       {c=1;break;}
    }
   if(c==0)
    {printf("1");
     for(j=1;j<l;j++)
      {printf("0");}
     printf("1\n");
    }
   else if(l%2!=0)
    {a=l/2;
     m=n[a]-48;
     c=pal(a-1,a+1);
     
 








