#include<stdio.h>
void print(int arr[],int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[],int l,int h)
{
	int x = arr[h];
	printf("\n\t-------pivot element is:%d\n",x);
	int i = l-1;
	printf("\n\ti = %d",i);
	int j;
	for(j=l;j<=h-1;j++)
	{
		if(arr[j]<x)
		{
			i++;
			swap(&arr[i],&arr[j]);
			print(arr,9);
		}
	}
	swap(&arr[i+1],&arr[h]);
	print(arr,9);
	return(i+1);
}
void qsort(int arr[],int l,int h)
{
	printf("|**l %d**|\n",l);
	printf("|**h %d**|\n",h);
	if(l<h)
	{
		int p = partition(arr,l,h);
		qsort(arr,l,p-1);
		qsort(arr,p+1,h);
	}
}
main()
{
	int i, arr[] = {10,7,8,1,9,5,2,15,13};
	int n= sizeof(arr)/ sizeof(arr[0]);
	qsort(arr,0,n-1);
	printf("sorted array is\n");
	print(arr,n); 
	
}


