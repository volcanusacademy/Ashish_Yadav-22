/*Problem 4: Reverse a String
You need to reverse a given string. Write a program that takes a string as input and uses a for loop to reverse the characters in the string.*/

#include<stdio.h>
int main()
{
    char name[20];
    int size;
    printf("Enter name:");
    scanf("%s",&name);
    
    printf("enter the length of your name:");
    scanf("%d",&size);

    for(int i=size;i>=0;i--){
        printf("%c",name[i]);
    }
    printf("\n");
}