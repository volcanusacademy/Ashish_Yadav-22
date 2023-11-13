/*Problem 1: Calculate Area and Perimeter of a Rectangle
You are building a program to calculate the area and perimeter of a rectangle. Write a C program with two functions, one to calculate the area and the other to calculate the perimeter. The user will input the length and width of the rectangle, and your program will use these functions to display the results.*/

// area of rectangle = width * length
// perimeter of rectangle = 2(l+w)
#include<stdio.h>

void calc_area(int w,int l){
    int a = w*l;
    printf("Area of Rectangle is:%d\n",a);
}

void calc_perimeter(int w,int l){
    int p = 2*(l+w);
    printf("Perimeter of Rectangle is:%d\n",p);
}

int main()
{
    int w,l;
    printf("Enter width:");
    scanf("%d",&w);
    printf("Enter height:");
    scanf("%d",&l);

    calc_area(w,l);
    calc_perimeter(w,l);
    return 0;
}