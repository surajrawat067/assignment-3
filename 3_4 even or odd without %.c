#include<stdio.h>

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
b=a;
a=a/2;
a= a*2;

    if(a==b)
    printf("it even ");
      else
        printf("it is odd");
        
        return 0;
}