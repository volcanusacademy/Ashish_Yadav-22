/*Question 3: Function with arguments and a return value
Write a C function named calculateAverage that takes two integer arguments, num1 and num2, and returns their average as a floating-point number.*/

#include<stdio.h>
#include<stdlib.h>

float calculateAverage(float num1,float num2){
    return (num1+num2)/2;
}

int main()
{   
    float avg;
    avg = calculateAverage(5,6);
    printf("%.2f\n",avg);
    return 0;
}