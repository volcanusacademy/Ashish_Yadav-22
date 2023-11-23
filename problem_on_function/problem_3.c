/*Problem 3: Calculate Factorial Using a Recursive Function
Story: You need to find the factorial of a number using a recursive function. Write a C program with a recursive function to calculate the factorial of a given integer. The user will input the number, and your program will use the recursive function to display the result.*/

#include<stdio.h>

int recur(int n){
    if(n>0){
        return n*recur(n-1);
    }
    else{
        return 1;
    }
    
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("%d\n",recur(n));
    return 0;
}