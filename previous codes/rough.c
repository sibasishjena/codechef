#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct xxx
{
	char a;
	int b;
	char c;
};
int main()
{
	printf("%ld\n",sizeof(struct xxx));
	return 0;
};

