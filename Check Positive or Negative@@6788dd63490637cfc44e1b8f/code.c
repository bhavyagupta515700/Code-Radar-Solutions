#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Checking if the number is positive, negative, or zero
    if (number > 0) {
        printf("Positive\n", number);
    } else if (number < 0) {
        printf("Negative\n", number);
    } else {
        printf("Zero.\n");
    }

    return 0;
}
