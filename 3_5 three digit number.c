#include<stdio.h>

int main()
{
int a,b;
printf("enter  number\n");
scanf("%d",&a);
b=a/100;
if(b<9)
    if(b==0)
    printf("not a three digit number");
    else
     printf("three digit number");
else
printf("not a three digit number");
    return 0;
}