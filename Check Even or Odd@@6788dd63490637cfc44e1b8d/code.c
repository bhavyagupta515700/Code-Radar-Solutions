#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Decision making to check if the number is even or odd
    if (number % 2 == 0) {
        printf("Even \n", number);
    } else {
        printf("Odd\n", number);
    }

    return 0;
}
