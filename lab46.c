#include <stdio.h>
int main()
{
    int i, n, x, s = 0;
    float m;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        s = s + x;
    }
    m = s / (float)n;
    printf("sum=%d\nmean=%.2f", s, m);
    return 0;
}
