/*C program that takes checks whether an integer number is even or odd*/
#include <stdio.h>
#include <stdlib.h>

int number;

int main()
{
    /*Input of number by user*/
    printf("Enter an integer number: ");
    scanf("%d",&number);

    /*checking whether the number is even or odd*/
    if (number % 2 == 0)
        printf("The number is even");
        else printf("The number is odd");
    return 0;
}
