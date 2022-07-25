#include<stdio.h>

int main()
{
int a;
printf("enter a year \n");
scanf("%d",&a);
if(a%400==0)
printf("leap year");
if(a%4==0)
printf("leap year");
else
printf("not a leap year");


    return 0;
}