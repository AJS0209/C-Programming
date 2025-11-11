#include <stdio.h>
int main()
{
    int i, j, f, s = 0;
    for (i = 2; i <= 500; i++)
    {
        f = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            s = s + i;
    }
    printf("%d", s);
    return 0;
}
