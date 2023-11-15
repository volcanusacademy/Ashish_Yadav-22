/*Problem 1: Guess the Number Game
You want to create a number-guessing game. Write a program that generates a random number and allows the user to guess the number. Use a do-while loop to keep the game running until the user guesses correctly.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("Welcome to number gussing game...\n");
    int random;
    int num;
    
    srand(time(NULL));
    random = rand() % 10;
    // printf("%d\n",random);

    do{
    printf("Please Guess the same number:");
    scanf("%d",&num);
    }
    while(random!=num);

    return 0;
}