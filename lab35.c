#include <stdio.h>

int main()
{
    int n = 10, i = 0;
    for (i = 0; i <= 2 * n; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}