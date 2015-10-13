#include<stdio.h>
#include<stdlib.h>

long long int a[1000000],t,i;

void swap(int a,int b)
{
	int c =a;
	a = b;
	b=c;
}


void quicksort(int a[],int left,int right)
{
	if(left<right)
	{
		int q = partition(a,left,right);
		quicksort(a,left,q-1);
		quicksort(a,q+1,right);
	}
}


int partition(int a[],int left,int right)
{
	m =(left+right)/2;
	swap(a[left],a[m]);
	int pivot = a[left];
	int l =left+1;
	int h =right;
	while(l<=h)
	{
		while(a[h]>pivot)
		{
			h = h-1;
			while((l<=h)&&(a[l]<=pivot))
			{
				l = l+1;
			}
		}
	}
}
int main()
{
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&a[i]);
	}
	

return 0;}
