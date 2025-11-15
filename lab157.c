#include <stdio.h>
void f(int i, int j, int k)
{
    if (i > 2)
        return;
    if (j > 2)
    {
        f(i + 1, 1, 1);
        return;
    }
    if (k > 2)
    {
        f(i, j + 1, 1);
        return;
    }
    printf("%d %d %d\n", i, j, k);
    f(i, j, k + 1);
}
int main()
{
    f(1, 1, 1);
    return 0;
}
