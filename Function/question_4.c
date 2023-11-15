/*Question 4: Function with no arguments and a return value
Write a C function named generateRandomNumber that generates and returns a random integer between 1 and 100.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(){
    int number;
    srand(time(NULL));
    number = rand() % 100;
    return number;
}

int main()
{   
    printf("%d\n",generateRandomNumber());
    return 0;
}