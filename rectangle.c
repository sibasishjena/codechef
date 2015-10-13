#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,c=0,j,i;
 scanf("%d",&n);
 for(i=1;i*i<=n;i++)
 {
  for(j=i;j*i<=n;j++)
   {c++;}
 }
 printf("%d",c);
 return 0;
}
    
 
