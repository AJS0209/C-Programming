#include <stdio.h>
#include <string.h>

struct cricket
{
    char name[50];
    int age;
    int match;
    float avg;
};

int main()
{
    struct cricket c[10], t;
    int i, j;
    for (i = 0; i < 10; i++)
        scanf("%s%d%d%f", c[i].name, &c[i].age, &c[i].match, &c[i].avg);
    for (i = 0; i < 9; i++)
        for (j = i + 1; j < 10; j++)
            if (c[i].avg > c[j].avg)
            {
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
    for (i = 0; i < 10; i++)
        printf("%s %d %d %.2f\n", c[i].name, c[i].age, c[i].match, c[i].avg);
    return 0;
}
