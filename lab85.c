#include <stdio.h>
int main()
{
    int a[10], i, n;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    a[5] = n;
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}
