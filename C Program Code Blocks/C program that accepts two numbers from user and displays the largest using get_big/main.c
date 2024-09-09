/*C program that accepts two numbers from user and displays the largest using get_big*/
#include <stdio.h>
#include <stdlib.h>

int x,y,z;
int get_big(int,int);

int main()
{
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);

    z = get_big(x,y);
    printf("%d is the largest number",z);

    return 0;

}
    int get_big(int a,int b)
    {
        if (b < a);
            return a;
        else
            return b;
    }
