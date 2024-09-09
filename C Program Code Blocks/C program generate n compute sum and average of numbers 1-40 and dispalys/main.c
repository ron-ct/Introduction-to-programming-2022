/*C Program that generates and computes all numbers between 1 and 40 and displays them using a for loop*/

int x,average,sum = 0;

int main()
{
    for(x=1;x<=40;x++)
    {
        sum = sum + x;
        printf("Total sum = %d\n",sum);
    }
    {
    average = sum / 40;
    printf("Average = %d\n",average);
    }
    return 0;
}
