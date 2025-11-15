#include <stdio.h>
void odd(int n)
{
    if (n == 0)
        return;
    odd(n - 1);
    printf("%d ", 2 * n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    odd(n);
    return 0;
}
