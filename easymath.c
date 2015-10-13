#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int t,i,n,m,a,d,w,x,y,z,c;
 scanf("%lld",&t);
 while(t--)
 {scanf("%lld%lld%lld%lld",&n,&m,&a,&d);
  w=a+d;x=a+(2*d);y=a+(3*d);z=a+(4*d);
  c=0;
  for(i=n;i<m;i++)
   {if(i%a!=0&&i%(a+d)!=0&&i%(a+2*d)!=0&&i%(a+3*d)!=0&&i%(a+4*d)!=0)
     {c=c+1;}
   }
  printf("%lld\n",c);
 }
 return 0;
}
