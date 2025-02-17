#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    scanf("%c", &operator);
    
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("error\n");
    }

    return 0;
}
