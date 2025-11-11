#include <stdio.h>

int main()
{
    int n = 10, i = 1;
    for (i = 1; i <= 2 * n; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}