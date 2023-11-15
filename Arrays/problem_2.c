/*Problem 2: Calculate Average and Grade for Students
You are a teacher, and you need to calculate the average score for a class of students and assign grades based on their scores. Write a C program that reads the scores of students into an array and calculates the average score. Then, assign grades (A, B, C, D, or F) based on their scores and display the results.*/

#include<stdio.h>
int main()
{
    float student[10];
    for(int i=1;i<11;i++){
        printf("Enter student score: %d\n",i);
        scanf("%f",&student[i]);
    }
    int i=0;
    float avg=0;
    while(i<10){
        avg=avg+student[i]/10;
        i++;
    }
    printf("Average is %.2f\n",avg);

    if(avg<50){
        printf("Grade is F:\n");
    }
    else if(avg>=50 && avg<60){
        printf("Grade is D:\n");
    }
    else if(avg>=60 && avg<70){
        printf("Grade is C:\n");
    }
    else if(avg>=70 && avg<80){
        printf("Grade is B:\n");
    }
    else if(avg>=80 && avg<=100){
        printf("Grade is A:\n");
    }
    return 0;
}