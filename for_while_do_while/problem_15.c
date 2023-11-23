/*Problem 15: Calculate Power of a Number
You are tasked with calculating the power of a number. Write a program that takes a base and an exponent as input and uses a for loop to compute the result.*/

// example  2^4 = 2*2*2*2 = 16

#include<stdio.h>
int main()
{
    int num,power,result=1;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Enter power:");
    scanf("%d",&power);

    for(int i=1;i<=power;i++){
        result = num*result;
    }
    printf("%d\n",result);

    return 0;
}