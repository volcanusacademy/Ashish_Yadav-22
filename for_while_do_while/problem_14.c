/*Problem 14: Hailstone Sequence
You are interested in the Hailstone sequence. Write a program that takes a positive integer as input and uses a while loop to generate and display the Hailstone sequence for that number.*/

#include<stdio.h>
int main()
{   
    int num;
    printf("Enter Number:");
    scanf("%d",&num);

    while(num!=1){

    if(num%2==0){
        num=num/2;
        printf("%d\n",num);
    }
    else{
        num=(3*num)+1;
        printf("%d\n",num);
    }

    }
    return 0;
}