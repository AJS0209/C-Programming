#include <stdio.h>
void div5(int n)
{
    if (n == 0)
        return;
    div5(n - 1);
    if (n % 5 == 0)
        printf("%d ", n);
}
int main()
{
    div5(100);
    return 0;
}
