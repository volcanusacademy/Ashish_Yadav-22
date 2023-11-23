/*Question 5: Function with variable arguments and a return value
Write a C function named calculateSum that takes a variable number of integers as arguments and returns their sum.*/
#include<stdio.h>
#include<stdlib.h>

int calculateSum(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int main()
{
    int num1,num2;
    printf("Enter First number:");
    scanf("%d",&num1);
    printf("Enter Second number:");
    scanf("%d",&num2);

    int sum = calculateSum(num1,num2);
    printf("%d\n",sum);


    return 0;
}