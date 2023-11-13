/*Problem 5: Simple Calculator with Functions
Story: You are building a simple calculator program. Write a C program that includes functions for addition, subtraction, multiplication, and division. The user will input two numbers and the operation they want to perform, and your program will call the appropriate function to display the result.*/

#include<stdio.h>

int num1,num2;

int add(int num1,int num2){
    int sum=num1+num2;
    printf("Addition of %d and %d is %d\n",num1,num2,sum);
}
int sub(int num1,int num2){
    int sum=num1-num2;
    printf("Substraction of %d and %d is %d\n",num1,num2,sum);
}
int mul(int num1,int num2){
    int sum=num1*num2;
    printf("Multiplication of %d and %d is %d\n",num1,num2,sum);
}
int div(int num1,int num2){
    int sum=num1/num2;
    printf("Division of %d and %d is %d\n",num1,num2,sum);
}
int main()
{
    int choose;
    printf("press 1 for addition:\n");
    printf("press 2 for subtraction:\n");
    printf("press 3 for multiplication:\n");
    printf("press 4 for division:\n");
    scanf("%d",&choose);

    switch (choose)
    {
    case 1:
        printf("Enter First number:");
        scanf("%d",&num1);
        printf("Enter Second number:");
        scanf("%d",&num2);
        add(num1,num2);
        break;
    case 2:
        printf("Enter First number:");
        scanf("%d",&num1);
        printf("Enter Second number:");
        scanf("%d",&num2);
        sub(num1,num2);
        break;
    case 3:
        printf("Enter First number:");
        scanf("%d",&num1);
        printf("Enter Second number:");
        scanf("%d",&num2);
        mul(num1,num2);
        break;
    case 4:
        printf("Enter First number:");
        scanf("%d",&num1);
        printf("Enter Second number:");
        scanf("%d",&num2);
        div(num1,num2);
        break;
    }
    return 0;
}