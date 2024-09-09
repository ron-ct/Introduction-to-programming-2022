/*C program that accepts integer numbers from user and checks whether evenly divisible by seven*/
#include <stdio.h>
#include <stdlib.h>

int p;
int main()
{
    printf("Enter an integer number: ");
    scanf("%d",&p);
    if ((p % 7 == 0) && (p % 2 == 0))
        printf("%d is evenly divisible by 7",p);
        else printf("%d is not evenly divisible by 7",p);

    return 0;
}
