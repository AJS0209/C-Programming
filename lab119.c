#include <stdio.h>
int main()
{
    FILE *f;
    char s[100];
    f = fopen("data.txt", "w");
    while (1)
    {
        fgets(s, 100, stdin);
        if (s[0] == '#')
            break;
        fputs(s, f);
    }
    fclose(f);
    return 0;
}
