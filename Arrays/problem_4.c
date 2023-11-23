/*Problem 4: Sort an Array of Numbers
Story: You are given an unsorted list of numbers, and you need to sort them in ascending order. Write a C program that reads a list of integers into an array and sorts the array using a sorting algorithm (e.g., bubble sort or selection sort). Display the sorted list.*/

#include<stdio.h>
int main()
{
    int list[10]={10,9,8,7,6,5,4,3,2,1};
    int i,j,store;

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(list[i]>list[j]){
                store=list[i];
                list[i]=list[j];
                list[j]=store;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d,",list[i]);
    }
    printf("\n");
    return 0;
}