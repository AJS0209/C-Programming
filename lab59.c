#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0, original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of factors of %d is: %d\n ", num, sum);
    if (sum == original)
        printf("%d is a Perfect number.\n", original);
    else
        printf("%d is not a Perfect number.\n", original);
    return 0;
}
