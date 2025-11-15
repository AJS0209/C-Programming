#include <stdio.h>
int main()
{
    FILE *f;
    char s[100];
    f = fopen("data.txt", "r");
    if (f == NULL)
        return 0;
    while (fgets(s, 100, f) != NULL)
        printf("%s", s);
    fclose(f);
    return 0;
}
