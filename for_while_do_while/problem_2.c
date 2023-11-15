/*Problem 2: Sum of Even Numbers
You are tasked with finding the sum of all even numbers between two given numbers. Write a program that takes two integers as input and uses a for loop to calculate the sum.*/

#include<stdio.h>
int main()
{   
    int start,end;
    int sum=0;
    printf("Enter starting range: \n");
    scanf("%d",&start);
    printf("Enter Ending range: \n");
    scanf("%d",&end);

    for(start;start<=end;start++){
        if(start%2==0){
            sum = sum+start;
        }
    }
    printf("Sum of all Even Number is:%d\n",sum);
    
    return 0;
}