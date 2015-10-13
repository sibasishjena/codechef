#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i,a,b,d,p=0,q=0,s,r=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
  scanf("%d%d",&a,&b);
  p=0;
  q=0;
  r=0;
  while(a!=0)
  {
   d=a%10;
   p=(p*10)+d;
   a=a/10;
  }
  while(b!=0)
  {
   d=b%10;
   q=(q*10)+d;
   b=b/10;
  }
  s=p+q;
  while(s!=0)
  {
   d=s%10;
   r=(r*10)+d;
   s=s/10;
  }
 printf("%d\n",r);
 }
return 0;
}
   

