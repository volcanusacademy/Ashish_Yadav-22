/*Problem 12: Find the Smallest and Largest Number
You need to find the smallest and largest numbers among a set of input numbers. Write a program that takes a sequence of numbers as input and uses a while loop to determine the smallest and largest numbers.*/


#include<stdio.h>
int main()
{   
    int a[100],size,i,max,min;
    printf("Enter size of array:");
    scanf("%d",&size);

    printf("Enter value of array:");
    i=0;
    while(i<size){
        scanf("%d",&a[i]);
        i++;
    }

    max = a[0];
    i=0;
    while(i<size){
        if(a[i]>max){
            max=a[i];
        }
        i++;
    }
    printf("maximun value of array is:%d\n",max);

    min = a[0];
    i=0;
    while(i<size){
        if(a[i]<min){
            min=a[i];
        }
        i++;
    }
    printf("minimum value of array is:%d\n",min);

    return 0;
}