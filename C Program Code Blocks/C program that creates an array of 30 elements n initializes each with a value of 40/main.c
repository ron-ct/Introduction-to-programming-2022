#include <stdio.h>
#include <stdlib.h>

int Data[30];
int x;

int main()
{
    for(x=0;x<30;x++)
    {
        Data[x] = 40;
        printf("%d\n",Data[x]);
    }
    return 0;
}
