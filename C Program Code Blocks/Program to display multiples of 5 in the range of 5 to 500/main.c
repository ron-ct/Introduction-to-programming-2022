/*C Program to display the multiples of 5 in the range of 5 to 500*/
#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    for (x = 5;x <= 500;x = x + 5)
    {
        printf("%d\n",x);
    }
    return 0;
}
