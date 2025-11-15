#include <stdio.h>
void swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("inside: %d %d\n", x, y);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("outside: %d %d", a, b);
    return 0;
}
