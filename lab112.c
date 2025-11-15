#include <stdio.h>
void find(int a[], int n, int *max, int *min)
{
    int i;
    *max = *min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }
}
int main()
{
    int a[10], i, n, max, min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    find(a, n, &max, &min);
    printf("max=%d min=%d", max, min);
    return 0;
}
