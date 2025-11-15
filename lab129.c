#include <stdio.h>
int oddsum(int n)
{
    if (n == 0)
        return 0;
    return (2 * n - 1) + oddsum(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", oddsum(n));
    return 0;
}
