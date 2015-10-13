main()
{
	int t;
	scanf("%d",&t);
	int a[100];
	int i;
	for(i=0;i<t;i++)
	{
	scanf("%d",&a[i]);
	}
	int trgt;
	printf("enter target:\n");
	scanf("%d",&trgt);	
	int lo =0,hi = t,m;
	while(lo<=hi)
	{
	m = lo+(hi-lo)/2;
	if(a[m]==trgt)
	{
		printf("found!!! at %d",m);
		break;
	}
	else if(a[m]<trgt)
	{
		lo = m+1;
	}
	else if(a[m]>trgt)
	{
		hi = m-1;
	}
	}
	
}
