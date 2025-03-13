#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Printing spaces
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // Moving to the next line
    }

    return 0;
}

