#include <stdio.h>

struct bank
{
    int acc;
    char name[50];
    float bal;
};

void lowbal(struct bank b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (b[i].bal < 100)
            printf("%d %s\n", b[i].acc, b[i].name);
}

void update(struct bank b[], int n, int acc, float amt, int code)
{
    int i;
    for (i = 0; i < n; i++)
        if (b[i].acc == acc)
        {
            if (code == 1)
                b[i].bal += amt;
            else
            {
                if (b[i].bal < amt)
                    printf("insufficient\n");
                else
                    b[i].bal -= amt;
            }
            printf("bal=%.2f\n", b[i].bal);
        }
}

int main()
{
    struct bank b[10];
    int i, acc, code;
    float amt;
    for (i = 0; i < 10; i++)
        scanf("%d%s%f", &b[i].acc, b[i].name, &b[i].bal);
    lowbal(b, 10);
    scanf("%d%f%d", &acc, &amt, &code);
    update(b, 10, acc, amt, code);
    return 0;
}
