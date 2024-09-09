/*C program to demonstrate unary operator prefix and postfix modes*/
#include <stdio.h>
#include <stdlib.h>
int a, b;

int main()
{
    /*Set a and b both equal to 5*/

    a = b = 5;

    /*print them, decrementing each time.*/
    /*Use prefix mode for b, postfix mode for a */

    printf("\n%d %d",a--, --b);
    printf("\n%d %d",a--, --b);
    printf("\n%d %d",a--, --b);
    printf("\n%d %d",a--, --b);
    printf("\n%d %d",a--, --b);

    return 0;
}
