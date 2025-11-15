#include <stdio.h>

struct stud
{
    int roll;
    char name[50];
    int p, m, c;
    int total;
};

int main()
{
    struct stud s;
    scanf("%d%s%d%d%d", &s.roll, s.name, &s.p, &s.m, &s.c);
    s.total = s.p + s.m + s.c;
    printf("%d %s %d %d %d %d", s.roll, s.name, s.p, s.m, s.c, s.total);
    return 0;
}
