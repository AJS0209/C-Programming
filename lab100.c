#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);
    return 0;
}
