#include <stdio.h>

int main()
{
    int a,i,count=0;
    printf("Enter the Number:");
    scanf("%d",&a);
    while (a!=0)
    {
        i=a%10;
        a=a/10;
        count=count+1;

    }
    printf("%d",count);
return 0;
}
