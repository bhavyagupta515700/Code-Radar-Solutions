#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Checking if the number is divisible by both 5 and 11
    if (number % 5 == 0 && number % 11 == 0) {
        printf("Divisible\n", number);
    } else {
        printf("Not Divisible\n", number);
    }

    return 0;
}
