#include <stdio.h>

int a, b, sum;
int main()
{
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("The sum of %d and %d is:%d", a, b, sum);
    return 0;
}
