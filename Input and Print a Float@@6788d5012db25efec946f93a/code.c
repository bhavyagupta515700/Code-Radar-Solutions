#include<stdio.h>
int main()
{
    float num;
    printf("Enter a floating point number: ");
    scanf("%.2f", &num);
    printf("You entered: %f\n", num);
    return 0;
}