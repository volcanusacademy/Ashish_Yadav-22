/*Write a C program that takes a number as input from the user and checks if it is a positive, negative, or zero. Use an if-else statement to determine and display the result.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    if(num==0){
        printf("Number is zero\n");
    }
    else if(num<0){
        printf("Number is Negative\n");
    }
    else{
        printf("Number is Positive\n"); 
    }
    return 0;
}