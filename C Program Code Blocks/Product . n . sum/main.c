/*Program to calculate the product and sum of two numbers*/
#include <stdio.h>
#include <stdlib.h>

int a,b,c,d;
int product(int x,int y);
int sum(int x,int y);

int main()
{
    /*Input of the first number*/
    printf("Input a number between 1 and 100: ");
    scanf("%d",&a);

    /*Input of the second number*/
    printf("Input another number between 1 and 100: ");
    scanf("%d",&b);

    /*Calculation of product of the two numbers*/
    c = product(a,b);
    printf("%d times %d = %d\n",a,b,c);
    /*Calculation of the sum of the two numbers*/
    d = sum(a,b);
    printf("%d plus %d = %d\n", a,b,d);

    return 0;
}
/*Function returns the product of the two arguements*/
int product(int x,int y)

{
    return(x*y);
}

    /*Function returns the sum of the two numbers*/
    int sum(int x,int y)
{
        return(x+y);
}


