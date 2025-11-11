#include <stdio.h>
int main()
{
    int i, x, s = 0;
    float m;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &x);
        s = s + x;
    }
    m = s / 10.0;
    printf("sum=%d\nmean=%.2f", s, m);
    return 0;
}
