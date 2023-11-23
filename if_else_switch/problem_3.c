/*Problem 3: Ticket Price Calculator
You are building a ticket booking system for a movie theater. The ticket price varies based on the age and time of the show. Write a program that takes the user's age and showtime as input and calculates the ticket price accordingly:
Age under 12 and showtime before 5 PM: $7
Age 12 and older and showtime before 5 PM: $10
All ages and showtime at or after 5 PM: $12 */

#include<stdio.h>
int main()
{
    int age,time;
    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Showtime 1PM , 3PM, 5PM, 8PM, 10PM\n");
    printf("Enter ShowTime: ");
    scanf("%d",&time);

    if (age<12 && time<5){
        printf("Ticket Price is $7\n");
    }
    else if(age>=12 && time<5){
        printf("Ticket Price is $10\n");
    }
    else if(time>5){
        printf("Ticket Price is $12\n");
    }
    else{
        printf("Enter valid age and time!\n");
    }
    
    return 0;
}