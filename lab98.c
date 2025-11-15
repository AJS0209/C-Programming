#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i, j, flag = 1;
    scanf("%s", s);
    j = strlen(s) - 1;
    for (i = 0; i < j; i++, j--)
        if (s[i] != s[j])
            flag = 0;
    if (flag)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
