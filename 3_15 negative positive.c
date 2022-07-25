#include<stdio.h>

int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
if(a>0)
printf("%d is positive",a);
if(a==0)
printf("%d is zero",a);
if(a<0)
printf("%d is negative",a);
   return 0;
}