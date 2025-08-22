#include <stdio.h>

int main()
{
    float net_salary, gross_salary, allowances, deductions;
    printf("Enter Gross Salary:");
    scanf("%f",&gross_salary);
    if (gross_salary>10000)
    {
        allowances=0.1*gross_salary;
        deductions=0.03*gross_salary;
        net_salary=gross_salary + allowances - deductions;
        printf("%.2f",net_salary);
    }
    else if (gross_salary>5000 && gross_salary<10000)
    {
        allowances=0.07*gross_salary;
        deductions=0.02*gross_salary;
        net_salary=gross_salary + allowances - deductions;
        printf("%.2f",net_salary);
    }
    return 0;
}
