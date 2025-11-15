#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    int r = strcmp(s1, s2);
    if (r == 0)
        printf("same");
    else if (r > 0)
        printf("first greater");
    else
        printf("second greater");
    return 0;
}
