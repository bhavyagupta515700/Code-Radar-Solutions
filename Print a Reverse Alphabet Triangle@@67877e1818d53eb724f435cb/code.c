#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) { // Loop for rows
        char ch = 'A'; // Start from 'A'
        for (int j = 1; j <= i; j++) { // Loop for alphabets in each row
            printf("%c ", ch + i - j); // Print alphabets in reverse order
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
