#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    x=1;
    for(;x<100;)
    {
        printf("%d\n",x++);
    }
    return 0;
}
