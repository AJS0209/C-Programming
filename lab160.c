#include <stdio.h>
void f(int i, int j)
{
    if (i > 3)
        return;
    if (j < 3)
    {
        f(i + 1, 5);
        return;
    }
    printf("%d %d\n", i, j);
    printf("%d %d\n", i, j);
    f(i+1, j-1);
}
int main()
{
    f(1, 5);
    return 0;
}
