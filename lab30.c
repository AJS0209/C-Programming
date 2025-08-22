#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d id greater than %d",a,b);
    }

    else if (b>a)
    {
        printf("%d is greater than %d",b,a);
    }

return 0;
}
