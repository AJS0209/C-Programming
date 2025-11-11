#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("Largest: %d\nSmallest: %d\n", x, y);
    }
    else if (y > x)
    {
        printf("Largest: %d\nSmallest: %d\n", y, x);
    }
    else
    {
        printf("Both numbers are equal: %d\n", x);
    }
    return 0;
}