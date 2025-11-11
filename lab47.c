#include <stdio.h>
int main()
{
    int i, x, b, s;
    scanf("%d", &x);
    b = s = x;
    for (i = 2; i <= 100; i++)
    {
        scanf("%d", &x);
        if (x > b)
            b = x;
        if (x < s)
            s = x;
    }
    printf("big=%d\nsmall=%d", b, s);
    return 0;
}
