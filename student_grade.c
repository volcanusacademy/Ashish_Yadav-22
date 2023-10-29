#include<stdio.h>
void main(){
    int pr;
        printf("Enter Your Percentage: ");
    //user input percentage
        scanf("%d", &pr);

        if(pr>=40 && pr<=50){
            printf("Your Grade Is 'C'");
        }
        else if(pr>=51 && pr<=60){
            printf("Your Grade Is 'B'");
        }
        else if(pr>=61 && pr<=100){
            printf("Your Grade Is 'A'");
        }
        else if(pr<=39){
            printf("Failed");
        }
        else{
            printf("please get a valid percentage first");
        }
}