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
int countP(int n)
{
    if (n > 500)
        return 0;
    if (prime(n, n / 2))
        return 1 + countP(n + 1);
    return countP(n + 1);
}
int main()
{
    printf("%d", countP(1));
    return 0;
}
