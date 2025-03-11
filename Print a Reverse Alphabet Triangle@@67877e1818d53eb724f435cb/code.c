// Your code here...
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = i; j >= 1; j--) { // Inner loop for reverse alphabets
            printf("%c ", 'A' + j - 1); // Calculate the character using ASCII values
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
