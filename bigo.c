#include<stdio.h>
#include<stdlib.h>
int c1[250],c2[250];
int main()
{
 int t,n,m,i,a[250],b[250],j,k,d,x;
 scanf("%d",&t);
 while(t--)
  {scanf("%d %d",&n,&m);
   for(i=0;i<m;i++)
    {scanf("%d %d",&a[i],&b[i]);}
   for(i=0;i<n;i++)
    {c1[i]=0;c2[i]=0;}
   j=1;
   while(j<=n)
    {for(i=0;i<m;i++)
      {if(a[i]==j)
        {c1[j-1]++;}
       if(b[i]==j)
        {c2[j-1]++;}
      }
     j++;
    }
   d=0;x=0;
   for(k=0;k<n;k++)
    {if(c1[k]==0||c2[k]==0)
      {d=1;}
    }
   if(d==1)
    {printf("NO\n");}
   else
    {for(i=0;i<n;i++)
     {if(c1[i]!=c2[i])
       {x=1;}
     }
     if(x==1)
      {printf("NO\n");}
     if(x==0)
      {printf("YES\n");}
    }
  }
 return 0;
}
