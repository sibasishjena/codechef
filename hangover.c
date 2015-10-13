#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 float n,d,s;
 int k,c;
 scanf("%f",&n);
 while(n!=0)
  { k=2;
    s=0;  
    c=0; 
    while(1)
     {d=1.00/k;
      s=s+d;
      c=c+1;
       if(s>=n)
         {break;}
       else
          {k=k+1;}
     }
     printf("%d card(s)\n",c);
     scanf("%f",&n);
  }
 return 0;
}
