/*C program that displays all odd numbers between 50 and 200*/
#include <stdio.h>
#include <stdlib.h>

int x;
int main()
{
    for(x=50;x<200;x++)
    {
        if (x % 2 != 0)
        {
            printf("%d\n",x);
        }
    }
    return 0;
}
