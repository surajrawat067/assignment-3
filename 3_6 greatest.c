#include<stdio.h>

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
printf("enter b number\n");
scanf("%d",&b);
if(a==b)
    printf("\n %d",b);
       if(a>b)
          printf("\n a is greatest");
        if(b>a) 
           printf("\n b is greatest");
    return 0;
}