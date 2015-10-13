#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int t,n,i,j,k,c1,c2,c3,c4,c5,c6,c7,c8;
 char str[45];
 scanf("%d",&t);
 while(t--)
  {scanf("%d",&n);
   scanf("%s",str);
   c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;
   for(i=0,j=1,k=2;k<40;i++,j++,k++)
    {if(str[i]=='T')
      {if(str[j]=='T')
        {if(str[k]=='T')
          {c1=c1+1;}
         else
          {c2=c2+1;}
        }
       else
        {if(str[k]=='T')
          {c3=c3+1;}
         else
          {c4=c4+1;}
        }
      }
     else
      {if(str[j]=='T')
        {if(str[k]=='T')
          {c5=c5+1;}
         else
          {c6=c6+1;}
        }
       else
        {if(str[k]=='T')
          {c7=c7+1;}
         else
          {c8=c8+1;}
        }
      }
    }
   printf("%d %d %d %d %d %d %d %d %d\n",n,c1,c2,c3,c4,c5,c6,c7,c8);
  }
 return 0;
}
