/*Program for calculating simple interest*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
     float principle,time,rate,SI;

/*Input of principle amount by user*/
printf("Enter the principle amount: ");
scanf("%f",&principle);

/*Input of time by user*/
printf("Enter time: ");
scanf("%f",&time);

/*Input of rate by user*/
printf("Enter the rate of interest: ");
scanf("%f",&rate);

/*Calculate the simple interest*/
SI = (principle*rate*time) / 100;

/*Print the resultant value of S.I*/
printf("Simple interest = %f",SI);

return 0;
}
