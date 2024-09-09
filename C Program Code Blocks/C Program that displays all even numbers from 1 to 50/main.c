/*C program that displays all even numbers between 1 to 50*/
#include <stdio.h>
#include <stdlib.h>

int x;
int main()
{
    for (x = 1;x <= 50;x++)
    {
        if (x % 2 == 0)
        printf("%d\n",x);
    }
    return 0;
}
