#include<stdio.h>
#include<stdlib.h>
long int a[100],b[100];
int p;
void sora()
{
 int i,j,min;
 for(i=0;i<p;i++)
  {min=a[i];
   for(j=i;j<p;j++)
    {if(a[j]<min)
      {min=a[j];
       a[j]=a[i];
       a[i]=min;}
     }
   } 
}
void sorb()
{
 int i,j,min;
 for(i=0;i<p;i++)
  {min=b[i];
   for(j=i;j<p;j++)
    {if(b[j]<min)
      {min=b[j];
       b[j]=b[i];
       b[i]=min;}
     }
   } 
}

int main()
{
 int i,j,r,t,k,l,max;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {
    scanf("%d",&p);
    for(j=0;j<p;j++)
     {scanf("%ld %ld",&a[j],&b[j]);}
    sora();
    sorb();
    max=0;
    for(k=0;k<p;k++)
     {r=k+1;
      for(l=0;l<p;l++)
       {if(a[k]>b[l])
          {r--;}
       }
      if(r>max)
       {max=r;}
     }
    printf("%d\n",max);
  }
 return 0;
}



