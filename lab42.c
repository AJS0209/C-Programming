#include <stdio.h>

int main()
{
    int i=1;
    char name[50];
    printf("Enter the name:");
    scanf("%s",&name);
    while(i<=5)
    {
        printf("%s\n",name);
        i+=1;
    }
    return 0;
}
