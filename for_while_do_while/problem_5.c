/*Problem 5: Factorial Series Sum
You want to find the sum of the first n terms of the factorial series. Write a program that takes an integer n as input and uses a for loop to calculate the sum of the series.*/

#include<stdio.h>
int main()
{
    int n;
    int fac=1;
    printf("Enter factorial number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fac = fac*i;
        }
        printf("%d\n",fac);
            
    return 0;
}