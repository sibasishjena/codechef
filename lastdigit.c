#include<stdio.h>
#include<stdlib.h>
int main()
{
 long long int b;
 int t,i,a,d,p,k,j,m;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {scanf("%d %lld",&a,&b);
    d=a%10;
    j=1;
    if(b==0)
     {printf("1\n");}
   else if(d==2||d==3||d==7||d==8)
      {p=b%4;
       if(p!=0)
        {for(m=1;m<=p;m++)
            {j=j*d;}
         k=j%10;
         printf("%d\n",k);}
       else if(p==0)
         {for(m=1;m<=4;m++)
            {j=j*d;}
          k=j%10;
          printf("%d\n",k);}
      }
    else if(d==4||d==9)
      {p=b%2;
       if(p!=0)
        {for(m=1;m<=p;m++)
            {j=j*d;}
         k=j%10;
         printf("%d\n",k);}
       else if(p==0)
         {for(m=1;m<=2;m++)
            {j=j*d;}
          k=j%10;
          printf("%d\n",k);}
      }
    else if(d==5||d==6||d==1||d==0)
      {printf("%d\n",d);}
   }
 return 0;
}
   
