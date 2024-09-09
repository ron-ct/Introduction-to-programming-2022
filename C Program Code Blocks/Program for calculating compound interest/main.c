/*C Program for calculating compound interest*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float principle,time,rate,CI;

    /*Input of principle from user*/
    printf("Enter the principle amount: ");
    scanf("%f",&principle);

    /*Input of time by user*/
    printf("Enter time: ");
    scanf("%f",&time);

    /*Input of rate by user*/
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);

    /*Calculation of compound interest*/
    CI = principle*(pow((1 + rate / 100),time));

    /*Print the resultant CI*/
    printf("Compound Interest = %f",CI);
    return 0;
}
