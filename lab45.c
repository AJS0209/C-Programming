#include <stdio.h>

int main()
{
    int a,i,sum=0;
    printf("Enter the Number:");
    scanf("%d",&a);
    while (a!=0)
    {
        i=a%10;
        a=a/10;
        sum=sum+i;

    }
    printf("%d",sum);
return 0;
}
