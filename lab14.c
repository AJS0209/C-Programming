#include<stdio.h>
int main()
{
float bytes,kilobytes,megabytes,gigabytes;

printf("Enter the number of bytes:");
scanf("%f",&bytes);

kilobytes=bytes/1000;
megabytes=kilobytes/1000;
gigabytes=megabytes/1000;
printf("The number of kilobytes is: %f\n",kilobytes);
printf("The number of megabytes is: %f\n",megabytes);
printf("The number of gigabytes is: %f\n",gigabytes);
return 0;
}
