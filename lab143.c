#include <stdio.h>
int sumd(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumd(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sumd(n));
    return 0;
}
