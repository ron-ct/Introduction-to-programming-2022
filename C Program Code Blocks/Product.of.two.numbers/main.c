/*Program to calculate the product of two numbers*/
#include <stdio.h>
#include <stdlib.h>

int a,b,c;
int product(int x,int y);

int main()
{
    /*Input the first number*/
    printf("Input the first number between 1 and 100: ");
    scanf("%d",&a);

    /*Input the second number*/
    printf("Input the second number between 1 and 100: ");
    scanf("%d",&b);

    /*Calculate the product of the two numbers*/
    c = product(a,b);
    printf("%d times %d = %d\n", a,b,c);

    return 0;
}
/*Function returns the product of the two arguements*/
int product(int x,int y)
{
    return(x*y);
}
