#include<stdio.h>

int main()
{
float a,b,profit,loss;
printf("enter cost price \n");
scanf("%d",&a);
printf("enter sell price\n");
scanf("%d",&b);
if(a>b)
{
  loss= a-b;
  printf("loss  is %f%% ",((loss/a)*100));
   
   } 

if(b>a)
{ 
   profit=b-a;
   printf("profit is %f%%",(profit/a)*100);
}
if(a==b)
  printf("no loss no profit");
    return 0;
}