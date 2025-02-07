#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d", &num1);

    scanf("%d", &num2);

    // Decision making to find the greater number
    if (num1 > num2) {
        printf("d\n", num1);
    } else if (num1 < num2) {
        printf("%d\n", num2);
    } else {
        printf("0\n");
    }

    return 0;
}

