#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int t,n,a[600000],i,j,c,r;
 scanf("%lld",&t);
 while(t--)
  {scanf("%lld",&n);
   for(i=0;i<n-1;i++)
    {scanf("%lld",&a[i]);}
   for(i=1;i<=n;i++)
    {c=0;
     for(j=0;j<n-1;j++)
      {if(a[j]==i)
        {c=1;break;}
      }
     if(c==0)
      {r=i;break;}
    }
   printf("%lld\n",r);
  }
 return 0;
}
