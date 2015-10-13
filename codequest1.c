#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 char str[100000];
 long int l,c,i,j;
 int t;
 scanf("%d",&t);
 while(t--)
 { scanf("%s",str);
   l=strlen(str);
   c=0;
   for(i=0,j=1;i<l;i++,j++)
    {if(str[i]=='0'&&str[j]=='1')
      {c++;}
    }
   printf("%ld\n",c);
 }
 return 0;
}
