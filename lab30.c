#include <stdio.h>

int main()
{
    float g, dis, n;
    printf("Enter gross sales: ");
    scanf("%f", &g);

    if (g > 20000)
        dis = g * 0.15;
    else if (g > 10000)
        dis = g * 0.10;
    else
        dis = g * 0.05;

    n = g - dis;
    printf("Net Sales = %.2f", n);
    return 0;
}