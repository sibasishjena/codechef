#include<stdio.h>
#include<stdlib.h>
int main()
{
 int t;
 long long int n,ans,i;
 scanf("%d",&t);
 while(t--)
  {scanf("%lld",&n);
   ans=1;i=2;
   if(n==1)
    {printf("0\n");}
   else if(n==2)
    {printf("1\n");}
   else
    {while(1)
      {i=i*2;
       ans=ans+1;
       if(i>=n)
         {printf("%lld\n",ans);break;}
      }
    }
  }
 return 0;
}
