#include<stdio.h>
#include<stdlib.h>
int x[5],y[5],i=-1,j=-1;
int main()
{
 int temp;
 while(i<4)
 {
  i++;
  printf("Enter a number: ");
  scanf("%d",&x[i]);
 }
 while(j<=4)
 {
   temp=x[i];
     i--;
   if(j==-1)
    {j++;
     y[j]=temp;
    }
   else
    {while(temp>y[j])
        {i++;
         x[i]=y[j];
         j--;}
      j++; y[j]=temp;}
 }
 while(j>=0)
  {printf("%d ",y[j]);j--;}
 return 0;
}
