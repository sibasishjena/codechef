#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int max = 100001,max1 = 1000000;
int main()
{
	int t,flag,z,sum=0,p;
	scanf("%d",&t);
	
	while(t--)
	{	
		char a[max];
		scanf("%s",a);
		int l = strlen(a); 
		int i;
		p=0;
		for(i=0;i<l;i++)
		{
			if((a[i]>='a')&&(a[i]<='z'))
			p++;
		}
		
		int j=l-1;
		i=0;
		int k = l-2;
		int m =0;
		int count =0;
		sum+=l;
		
		if((p==l)&&(sum<=max1))
		{	
			while(i<l)
			{ 
				while(j>=0)
				{
					if(a[i]==a[j])
					{	
						z=1;
						if((m==k)||(abs(m-k)==1)) {flag =1;break;}
						else m++;k--;i++;j--;
					}
	
					else 
					{
						if(a[i+1]==a[j])
						{
							if(count ==0)
							{
								z = 1;count = 1;
								if((m==k)||(abs(m-k)==1)) {flag = 1;break;}
								else i+=2;j--;m++;k--;
			 				}
							else {z=0;flag=1;break;}
						}
						else if(a[j-1]==a[i])
						{
							if(count==0)
							{
								z=1; count =1;
								if((m==k)||(abs(m-k)==1)) {flag =1;break;}
								else j-=2;i++;m++;k--;
							}
							else {z=0;flag=1;break;}				
						}
						else if(a[i]!=a[j])
						{
							z=0;
							flag =1;
							 break;
						}
					}
				}
				if(flag==1) break;
			}
		}
		if((z == 1)&&(p==l))
		printf("YES\n");
		else printf("NO\n");				
	}	
return 0;
}
