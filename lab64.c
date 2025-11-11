#include <stdio.h>
int main()
{
    int n, s, t, p = 1;
    scanf("%d", &n);
    s = n * n;
    t = n;
    while (t > 0)
    {
        p = p * 10;
        t = t / 10;
    }
    if (s % p == n)
        printf("automorphic");
    else
        printf("not automorphic");
    return 0;
}
