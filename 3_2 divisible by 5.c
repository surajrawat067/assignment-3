#include<stdio.h>

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
b=a%5;
if(b==0)
printf("it is divisble by 5");
else
printf("it is not divisible by 5");
    return 0;
}