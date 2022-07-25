#include<stdio.h>

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
b=a%2;
if(b==0)
printf("it is even ");
else
printf("it is odd");
    return 0;
}