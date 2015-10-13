#include<stdio.h>
#include<stdlib.h>
int a[1500],b[1500],top;
void push(int n)
{
 top=top+1;
 b[top]=n;
}
void pop()
{top--;}
int main()
{
 int t,i,j,c,temp;
 while(1)
  {
    scanf("%d",&t);
    if(t==0)
     {break;}
    else
     {for(i=0;i<t;i++)
       {scanf("%d",&a[i]);}
      c=1;top=-1;
      for(j=0;j<t;j++)
       {if(c==a[j])
          {c=c+1;
           temp=a[j];}
         else
           {while(c==b[top]&&top!=-1)
             {temp=b[top];
                pop();
                c=c+1;}
            if(c==a[j])
              {c=c+1;
               temp=a[j];}
            else
               {push(a[j]);}
           }
        }
        while(c==b[top]&&top!=-1)
          {temp=b[top];
            pop();
            c++;}
        if(top!=-1)
          {printf("no\n");}
        else
          {printf("yes\n");}
      }
   }
 return 0;
}

