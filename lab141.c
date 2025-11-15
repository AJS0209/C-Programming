#include <stdio.h>
void sep(int n)
{
    if (n == 0)
        return;
    printf("%d ", n % 10);
    sep(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    sep(n);
    return 0;
}
