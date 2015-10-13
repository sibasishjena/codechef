#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[1000006],b[1000006],c[1000006];
long long int j,k,l;
void sorb()
{int x,min,y;
 for(x=0;x<j;x++)
 {min=b[x];
  for(y=x;y<j;y++)
   {if(b[y]<min)
     {min=b[y];
      b[y]=b[x];
      b[x]=min;}
   }
 }
}
void sorc()
{int x,min,y;
 for(x=0;x<k;x++)
 {min=c[x];
  for(y=x;y<k;y++)
   {if(c[y]<min)
     {min=c[y];
      c[y]=c[x];
      c[x]=min;}
   }
 }
}
int main()
{
 int t,d;
 long long int a,z,i;
 char r;
 scanf("%d",&t);
 while(t--)
  {scanf("%s",str);
   l=strlen(str);
   j=0;k=0;
   for(i=0;i<l;i++)
    {d=str[i];
     if(d>=48&&d<=57)
       {b[j]=d;j++;}
     else
       {c[k]=d;k++;}
    }
   sorb();
   sorc();
   a=0;z=0;
   for(i=0;i<l;i++)
    {d=str[i];
     if(d>=48&&d<=57)
       {r=b[a];
        printf("%c",r);a++;}
     else
       {r=c[z];
        printf("%c",r);z++;}
    }printf("\n");
  }
 return 0;
}

