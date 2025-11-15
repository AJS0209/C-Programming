#include <stdio.h>
int div3sum(int n)
{
    if (n == 0)
        return 0;
    if (n % 3 == 0)
        return n + div3sum(n - 1);
    return div3sum(n - 1);
}
int main()
{
    printf("%d", div3sum(100));
    return 0;
}
