/*C Program for calculating total,average and percentage in 7 subjects*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float maths,english,kiswahili,chemistry,physics,geography,business;
    float total,average,percentage;

    /*Input of marks in seven subjects by user*/
    printf("Enter marks for subject Mathematics: \n");
    printf("Enter marks for subject English: \n");
    printf("Enter marks for subject Kiswahili: \n");
    printf("Enter marks for subject Chemistry: \n");
    printf("Enter marks for subject Physics: \n");
    printf("Enter marks for subject geography: \n");
    printf("Enter marks for subject business: \n");

    scanf("%f%f%f%f%f%f%f",&maths,&english,&kiswahili,&chemistry,&physics,&geography,&business);

    /*Calculation of totals,average and percentage*/
    total = maths+english+kiswahili+chemistry+physics+geography+business;
    printf("Total marks = %.2f",total);

    average = total / 7.00;
    printf("Average = %.2f",average);

    percentage = (total / 700)* 100;
    printf("Percentage = %.2f",percentage);

    return 0;

}
