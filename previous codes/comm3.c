#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int t,r;
	double x1,x2,x3,y1,y2,y3,X,Y;
	double d12,d23,d13;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		int count= 0;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		X = (x2-x1)*(x2-x1); Y = (y2-y1)*(y2-y1);
		X = X+Y;
		d12 = sqrt((X));
	
		X = (x2-x3)*(x2-x3); Y = (y2-y3)*(y2-y3);
		X = X+Y;
		d23 = sqrt((X));
	
		X = (x1-x3)*(x1-x3); Y = (y1-y3)*(y1-y3);
		X = X+Y;
		d13 = sqrt((X));

		if(d12<=r) count++;
		if(d23<=r) count++;
		if(d13<=r) count++;
		
		if((count==3)||(count==2)) printf("yes\n");
		else printf("no\n");	
	}
return 0;}
