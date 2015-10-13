#include<stdio.h>
#include<stdlib.h>

int mod(char s[],int b)
{
	int r=0,i;
	for(i=0;s[i];i++)
	{
		r = 10*r+(s[i]-'0');
		r  = r%b;
	}
	return r;
}
int gcd(int a,int b)
{
	if(b == 0)
	{
		return a;
	}
	else return gcd(b,a%b);
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a;
	char s[255];
	scanf("%d",&a);
	scanf("%s",s);
	if(a==0) printf("%s\n",s);
	else if(s[0]==0) printf("%d\n",a);
	else printf("%d\n",gcd(a,mod(s,a)));
	}
return 0;}
