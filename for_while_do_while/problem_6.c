/*Problem 6: Armstrong Numbers in a Range
You need to find all Armstrong numbers within a given range. Write a program that takes two integers as input and uses a for loop to identify and display Armstrong numbers in that range*/

// example 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153
#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter starting range:");
    scanf("%d",&start);
    printf("Enter Ending range:");
    scanf("%d",&end);

    int i,num,rem,cube,sum,save;
    for(i=start;i<=end;i++){
        sum=0;
        num=i;
        save=num;
        for(num;num>0;num/=10){
            rem = num%10;
            cube = rem*rem*rem;
            sum = sum+cube;
        }
        if(sum==save){
            printf("%d\n",save);
        }
    }

    return 0;
}