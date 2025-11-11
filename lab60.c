#include <stdio.h>

int main()
{
    int num, i = 1, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 2)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
