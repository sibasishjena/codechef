#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	int rem;
	scanf("%d%d",&a,&b);
	a = a-b;
	rem = a%10;
	if(rem<9)
	{ rem = rem+1;}
	else {rem = rem-1;}
	a =a/10;
	a = (a*10)+rem;
	printf("%d\n",a);
return 0;}
