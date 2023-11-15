/*Problem 4: Check if a Number is Palindrome Using a Function
Story: You want to check if a given number is a palindrome. Write a C program that defines a function to check if a number is a palindrome. The user will input the number, and your program will use this function to display whether it's a palindrome or not.*/

// example 12121 = 12121 this is palindrome
// example 12122 = 22121 this is not palindrome

#include<stdio.h>

void palindrome(int n){
    int r,sum=0;
    int orignal_n = n;
    while(n!=0){
        r=n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
    if(orignal_n==sum){
        printf("This is palindrome number\n");
    }
    else{
        printf("This is not palindrome number\n");
    }
}
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}