#include<stdio.h>
#include<stdlib.h>
int x[5],y[5];
int i=-1,j=-1;
main()
{
int n;
do{
   printf("1 for insert\n");
   printf("2 for delete\n");
   printf("3 for traverse\n");
   printf("0 to stop\n");
   printf("enter choice: ");
   scanf("%d",&n);
   if(n==1)
   enque();
   else
   if(n==2)
   deque();
   else
   if(n==3)
   traverse();
 } while (n!=0);
}
int traverse()
{
	
}
int enque()
{
	while(j>=0)
	{
		i++;
		x[i]=y[j];
		j--;
	}
	i++;
	printf("Enter the data:");
	scanf("%d",&x[i]);
}
int deque()
{
	if(i==-1&&j==-1)
	{
		printf("queue is empty\n");
		return;
	}
	while(i>=0)
	{
		j++;
		y[j]=x[i];
		i--;
	}
	printf("%d \n",y[j]);
	j--;
}


















