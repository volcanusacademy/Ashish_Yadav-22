/*Problem 9: Perfect Numbers in a Range
You need to find all perfect numbers within a given range. Write a program that takes two integers as input and uses a for loop to identify and display perfect numbers in that range.*/

#include<stdio.h>
int main()
{
    int num,start,end,sum;
    printf("Enter starting number:");
    scanf("%d",&start);
    printf("Enter Ending number:");
    scanf("%d",&end);

    for(num=start;num<=end;num++){
        sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum = sum+i;
            }
        }
        if(num==sum){
            printf("%d\n",num);
        }
    }
    
    return 0;
}