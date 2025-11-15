#include <stdio.h>
void fact(int n, int i)
{
    if (i > n)
        return;
    if (n % i == 0)
        printf("%d ", i);
    fact(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fact(n, 1);
    return 0;
}
