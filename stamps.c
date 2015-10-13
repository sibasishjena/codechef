#include<stdio.h>
#include<stdlib.h>
int a[1500],f;
void sort()
{
 int i,j,max;
 for(i=0;i<f;i++)
  {max=a[i];
   for(j=i;j<f;j++)
    {if(a[j]>max)
      {max=a[j];
       a[j]=a[i];
       a[i]=max;}
    }
   }
}
int main()
{
 int t,i,j,k;
 long int b,sum;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
  {scanf("%ld %d",&b,&f);
   for(j=0;j<f;j++)
    {scanf("%d",&a[j]);}
   sort();
   sum=0;
   printf("Scenario #%d:\n",i);
   for(k=0;k<f;k++)
    {sum=sum+a[k];
     if(sum>=b)
      {printf("%d\n",k+1);break;}
    }
   if(sum<b)
    {printf("impossible\n");}
   printf("\n");
  }
 return 0;
}
