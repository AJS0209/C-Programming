#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50];
    scanf("%s%s", s1, s2);
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}
