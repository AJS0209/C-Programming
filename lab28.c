#include <stdio.h>

int main()
{
    float net_sales, gross_sales, discounts;
    printf("Enter Gross Sales:");
    scanf("%f",&gross_sales);
    if (gross_sales>20000)
    {
        discounts=0.15*gross_sales;
        net_sales=gross_sales - discounts;
        printf("%.2f\n",net_sales);
    }
    else if (gross_sales>10000 && gross_sales<20000)
    {
        discounts=0.1*gross_sales;
        net_sales=gross_sales - discounts;
        printf("%.2f\n",net_sales);
    }
    else
    {
        discounts=0.05*gross_sales;
        net_sales=gross_sales - discounts;
        printf("%.2f\n",net_sales);
    }

    return 0;
}
