#include <stdio.h>
int main()
{
    int a[10], n, i;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 5; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = n;
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}
