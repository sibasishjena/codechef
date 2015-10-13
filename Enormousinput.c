#include<stdio.h>
#include<stdlib.h>
int main()
{
 long n,k,p,c=0,i;
 scanf("%ld%ld",&n,&k);
 for(i=1;i<=n;i++)
 {
  scanf("%ld",&p);
  if(p%k==0)
  {c=c+1;}
 }
 printf("%ld",c);
 return 0;
}

