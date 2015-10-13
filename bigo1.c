#include<stdio.h>
#include<string.h>
int l1,l2,l3,l4;
int largstr();
int rem(int);
int main()
{
 char s1[100],s2[100],s3[100],s4[100];
 int t,i,j,max;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
     {
      scanf("%s",s1); l1=strlen(s1);
      scanf("%s",s2); l2=strlen(s2);
      scanf("%s",s3); l3=strlen(s3);
      scanf("%s",s4); l4=strlen(s4);
      max=largstr();
     if(strcmp(s1,s2)==0&&strcmp(s1,s3)==0&&strcmp(s1,s4)==0)
        printf("0\n");
     else
        for(j=0;j<max;j++)
            if(s1[j]!=s2[j] || s1[j]!=s3[j] || s1[j]!=s4[j])
               {printf("%d\n",rem(j));
               break;}
     }
}
int rem(int p)
   {
     return (l1-p)+(l2-p)+(l3-p)+(l4-p);
   }
int largstr()
{
 if(l1>=l2&&l1>=l3&&l1>=l4)
    return l1;
 else if(l2>=l1&&l2>=l3&&l2>=l4)
    return l2;
 else if(l3>=l1&&l3>=l2&&l3>=l4)
    return l3;
else
    return l4;
}
