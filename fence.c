#include<stdio.h>
#include<stdlib.h>
int main()
{
 float n,r,a,d=3.141592,c,b;
 while(1)
  {scanf("%f",&n);
   if(n==0)
    {break;}
   else
    {b=2.0*d;
     a=n*n;
     c=a/b;
     printf("%.2f\n",c);
    }
   }
 return 0;
}
