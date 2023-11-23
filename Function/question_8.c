/*Question 8: Function with arguments and no return value
Write a C function named printMultiplicationTable that takes an integer n as an argument and prints the multiplication table for n up to 10.*/
#include<stdio.h>
#include<stdlib.h>
int printMultiplicationTable(int n){
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
int main()
{   
    int n;
    printf("Enter table number:");
    scanf("%d",&n);
    printMultiplicationTable(n);
    return 0;
}