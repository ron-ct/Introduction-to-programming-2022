/*C program to calculate diameter,circumference and area of circle*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float radius,diameter,circumference,area;

    /*Input of radius of circle by user*/
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    /*Calculate diameter,circumference and area of a circle*/
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;

    /*Printing of all results*/
    printf("Diameter of circle = %.2f units \n",diameter);
    printf("Circumference of circle = %.2f units \n",circumference);
    printf("Area of circle = %.2f units\n",area);

    return 0;

}
