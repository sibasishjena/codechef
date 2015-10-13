#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	float y;
	int x;
	scanf("%d%f",&x,&y);
	if((x==0.00)&&(y==0)){
		printf("0");
	}
	else if(x%5!=0)
	{
	printf("%f\n",y);
	exit(0);	}
	else {
		if(x>(y-0.5))
		{
			printf("%f",y);
		}
		else
		{
			y = y-x-0.50;
			printf("%f",y);
		}
	}
return 0;

}
