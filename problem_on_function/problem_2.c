/*Problem 2: Calculate the Greatest Common Divisor (GCD)
Story: You want to find the greatest common divisor (GCD) of two numbers. Write a C program that defines a function to calculate the GCD of two integers. The user will input the two numbers, and your program will call this function to display the GCD*/

#include<stdio.h>

int a,b,min;
void gcd(int a,int b){
    if(a<b){
        min = a;
    }
    else{
        min = b;
    }
    while(min>0){
        if(a%min==0 && b%min==0){
            break;
        }
        min--;
    }
    printf("Greatest of Common divisor is:%d\n",min);
}

int main()
{
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);

    gcd(a,b);
    return 0;
}