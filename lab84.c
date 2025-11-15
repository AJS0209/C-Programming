#include <stdio.h>
int main()
{
    int a[10], i, p, n;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &n, &p);
    for (i = 5; i >= p; i--)
        a[i] = a[i - 1];
    a[p - 1] = n;
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}
