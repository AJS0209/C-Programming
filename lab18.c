#include <stdio.h>
int main()
{
    float length, area, perimeter;
    printf("Enter the length of the side of the square:");
    scanf("%f",&length);
    area=length*length;
    perimeter=4*length;
    printf("The area of the square is:%.2f\n",area);
    printf("The perimeter of the square is:%.2f\n",perimeter);
    return 0;
}