#include <stdio.h>
int evensum(int n)
{
    if (n == 0)
        return 0;
    return 2 * n + evensum(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", evensum(n));
    return 0;
}
