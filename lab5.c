#include <stdio.h>

int a, b, quotient;
int main()
{
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);

    quotient = (float)a / (float)b;
    printf("The quotient of %d and %d is:%d", a, b, quotient);
    return 0;
}
