#include <stdio.h>
void printName(int n)
{
    if (n == 0)
        return;
    printf("Aryan\n");
    printName(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printName(n);
    return 0;
}
