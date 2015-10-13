#include<stdio.h>
void main()
{
 long long int i,b,a,n,r1,r2,rev1,rev2,rs,sum;
 scanf("%lld",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%lld%lld",&a,&b);
  
  rev1=0;rev2=0;
  while(a>0)
  { 
   r1=a%10;
   
   rev1=(rev1*10)+r1;
   
   a=a/10;
   
  }
    while(b>0)
    {
     r2=b%10;
     rev2=(rev2*10)+r2;
     b=b/10;
    }
    sum=rev1+rev2;
    rs=0;
   
    while(sum>0)
    {
     n=sum%10;
     rs=(rs*10)+n;
     sum=sum/10;
    }
   
     printf("%lld\n",rs);
    }
}

