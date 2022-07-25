#include<stdio.h>

int main()
{
int Maths, English, Hindi, Punjabi, Science;
printf("enter English Marks\n ");
scanf("%d",&English);
printf("enter Maths Marks\n ");
scanf("%d",&Maths);
printf("enter  Hindi Marks\n ");
scanf("%d",&Hindi);
printf("enter Punjabi Marks\n ");
scanf("%d",&Punjabi);
printf("enter Science Marks\n ");
scanf("%d",&Science);
if(Maths>33 && English>33 && Hindi>33 && Punjabi>33 && Science>33)
    printf("pass");
    else 
    printf("fail");
    return 0;
}