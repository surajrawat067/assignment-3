#include<stdio.h>

int main()
{
int a,b,c;
printf("enter triangle first side \n");
scanf("%d",&a);
printf("enter triangle second side \n");
scanf("%d",&b);
printf("enter triangle third side \n");
scanf("%d",&c);
if(a+b>c && b+c>a && c+a>b)
printf("It is a triangle");
else 
printf("it is not a triangle");
   return 0;
}