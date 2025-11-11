#include <stdio.h>

int a, b, product;
int main()
{
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);

    product = a * b;
    printf("The product of %d and %d is:%d", a, b, product);
    return 0;
}
