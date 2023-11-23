/*Problem 4: Day of the Week
You want to write a program that tells the user which day of the week corresponds to a given number (1 for Sunday, 2 for Monday, and so on). The user enters a number, and your program should display the corresponding day.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter 1 to 7 any one number:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thrusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Enter valid no.");
        break;
    }
    
    return 0;
}