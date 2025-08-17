#include <stdio.h>
int main()
{
float gross_salary,discount,net_salary;
printf("Enter the gross salary:");
scanf("%f",&gross_salary);
discount=0.1*gross_salary;
net_salary=gross_salary-discount;
printf("The net salary is: %.2f\n",net_salary);
return 0;
}