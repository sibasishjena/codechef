#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int n,a,b,k,p,sp,c;
 char str[250];
 while(1)
  {
    scanf("%d",&n);
    if(n!=0)
    {
      scanf("%s",str);
      k=strlen(str);
      a=(n*2)-1;
      b=1;
      p=0;
      sp=0;
      c=0;
      while(sp<n)
       {
  	 if(p<k)
	 {if(c==0)
	   {printf("%c",str[p]);
	    p=p+a;c=1;}
	  else if(c==1)
	    {printf("%c",str[p]);
	     p=p+b;c=0;}
	 }
	else
	 {sp=sp+1;
	  p=sp;a=a-2;b=b+2;c=0;}
       }printf("\n");
     }
    else
     break;
   }	
    
  return 0;
}
    
