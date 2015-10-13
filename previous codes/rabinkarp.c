#include<math.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char txt[50],pat[4];
	int i;
	scanf("%s",txt);
	printf("***");
	scanf("%s",pat);
	int N = strlen(txt);
	int M = strlen(pat);
	int p =0;
	int t = 0;
	int k = M-1;
	for(i = 0;i<M;i++)
	{
		p = p+(pat[i]*(10^k--));
		t = t+(txt[i]*(10^k--));
	}	
	printf("\n%d",p);
	printf("\n%d",t);
		return 0;
}
