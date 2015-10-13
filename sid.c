#include<stdio.h>
int a[1000];
int b[1000];

int main()
{
int i,j,k,l,m,n,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&m);
for(j=0;j<m;j++)
{
    scanf("%d",&a[j]);
}
for(k=0;k<m;k++)
{
    scanf("%d",&b[k]);
}
sort(a,m);
sort(b,m);
for(l=0;l<m;l++)
{
c=c+a[l]*b[l];
}
printf("%d\n",c);
c = 0;
}
return 0;
}

/********sorting******/
sort(number,m)
int m;
int number[1000];
{int i,j,a,n;
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(number[i]<number[j])
{
a= number[i];
number[i]=number[j];
number[j]=a;
}
}
}
}

