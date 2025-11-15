#include <stdio.h>
int main()
{
    FILE *f;
    int roll;
    char name[50];
    f = fopen("student.csv", "w");
    while (1)
    {
        printf("roll name: ");
        if (scanf("%d%s", &roll, name) != 2)
            break;
        fprintf(f, "%d,%s\n", roll, name);
        printf("more? (0 to stop) ");
        int x;
        scanf("%d", &x);
        if (x == 0)
            break;
    }
    fclose(f);
    return 0;
}
