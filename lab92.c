#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[50];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);
    printf("%s", s);
    return 0;
}
