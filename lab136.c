#include <stdio.h>
int largest(int a[], int n)
{
    if (n == 1)
        return a[0];
    int max = largest(a, n - 1);
    return a[n - 1] > max ? a[n - 1] : max;
}
int smallest(int a[], int n)
{
    if (n == 1)
        return a[0];
    int min = smallest(a, n - 1);
    return a[n - 1] < min ? a[n - 1] : min;
}
int main()
{
    int a[100], i;
    for (i = 0; i < 100; i++)
        scanf("%d", &a[i]);
    printf("Largest=%d\nSmallest=%d", largest(a, 100), smallest(a, 100));
    return 0;
}
