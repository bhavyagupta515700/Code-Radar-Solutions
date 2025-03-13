// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // Loop for rows
        // Printing spaces
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
