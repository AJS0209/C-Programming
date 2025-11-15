#include <stdio.h>
int main()
{
    int a[3][3], *p, i, j, large, small;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    p = &a[0][0];
    large = small = *p;
    for (i = 0; i < 9; i++, p++)
    {
        if (*p > large)
            large = *p;
        if (*p < small)
            small = *p;
    }
    printf("large=%d small=%d", large, small);
    return 0;
}
