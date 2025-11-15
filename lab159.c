#include <stdio.h>
void f(int i)
{
    if (i > 5)
        return;
    printf("%d %d\n", i, 6 - i);
    f(i + 1);
}
int main()
{
    f(1);
    return 0;
}
