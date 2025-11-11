#include <stdio.h>

int main()
{
    int i, j = 5;
    for (i = 1; i <= 3; i++, j--)
    {
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
    }
    return 0;
}