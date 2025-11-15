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
int main()
{
    int n;
    scanf("%d", &n);
    if (prime(n, n / 2))
        printf("Prime");
    else
        printf("Not");
    return 0;
}
