/*C program that allows user to input three numbers and gets the largest using conditional operator*/
#include <stdio.h>
#include <stdlib.h>
int x,y,z,max,maxi;

int main()
{
    printf("Enter three integer numbers: \n");
    scanf("%d %d %d",&x,&y,&z);

    max = ((x > y) ? x : y);
    maxi = ((max > z) ? max : z);
    printf("%d is the largest number",max);
        return 0;
}
