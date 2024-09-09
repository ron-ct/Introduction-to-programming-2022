/*C Program that allows user to input three integer numbers and displays the smallest*/
#include <stdio.h>
#include <stdlib.h>

int x,y,z;

int main()
{
    printf("Enter three integer numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    if ((x < y) && (y < z))
        printf("The smallest number is %d\n",x);
    else if ((y < x) && (y < z))
        printf("The smallest number is %d\n",y);
    else printf("The smallest number is %d\n",z);

        return 0;
}
