#include <stdio.h>
int power(int a, int b)
{
    int i, p = 1;
    for (i = 1; i <= b; i++)
        p = p * a;
    return p;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}
