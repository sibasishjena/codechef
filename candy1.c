#include<stdio.h>
#include<stdlib.h>
int main()
{
  int p[10000],n,sum,pr,i,k,s,d;
  while(1)
  {
    scanf("%d",&n);
    if(n!=-1)
   {sum=0;
    for(i=0;i<n;i++)
     {scanf("%d",&p[i]);
      sum=sum+p[i];}
    d=sum%n;
    pr=sum/n;
    if(d==0)
     { s=0;
       for(i=0;i<n;i++)
        {k=pr-p[i];
	 if(k>0){s=s+k;}
	}
       printf("%d\n",s);
     }
    else
      {s=-1;printf("%d\n",s);}
   }
    else
     break;
   }
 return 0;
}
