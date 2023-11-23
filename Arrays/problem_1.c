/*Problem 1: Find the Maximum and Minimum Numbers
You are given a list of numbers, and you need to find the maximum and minimum numbers in the list. Write a C program that reads a list of integers into an array and then uses loops to find and display the maximum and minimum values in the array.*/

#include<stdio.h>
int main()
{
    int list[5]={5,6,9,12,35};
    int i,max,min;

    max=list[0];
    for(i=0;i<5;i++){
        if(list[i]>max){
            max=list[i];
        }
    }
    printf("Maximum number is your array is:%d\n",max);

    min=list[0];
    for(i=0;i<5;i++){
        if(list[i]<min){
            min=list[i];
        }
    }
    printf("Minimum number is your array is:%d\n",min);

    return 0;
}
