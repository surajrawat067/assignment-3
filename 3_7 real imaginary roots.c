#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
float D;
printf("enter a value of a,c,b\n");
scanf("%d %d %d",&a,&b,&c);
D=4*b*b-4*a*c;
printf("%f",D);
if(D>0)
printf("real&distint");
if(D==0)
printf("equal & distint");
if(D<0)
printf("imaginary roots");

return 0;
}
  