/*Question 2: Function with arguments and no return value
Write a C function named printSum that takes two integer arguments, a and b, and prints their sum.*/

#include<stdio.h>
#include<stdlib.h>

void printSum(int a,int b){
    printf("%d\n",a+b);
}

int main()
{
    printSum(1,2);
    return 0;
}