#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], *p;
    int i;
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0;
    p = strtok(s, " ");
    while (1)
    {
        char *next = strtok(NULL, " ");
        if (next == NULL)
        {
            printf("%s", p);
            break;
        }
        printf("%c. ", p[0]);
        p = next;
    }
    return 0;
}
