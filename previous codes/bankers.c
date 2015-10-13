#include<stdio.h>
#include<stdlib.h>
main()
{
	int res_no;

	int p,j;

	int res[10],sys_res[10];

	int process[10][10],max[10][10],need[10][10];

	printf("enter the total number of resources in system\n");
	scanf("%d",&res_no);

	int i;

	printf("enter the total resources in system:");
	for(i=0;i<res_no;i++)
	{
		printf("%c =",(i+97));
		scanf("%d",&res[i]);
		printf("\t");
	}

	printf("enter the available system resources:\n");
	for(i=0;i<res_no;i++)
	{
		printf("%c =",(i+97));
		scanf("%d",&sys_res[i]);
		printf("\t");
	}

	printf("enter the number of processes:\n\t");
	scanf("%d",&p);
	
	printf("enter the currently allocated resources:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<res_no;j++)
		{ scanf("%d",&process[i][j]);
		printf("\t");
		}printf("\n");
	}
	printf("enter the max resources in system:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<res_no;j++)
		{ scanf("%d",&max[i][j]);
			printf("\t");
		}printf("\n");
	}
	
	printf("need = maximum resources- currently allocated resoucres\n");
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<res_no;j++)
		{ 	need[i][j] = abs(max[i][j] - process[i][j]);
			printf("%d\t",need[i][j]);
		}printf("\n");
	}
		
}
