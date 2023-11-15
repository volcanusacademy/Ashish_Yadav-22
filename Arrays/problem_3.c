/*Problem 3: Search for an Element
You have a list of items, and you want to find whether a specific item is present in the list. Write a C program that reads a list of elements into an array and allows the user to search for a particular element. Display whether the element is found or not.*/

#include<stdio.h>
int main()
{
    int list[10]={1,2,3,4,5,6,7,8,9,10};
    int num;
    printf("Search Element:");
    scanf("%d",&num);
    
    int count=0;
    for(int i=0;i<10;i++){
        if(num==list[i]){
            count++;
        }
    }
    if(count==1){
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }
    
    return 0;
}