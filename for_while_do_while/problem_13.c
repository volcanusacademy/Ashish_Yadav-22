/*Problem 13: Display Prime Numbers in a Range
You want to find and display all prime numbers within a given range. Write a program that takes two integers as input and uses a for loop to identify and print prime numbers in that range.*/

#include<stdio.h>
int main()
{
    int start,end,num,count;
    printf("Enter starting range:");
    scanf("%d",&start);
    printf("Enter ending range:");
    scanf("%d",&end);

    for(num=start;num<=end;num++){
        count=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                count=count+1;
            }
        }
        if(count==1){
            printf("%d,",num);
        }
    }

    
    return 0;
}