/*Problem 7: Calculate GCD and LCM
 You want to find the greatest common divisor (GCD) and the least common multiple (LCM) of two numbers. Write a program that takes two integers as input and uses a while loop to calculate both GCD and LCM.*/

 #include<stdio.h>
 int main()
 {
    int num1,num2,min,max;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter Second number:");
    scanf("%d",&num2);
// for gcd----------------------------------
    if(num1<num2){
        min = num1;
    }
    else{
        min = num2;
    }
    while(min>0){
        if(num1%min==0 && num2%min==0){
            break;
        }
        min--;
    }
    printf("GCD of %d and %d is:%d\n",num1,num2,min);
// for lcm----------------------------------
    if(num1>num2){
        max = num1;
    }
    else{
        max = num2;
    }
    while(max>0){
        if(max%num1==0 && max%num2==0){
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is:%d\n",num1,num2,max);
    return 0;
 }