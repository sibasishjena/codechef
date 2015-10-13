#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
 int i,j,l,c;
 char str[30];
 while(i--)
 {scanf("%s",str);
  l=strlen(str);
  c=1;
  for(j=0;j<l;j++)
   {if(str[j]=='T'||str[j]=='D'||str[j]=='L'||str[j]=='F')
     {c*=2;}
   }
  printf("%d\n",c);
 }
 return 0;
}
