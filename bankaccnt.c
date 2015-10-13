#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,d;
float y;
scanf("%d%f",&x,&y);
printf("%f\n",((x%5)==0&&(y-x-0.5)>=0)?y-x-0.5:y);
return 0;
}

