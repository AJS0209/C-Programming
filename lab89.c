#include <stdio.h>
int main()
{
    int a[10], i, j, n;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            for (j = i; j < 4; j++)
                a[j] = a[j + 1];
            break;
        }
    }
    for (i = 0; i < 4; i++)
        printf("%d ", a[i]);
    return 0;
}
