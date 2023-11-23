// Problem 2: Student Grading
// You are a teacher, and you want to automate the grading process. Write a program that takes a student's score as input and assigns a grade based on the following criteria
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include<stdio.h>
void main(){

    // Take percentage input from user....
    int per;
    printf("Enter your Percentage: ");
    scanf("%d",&per);

    // Condition Apply ....
    if(per>=60 && per<=69){
        printf("Your Grade is D\n");
    }
    else if(per>=70 && per<=79){
        printf("Your Grade is C\n");
    }
    else if(per>=80 && per<=89){
        printf("Your Grade is B\n");
    }
    else if(per>=90 && per<=100){
        printf("Your Grade is A\n");
    }
    else if(per<60){
        printf("F\n");
    }
    else{
        printf("Invalid Percentage please enter correct percentage!\n");
    }

}

