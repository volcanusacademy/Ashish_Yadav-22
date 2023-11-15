/*Problem 10: Print Pascal's Triangle
You want to print Pascal's Triangle for a given number of rows. Write a program that takes the number of rows as input and uses nested for loops to display the triangle.*/

#include<stdio.h>
int main()
{   
    int i,j,k,height;
    printf("Enter Height of Row:");
    scanf("%d",&height);

    for(i=0;i<=height;i++){

        for(j=height;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}