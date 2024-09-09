/*C program that creates 20 elements and initializes each element in its own subscript and displays the values*/
#include <stdio.h>
#include <stdlib.h>

int Data[20];
int x;

int main()
{
    for(x = 0;x<20;x++)
    {
        Data[x] = x;
        printf("%d\n",Data[x]);
    }
    return 0;
}
