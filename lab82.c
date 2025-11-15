#include <stdio.h>
int main()
{
    int a[10], b[10], n, i;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (i < n)
            b[i] = 0;
        else
            b[i] = a[i - n];
    }
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    return 0;
}
