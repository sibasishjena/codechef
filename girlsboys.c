#include<stdio.h>
#include<stdlib.h>
int main()
{
 int g,b,d,r;
 while(1)
  {
   scanf("%d %d",&g,&b);
    if((g==-1)&&(b==-1))
      {break;}
    else
      {if(g==0&&b==0)
        {printf("0\n");}
       else if(g==b||(g-b)==1||(b-g)==1)
         {printf("1\n");}
       else if(g>b)
         {d=g%(b+1);
          r=g/(b+1);
            if(d==0)
               {printf("%d\n",r);}
            else
               {printf("%d\n",r+1);}
          }
        else if(b>g)
         {d=b%(g+1);
          r=b/(g+1);
            if(d==0)
               {printf("%d\n",r);}
            else
               {printf("%d\n",r+1);}
          }
       }
    }
  return 0;
}
