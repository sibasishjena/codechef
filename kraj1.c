#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 while(a!=0 || b!=0 || c!=0)
 {
  if((b-a)==(c-b))
  {
   printf("AP=%d",c+(b-a));
   break;}
  else 
  if ((b/a)==(c/b))
  printf("GP=%d",c+(b/a));
  break;
   }
 }
}
