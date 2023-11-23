/*Problem 1: Temperature Conversion
Write a programm that receive temperature data in both Celsius and Fahrenheit. You need to write a program that converts the temperature from one unit to another based on user input.
*/
#include<stdio.h>
int main()
{
    float c,f;
    int choose;
    printf("Choose wheather you want to convert celsius to fahrenheit or fahrenheit to celsius\n");
    printf("Press 1 for celsius to fahrenheit\n");
    printf("Press 2 for fahrenheit to celsius\n");
    scanf("%d",&choose);

    switch (choose)
    {
    case 1:
        printf("Enter temperature in celsius: ");
        scanf("%f",&c);
        f = (c*1.8)+32;
        printf("%.2f\n",f);
        break;
    case 2:
        printf("Enter temperature in fahrenheit: ");
        scanf("%f",&f);
        c = (f-32)/1.8;
        printf("%.2f\n",c);
        break;
    }
    
    return 0;
}