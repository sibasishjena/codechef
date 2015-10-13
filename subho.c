#include<stdio.h>
#include<stdlib.h>
int rev(int);
int main()
{
 int i,a,b,s,r1,r2,r3,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d%d",&a,&b);
  r1=rev(a);
  r2=rev(b);
  s=r1+r2;
  r3=rev(s);
  printf("%d\n",r3);
 }
 return 0;
}
int rev(int x)
{
 int s,r=0;
 while(x>0)
  {
   s=x%10;
   r=(r*10)+s;
   x=x/10;
  }
 return r;
}
 


