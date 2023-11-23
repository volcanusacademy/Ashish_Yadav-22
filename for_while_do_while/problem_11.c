/*Problem 11: Sum of Series with Alternating Signs
You are given a series with alternating signs, e.g., 1 - 2 + 3 - 4 + ... Write a program that calculates the sum of the first n terms of this series using a for loop.*/

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    
    return 0;
}