#include<stdio.h>
#include<stdlib.h>
int x[10];
int r=-1,f=-1,m,k;
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
	int i;
        for(i=0;i<=m;i++)
        printf("%d ",x[i]);
        printf("\n");
}
int enque()
{
	int n;
	printf("enter priority ");
	scanf("%d",&n);
	if(r==-1)
	{
		r++;
		m=r;
		f=r;
		x[r]=n;
	}
	else
	{
		while (r<=m && n>x[r])
		{
			r++;
		}
		for(k=m+1;k>r;k--)
		{
			x[k]=x[k-1];
		}
		x[r]=n;
		m++;
		r=f;
			
	}
}
int deque()
{
	if(f==-1 || m<0)
	{
		printf("queue is empty\n");
		return;
	}
	printf("%d\n",x[f]);
	for(k=0;k<=m;k++)
	{
		x[k]=x[k+1];
	}
	m--;
}


















