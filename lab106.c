#include <stdio.h>
int main()
{
    char b[3][50], *p[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%s", b[i]);
        p[i] = b[i];
    }
    for (i = 0; i < 3; i++)
        printf("%s\n", p[i]);
    return 0;
}
