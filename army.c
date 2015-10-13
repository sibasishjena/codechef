#include<stdio.h>
#include<stdlib.h>
int main()
{
 int t,i,j,a,b,maxg,maxmg;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {printf("\n");
   scanf("%d %d",&a,&b);
   int g[a],mg[b];
   for(j=0;j<a;j++)
    {scanf("%d",&g[j]);}
   for(j=0;j<b;j++)
    {scanf("%d",&mg[j]);}
   maxg=g[0];
   maxmg=mg[0];
   for(j=1;j<a;j++)
    {if(g[j]>maxg)
      {maxg=g[j];}
    }
   for(j=1;j<b;j++)
    {if(mg[j]>maxmg)
      {maxmg=mg[j];}
    }
   if(maxg>=maxmg)
    {printf("Godzilla\n");}
   else if(maxmg>maxg)
    {printf("MechaGodzilla\n");}
  else
    {printf("uncertain\n");}
  }
 return 0;
}



