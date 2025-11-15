#include <stdio.h>
int main()
{
    int a[10], i, n, f = 0;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("found");
    else
        printf("not found");
    return 0;
}
