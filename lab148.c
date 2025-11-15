#include <stdio.h>
int sumFact(int n, int i)
{
    if (i > n / 2)
        return 0;
    if (n % i == 0)
        return i + sumFact(n, i + 1);
    return sumFact(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    if (sumFact(n, 1) == n)
        printf("Perfect");
    else
        printf("Not");
    return 0;
}
