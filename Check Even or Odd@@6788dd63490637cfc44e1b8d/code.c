#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Decision making to check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
