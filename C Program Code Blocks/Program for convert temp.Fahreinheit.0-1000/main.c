#include <stdio.h>
#include <stdlib.h>
#define LOWER 0.0 /*Symbolic constants definition*/
#define UPPER 1000.0
#define INTERVAL 10.0

int main()
{
    /*Variable definition*/
    float fah,cel;
    fah = LOWER;
    printf("FAHREINHEIT\tCELSIUS\n");
    printf("______________________\n");

    while(fah <= UPPER)
        {
        cel = 5.0 * (fah - 32.0) / 9.0;
        printf("%.2f\t |  %.3f\n",fah,cel);
        fah = fah + INTERVAL;
    }
    return 0;
}
