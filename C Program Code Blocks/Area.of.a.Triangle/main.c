/*C Program to calculate the area of an equilateral triangle*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int side;
    float area;
    /*Input of length of one side of triangle by user*/
    printf("Enter the length of one side of equilateral triangle: ");
    scanf("%d", &side);

    /*Calculation of area*/
    area = (1.73 * side * side) / 4;
    printf("The area = %.2f",area);

    return 0;
}
