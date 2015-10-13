#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
     int ir,inc,d,x,n=0,k=0,m=0,ora,on[100],s,i=0,j;
     long in,p;
     printf("Enter the input radiax (1-10): ");
     scanf("%d",&ir);
     printf("Enter the number: ");
     scanf("%ld",&in);
     printf("Enter the output radiax (1-10): ");
     scanf("%d",&ora);
     inc=in;
     while(inc!=0)
     {
         d=inc%10;
         if(d>=ir)
         { d=0;n=0;
           printf("Invalid input\n");
           while(n==0)
           {
             printf("Press 1 to change the radiax\n");
             printf("Press 2 to change the number\n");
             printf("Enter your choice: ");
             scanf("%d",&x);
             switch(x)
             {
               case 1:
                   printf("Enter the input radiax (1-9): ");
                   scanf("%d",&ir);
                   n=1;
                   break;
               case 2:
                   printf("Enter the number: ");
                   scanf("%ld",&in);
                   inc=in;
                   n=1;
                   break;     
               default:
                   printf("Invalid choice\n");
                   n=0;
                   break;
             }
           } 
         }
         else
         {
           inc=(inc-d)/10;
         }
     }
     inc=in;
     if(ir!=10)
     {
        while(inc!=0)
        {
           d=inc%10;
           p=d*pow(ir,k);
           m=m+p;
           inc=(inc-d)/10;
           k=k+1;
        }
        inc=m;   
        if(ora!=10)
        {
           while(inc!=0)
           {       
               s=inc%ora;
               on[i]=s;
               inc=inc/ora;
               i++;
           }
           printf("%ld in %d radiax is ",in,ir);
           for(j=i-1;j>=0;j--)
           {
              printf("%d",on[j]);
           }
           printf(" in %d radiax\n",ora); 
        }
        if(ora==10)
        {
          printf("%ld in %d radiax is %d in %d radiax\n",in,ir,m,ora);  ;
        }
     }          
     if(ir==10)
     {
         if(ora!=10)
         {
           while(inc!=0)
            {       
                s=inc%ora;
                on[i]=s;
                inc=inc/ora;
                i++;
            }
           printf("%ld in %d radiax is ",in,ir);
           for(j=i-1;j>=0;j--)
           {
              printf("%d",on[j]);
           }
           printf(" in %d radiax\n",ora);    
         } 
         if(ora==10)
         {
          printf("%ld in %d radiax is %ld in %d radiax\n",in,ir,in,ora);  ;                   
         }
     }
    return 0;
}

