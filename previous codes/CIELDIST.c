#include<stdio.h>
main()
{
	int t;
	float Ds,Dt,D,d;
	if((scanf("%d\n",&t)>=1)&&(scanf("%d\n",&t)<=2013))
	{
	while(t--)
	{
		scanf("%f",&Ds);
		scanf("%f",&Dt);
		scanf("%f",&D);
		float r1,r2;
		r1 = Ds;
		r2 = D - Dt;
		if(r2<r1){
		d = 0;
			printf("%f",d);}
		else if(r2>r1){
		d = r2 - r1;
		printf("%f",d);}
		else if(r1 == r2){
		d = 0;	
		printf("%f",d);}

	}} 
}
