#include <stdio.h>
void even(int n)
{
    if (n == 0)
        return;
    even(n - 1);
    printf("%d ", 2 * n);
}
int main()
{
    even(10);
    return 0;
}
