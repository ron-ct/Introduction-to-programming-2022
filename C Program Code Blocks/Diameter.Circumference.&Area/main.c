/*C Program to find diameter,circumference and area using functions*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Function Declaration*/
double getdiameter(double radius);
double getcircumference(double radius);
double getarea(double radius);

int main()
{
    float radius,diameter,circumference,area;

    /*Input radius from user*/
    printf("Enter radius of the circle: ");
    scanf("%f",&radius);

    diameter = getdiameter(radius);
    circumference = getcircumference(radius);
    area = getarea(radius);

    printf("Diameter of the circle = %.2f units\n",diameter);
    printf("Circumference of the circle = %.2f units\n",circumference);
    printf("Area of the circle = %.2f units\n",area);

    return 0;
}
/*Calculate the diameter of the circle whose radius is given*/
double getdiameter(double radius)
{
    return(2*radius);
}

/*Calculate the circumference of the circle whose radius is given*/
double getcircumference(double radius)
{
    return(2*M_PI*radius);
}
/*Calculate the area of the circle*/
double getarea(double radius)
{
    return(M_PI*radius*radius);
}
