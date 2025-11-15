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
    int n;
    scanf("%d", &n);
    even(n);
    return 0;
}
