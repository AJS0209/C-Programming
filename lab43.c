#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter the Number:");
    scanf("%d",&a);
    while (a!=0)
    {
        i=a%10;
        a=a/10;
        printf("%d",i);
        if(a!=0)
        {
            printf(",");
        }
    }
return 0;
}
