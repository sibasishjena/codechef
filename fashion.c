#include<stdio.h>
#include<stdlib.h>
int a[1000],b[1000],t;
void sorta();
void sortb();
int main()
{
 int n,i,j,sum,s;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {scanf("%d",&t);
   sum=0;
   for(j=0;j<t;j++)
    {scanf("%d",&a[j]);}
   for(j=0;j<t;j++)
    {scanf("%d",&b[j]);}
   sorta();
   sortb();
   for(j=0;j<t;j++)
    {s=a[j]*b[j];sum=sum+s;}
   printf("%d\n",sum);
  }
 return 0;
}
void sorta()
{
 int i,j,min,temp;
 for(i=0;i<t;i++)
  {min=a[i];
   for(j=i;j<t;j++)
    {if(a[j]<min)
      {temp=a[j];
       a[j]=min;
       min=temp;
       a[i]=temp;}
     }
   }
 }
void sortb()
{
 int i,j,min,temp;
 for(i=0;i<t;i++)
  {min=b[i];
   for(j=i;j<t;j++)
    {if(b[j]<min)
      {temp=b[j];
       b[j]=min;
       min=temp;
       b[i]=temp;}
     }
   }
 }

