#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i,x,y;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   scanf("%d%d",&x,&y);
   if(x==y||(x-y)==2)
    {
     if(x%2==0)
      {printf("%d\n",x+y);}
     else
      {printf("%d\n",x+y-1);}
    }
   else
    {printf("No Number\n");}
 }
 return 0;
}
   
