#include<stdio.h>

int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
    if(a%2==0)
    printf("it is divisible by 2\n");
          if(a%3==0)
          printf("it is  divisible by 3");
          if(a%2 && a%3 ==!0)
        printf("it is not divisible by 2,3");
 return 0;
}