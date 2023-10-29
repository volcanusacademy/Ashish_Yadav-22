#include<stdio.h>

// adding numbers
void main(){
    int num1,num2;
    int add;

    printf("Enter your adding number: ");
    scanf("%d %d",&num1,&num2);
    add = num1+num2;

    printf("%d",add);

}
// subtract numbers
void main(){
    int num1,num2;
    int sub;

    printf("Enter your subtract number: ");
    scanf("%d %d",&num1,&num2);
    sub = num1-num2;

    printf("%d",sub);

}
// multiply numbers
void main(){
    int num1,num2;
    int mul;

    printf("Enter your multiply number: ");
    scanf("%d %d",&num1,&num2);
    mul = num1*num2;

    printf("%d",mul);

}
// divide numbers
void main(){
    int num1,num2;
    int div;

    printf("Enter your number: ");
    scanf("%d %d",&num1,&num2);
    div = num1/num2;

    printf("%d",div);

}