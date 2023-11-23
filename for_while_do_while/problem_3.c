/*Problem 3: Pattern Printing - Right Triangle
You want to print a right-angled triangle pattern of asterisks. Write a program that takes the height of the triangle as input and uses nested for loops to display the pattern.*/

#include<stdio.h>
int main()
{
    int height;
    printf("Enter height of traingle: ");
    scanf("%d",&height);

    for(int i=0;i<=height;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}