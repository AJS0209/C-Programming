#include <stdio.h>
void show(int n)
{
    if (n == 0)
        return;
    show(n - 1);
    printf("%d ", n);
}
int main()
{
    show(10);
    return 0;
}
