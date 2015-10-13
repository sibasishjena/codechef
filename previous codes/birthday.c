#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,p=1;
	int i,j;
	int sum =0;
	
	int a[10];
	scanf("%d",&t);
	while(t--)
	{
		
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);	
		}

			int countt =0; 
			for(i=0;i<10;i++)
			{
				if((a[i]==0)&&(i!=0))
				{
					
					printf("%d\n",i);
				}	
				else if(a[i]!=0)
				{
					countt++;
				} 
			}
	
			int count =1;
			if(countt==10)
				{
					while(count<=8)
					{
						for(j=0;j<10;j++)
						{	
							if(a[j]==count)
							{
								count+=1;
								while(count--)
								{
									sum+=(j*p);
									p*=10;				
								} printf("%d\n",sum);
								count =21;
								break;
							}
						}
				}	}

			i =0;
			count = 1;

			if((a[i]==0)&&(i==0))
			{ 	
				while(count<=8)
				{
					for(j=0;j<10;j++)
					{	
						if(a[j]==count)
						{
							printf("%d\n",j*10);
							count =21;
							break;
						}
					}
				}
				count+=1;
			}
			
				
	}
return 0;}

