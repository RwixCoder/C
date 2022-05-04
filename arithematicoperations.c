//addition,subtraction,multiplication,division,average of two numbers
#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float div,ave;
    printf("Enter First Number"); 
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    ave=a%b;
    printf("Sum Of Two Number is \t\t%d \nSubtraction Of To Number is \t%d \nProduct Of Two Number Is \t%d \nDivision Of Two Number Is \t%.2f \nAverage Of Two Number Is %f",sum,sub,mul,div,ave);
    return 0;
}