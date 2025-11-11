#include <stdio.h>

int main()
{
    float s1, s2, s3, total, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    if (s1 < 35 || s2 < 35 || s3 < 35)
        printf("Fail");
    else
    {
        total = s1 + s2 + s3;
        avg = total / 3;

        printf("Total = %.2f\n", total);
        printf("Average = %.2f\n", avg);

        if (avg >= 70)
            printf("Distinction");
        else if (avg >= 60)
            printf("First Class");
        else if (avg >= 50)
            printf("Second Class");
        else if (avg >= 35)
            printf("Third Class");
        else
            printf("Fail");
    }

    return 0;
}