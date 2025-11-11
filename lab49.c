#include <stdio.h>
int main()
{
    int i, b = 0, g = 0;
    char c;
    for (i = 1; i <= 50; i++)
    {
        scanf(" %c", &c);
        if (c == 'b' || c == 'B')
            b++;
        else if (c == 'g' || c == 'G')
            g++;
    }
    printf("boys=%d\ngirls=%d", b, g);
    return 0;
}
