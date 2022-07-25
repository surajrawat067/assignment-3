#include<stdio.h>

int main()
{
int a,b,c;
printf("enter a number\n");
scanf("%d",&a);
    if(a%3==0)
    printf("it is divisible by 3\n");
          if(a%7==0)
          printf("it is  divisible by 7");
             else
               printf("it is not divisible by 3 and 7");
 return 0;
}