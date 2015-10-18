#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char x[120],y[120];
int tot[120],diff[120],kla[120],nat[120],k,kl;
void rev()
{
	int i,j;
	for(i=(strlen(x)-1),j=(strlen(y)-1),k=0;i>=0||j>=0;i--,j--,k++)
	{
		if(i<0)
			{tot[k]=0;}
		else
			{tot[k]=x[i]-48;}
		if(j<0)
			{diff[k]=0;}
		else
			{diff[k]=y[j]-48;}
	}
}
void subs()
{
	int i,p;
	for(i=0;i<k;i++)
	{
		if(tot[i]>=diff[i])
		{
			nat[i]=tot[i]-diff[i];
		}
		else if(tot[i]<diff[i])
		{
			p=i+1;
			while(tot[p]==0)
			{
				tot[p]=9;
				p++;
			}
			tot[p]=tot[p]-1;
			tot[i]=10+tot[i];
			nat[i]=tot[i]-diff[i];
		}
	}
}
void adds()
{
	int i,p=0,sum;
	for(i=0;i<k;i++)
	{
		sum=tot[i]+diff[i]+p;
		p=sum/10;
		kla[i]=sum%10;
	}
	kl=k;
	while(p!=0)
	{
		kla[kl]=p%10;
		p=p/10;
		kl++;
	}
}
void divs()
{
	int p=0,l;
	l=kl-1;
	while(l>=0)
	{
		p=(p*10)+kla[l];
		if(p>=2)
		{
			kla[l]=p/2;
			p=p%2;
		}
		else
		{
			kla[l]=0;
		}
		l--;
	}
	p=0;
	l=k-1;
	while(l>=0)
	{
		p=(p*10)+nat[l];
		if(p>=2)
		{
			nat[l]=p/2;
			p=p%2;
		}
		else
		{
			nat[l]=0;
		}
		l--;
	}

}
int main()
{
	int i,flag,t;
	for(t=1;t<=10;t++)	
	{	
		scanf("%s",x);
		scanf("%s",y);
		rev();
		subs();
		adds();
		divs();
		flag=0;
		for(i=kl-1;i>=0;i--)
			{
				if(kla[i]!=0 || flag==1)
				{printf("%d",kla[i]);flag=1;}				
			}
		if(flag==0)
			printf("0");
		printf("\n");
		flag=0;
		for(i=k-1;i>=0;i--)
			{
				if(nat[i]!=0 || flag==1)
					{printf("%d",nat[i]);flag=1;}				
			}
		if(flag==0)
			printf("0");
		printf("\n");
	}
}
