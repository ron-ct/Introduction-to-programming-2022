#include <stdio.h>
#include <stdlib.h>

float compute_tax(float gross_salary);
int main()
{
    float gross_salary,net_pay,tax;
    printf("Enter gross salary: ");
    scanf("%f",&gross_salary);

    tax = compute_tax(gross_salary);
    net_pay = gross_salary - tax;

    printf("tax = %.2f\n",tax);
    printf("Net pay = %.2f\n",net_pay);
    return 0;
}
float compute_tax(float gross_salary)
{
    if (gross_salary >= 60000)
        return (gross_salary * 0.4);
        else if (gross_salary < 60000 && gross_salary >= 45000)
            return (gross_salary * 0.35);
        else if (gross_salary < 45000 && gross_salary >= 30000)
            return (gross_salary * 0.2);
        else if (gross_salary < 30000)
            return (gross_salary * 0.15);


}
