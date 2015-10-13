#include<stdio.h>
#include<stdlib.h>
int main()
{
 int t,n,i,sum=0;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {scanf("%d",&n);
  if(n>0)
   {sum=sum+n;}
 }
 printf("%d\n",sum);
 return 0;
}
