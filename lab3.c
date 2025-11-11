#include <stdio.h>

int a, b, difference;
int main()
{
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);

    difference = a - b;
    printf("The difference of %d and %d is:%d", a, b, difference);
    return 0;
}
