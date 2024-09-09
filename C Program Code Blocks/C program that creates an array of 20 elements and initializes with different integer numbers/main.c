/*C program that creates an array of 20 elements and initializes with different integer numbers*/

int Data[20];
int x;

int main()
{
    for(x=0;x<20;x++)
    {
    printf("Enter an integer number: \n");
    scanf("%d",&Data[x]);
    }
    for(x=0;x<20;x++)
        {
            printf("%d\n",Data[x]);
        }
        return 0;

}
