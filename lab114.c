#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printnames(struct student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s\n", s[i].name);
}

void printbyroll(struct student s[], int n, int r)
{
    int i;
    for (i = 0; i < n; i++)
        if (s[i].roll == r)
            printf("%d %s %s %s %s", s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
}

int main()
{
    struct student s[10];
    int i, r;
    for (i = 0; i < 10; i++)
        scanf("%d%s%s%s%s", &s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
    printnames(s, 10);
    scanf("%d", &r);
    printbyroll(s, 10, r);
    return 0;
}
