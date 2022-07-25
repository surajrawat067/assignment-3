#include<stdio.h>
#include<conio.h>
int main()
{
char x;
printf("enter alphabet\n");
scanf("%c",&x);

if(x>='a' && x<='z')

printf("lower case");

else if(x>='A' && x<='Z')
printf("upper case");



else if (x>='0' && x<='9')
      printf("digit");
    else
       printf("special");


return 0;
}