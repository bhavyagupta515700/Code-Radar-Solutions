#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // Loop for rows
        int num = i % 2; // Start with 1 if row is odd, 0 if row is even
        for (int j = 1; j <= i; j++) { // Loop for columns in each row
            printf("%d ", num);
            num = 1 - num; // Alternate between 1 and 0
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
