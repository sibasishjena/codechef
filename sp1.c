#include<stdio.h>
#include<stdlib.h>
int main()
{
 int t,i,c=0;
 long m,n,j,k;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%ld%ld",&m,&n);
  for(j=m;j<=n;j++)
   {
     c=0;
     for(k=1;k<=j;k++)
      {
        if(j%k==0)
         {c=c+1;}
      }
     if(c==2)
      {printf("%ld\n",j);}
   }
  printf("\n");
 }
 return 0;
}
