#include <stdio.h>
void f(int i, int j)
{
    if (i > 3)
        return;
    if (j > 2)
    {
        f(i + 1, 1);
        return;
    }
    printf("%d %d\n", i, j);
    f(i, j + 1);
}
int main()
{
    f(1, 1);
    return 0;
}
