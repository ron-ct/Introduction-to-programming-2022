/*C program that takes input marks of 3 subjects calculates average and determines whether pass or fail*/

#include <stdio.h>
#include <stdlib.h>

int maths,eng,kisw,average;

int main()
{
    /*Input of marks of 3 subjects by user*/
    printf("Enter marks of mathematics, english and kiswahili: \n");
    scanf("%d %d %d",&maths,&eng,&kisw);

    /*Calculation of average*/
    average = (maths + eng +kisw) / 3;
    if (average >= 50)
        printf("PASS");
    else printf("FAIL");
    return 0;

}
