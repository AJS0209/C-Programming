#include <stdio.h>
int pow10(int n)
{
    if (n == 0)
        return 1;
    return 10 * pow10(n - 1);
}
int digits(int n)
{
    if (n == 0)
        return 0;
    return 1 + digits(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    int sq = n * n;
    int d = digits(n);
    int p = pow10(d);
    if (sq % p == n)
        printf("Automorphic");
    else
        printf("Not");
    return 0;
}
