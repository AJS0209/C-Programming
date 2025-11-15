#include <stdio.h>
int countGender(char s[], int n, char c)
{
    if (n == 0)
        return 0;
    return (s[n - 1] == c) + countGender(s, n - 1, c);
}
int main()
{
    char s[50];
    for (int i = 0; i < 50; i++)
        scanf(" %c", &s[i]); // M or F
    int boys = countGender(s, 50, 'M');
    int girls = countGender(s, 50, 'F');
    printf("Boys=%d\nGirls=%d", boys, girls);
    return 0;
}
