#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d is greater than %d and %d",a,c,b);
    }

    else if (b>a && b>c)
    {
        printf("%d is greater than %d and %d",b,a,c);
    }

    else if (c>a && c>b)
    {
        printf("%d is greater than %d and %d",c,b,a);
    }

return 0;
}

