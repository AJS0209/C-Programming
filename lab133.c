#include <stdio.h>
int sum13(int n)
{
    if (n == 0)
        return 0;
    if (n % 13 == 0)
        return n + sum13(n - 1);
    return sum13(n - 1);
}
int main()
{
    printf("%d", sum13(100));
    return 0;
}
