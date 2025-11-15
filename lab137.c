#include <stdio.h>
void countNums(int a[], int n, int *p, int *neg, int *z)
{
    if (n == 0)
        return;
    if (a[n - 1] > 0)
        (*p)++;
    else if (a[n - 1] < 0)
        (*neg)++;
    else
        (*z)++;
    countNums(a, n - 1, p, neg, z);
}
int main()
{
    int a[200], i, p = 0, neg = 0, z = 0;
    for (i = 0; i < 200; i++)
        scanf("%d", &a[i]);
    countNums(a, 200, &p, &neg, &z);
    printf("+ve=%d\n-ve=%d\nZero=%d", p, neg, z);
    return 0;
}
