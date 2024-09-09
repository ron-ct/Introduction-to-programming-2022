/*C Program to calculate total,average and percentage*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maths,eng,kisw,science,ssre;
    float total,average,percentage;

    /*Input of marks of subject a by user*/
    printf("Enter marks for subject Maths: ");
    scanf("%f",&maths);

    /*Input of marks of subject b by user*/
    printf("Enter marks for subject English: ");
    scanf("%f",&eng);

    /*Input of marks of subject c by user*/
    printf("Enter marks for subject Kiswahili: ");
    scanf("%f",&kisw);

    /*Input of marks of subject d by user*/
    printf("Enter marks for subject Science: ");
    scanf("%f",&science);

    /*Input of marks of subject e by user*/
    printf("Enter the marks for subject SSRE: ");
    scanf("%f",&ssre);

    /*Calculation of total*/
    total = maths+eng+kisw+science+ssre;
    printf("Total marks = %.2f\n",total);

    /*Calculation of average*/
    average = total / 5.0;
    printf("average = %.2f\n",average);

    /*Calculation of percentage*/
    percentage = (total / 500.0) * 100;
    printf("Percentage = %.2f",percentage);

    return 0;
}
