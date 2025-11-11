#include <stdio.h>

int main()
{
    int num, original, reverse = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num > 0)
    {
        i = num % 10;
        reverse = reverse * 10 + i;
        num = num / 10;
    }
    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

    return 0;
}