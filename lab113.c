#include <stdio.h>
int add(int a, int b)
{ 
    return a + b; 
}
int sub(int a, int b) 
{ 
    return a - b; 
}
int mul(int a, int b) 
{ 
    return a * b; 
}
float divi(int a, int b) 
{
     return (float)a / b; 
}
int main()
{
    int a, b;
    char op;
    printf("Enter numbers and operator:");
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+')
        printf("%d", add(a, b));
    else if (op == '-')
        printf("%d", sub(a, b));
    else if (op == '*')
        printf("%d", mul(a, b));
    else if (op == '/')
        printf("%.2f", divi(a, b));
    return 0;
}
