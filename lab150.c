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
void all(int n)
{
    if (n > 500)
        return;
    if (prime(n, n / 2))
        printf("%d ", n);
    all(n + 1);
}
int main()
{
    all(1);
    return 0;
}
