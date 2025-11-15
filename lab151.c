#include <stdio.h>
int prime(int n, int i)
{
    if (n < 2)
        return 0;
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return prime(n, i - 1);
}
int sumP(int n)
{
    if (n > 500)
        return 0;
    if (prime(n, n / 2))
        return n + sumP(n + 1);
    return sumP(n + 1);
}
int main()
{
    printf("%d", sumP(1));
    return 0;
}
