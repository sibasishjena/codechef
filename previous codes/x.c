main()
{
	int p[10],i,j;
	for(i=0;i<10;i++)
		scanf("%d",&p[i]);

	int s=p[0],si=0;
	for(i=0;i<10;i++)
	{
		if(s<p[i])
		{
			si=i;
			s=p[0];
		}
		
	}

	int sum=0;
	for(;s!=0;s--,si=si*10)
	sum=sum+si;

	printf("%d",sum);

	
	return 0;
}
