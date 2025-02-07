#include <stdio.h>

int main() {
    float num1, num2, num3;

    scanf("%f %f %f", &num1, &num2, &num3);

    // Find the maximum number
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2f\n", num2);
    } else {
        printf("%.2f\n", num3);
    }

    return 0;
}
