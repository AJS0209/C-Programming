#include <stdio.h>
int main()
{
    int n, a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1}, i, c;
    scanf("%d", &n);
    for (i = 0; i < 9; i++)
    {
        if (n >= a[i])
        {
            c = n / a[i];
            n = n % a[i];
            printf("%d x %d\n", a[i], c);
        }
    }
    return 0;
}
