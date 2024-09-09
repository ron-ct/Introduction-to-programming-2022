/*C program that takes input of 3 different integer numbers and outputs the largest*/
#include <stdio.h>
#include <stdlib.h>

int x,y,z;
int main()
{
    /*Input of values of 3 different numbers by user*/
    printf("Enter the values of three numbers: \n");
    scanf("%d %d %d",&x,&y,&z);

if (x>y && x>z)
    printf("%d is the largest number",x);
else if (y>x && y>z)
    printf("%d is the largest number",y);
else printf("%d is the largest number",z);

    return 0;
}
