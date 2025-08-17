#include <stdio.h>
int main()
{
    float gross_salary,net_salary,allowance,deduction;
    printf("Enter the gross salary:");
    scanf("%f",&gross_salary);
    allowance =0.1*gross_salary;
    deduction = 0.03*gross_salary;
    net_salary = gross_salary + allowance - deduction;
    printf("The net salary is: %.2f\n", net_salary);
    return 0;
}