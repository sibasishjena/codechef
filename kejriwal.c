#include<stdio.h>
#include<stdlib.h>
int a[150],n;
void sora()
{
 int i,j,min;
 for(i=0;i<n;i++)
  {min=a[i];
   for(j=i;j<n;j++)
    {if(a[j]<min)
      {min=a[j];
       a[j]=a[i];
       a[i]=min;}
     }
   } 
}

int main()
{
 int t,m,i,j,sum,d;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {scanf("%d %d",&n,&m);
   for(j=0;j<n;j++)
    {scanf("%d",&a[j]);}
   sora();
   sum=0;
   for(j=0;j<m;j++)
    {if(a[j]<0)
      {sum=sum+a[j];}
     else
      {break;}
    }
   printf("%d\n",0-sum);
  }
 return 0;
}
