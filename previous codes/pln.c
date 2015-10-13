#include"stdio.h"
#include"string.h"
long long int max =100000;
int main()
{
	int t,c,i,k;
	char ip[max];
	scanf("%d",&t);
	

	while(t--)
	{	int p =0;
		scanf("%s",ip);
		k=strlen(ip)-1;
		for(i=0;i<=k;i++)
		{
			if((ip[i]>='a')&&(ip[i]<='z'))
			{}
			else { printf("NO\n");
			p=1;
			break;}
		}
		if(p==1) continue;
		c=0;
		i=0;
		
		while(i<=k)
		{
			if(ip[i]!=ip[k])
			{
				if(c++==2)	break;
				if(ip[i]==ip[k-1])	k--;
			else	if(ip[i+1]==ip[k])	i++;
			else	{	
					c=2;
					break;
				}
			}
			i++;
			k--;
		}
		if(c<2)		printf("YES\n");
		else		printf("NO\n");
	}
	return 0;
}
