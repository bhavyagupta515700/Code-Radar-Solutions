// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // Loop for rows
        char ch = 'A'; // Start from 'A'
        for (int j = 1; j <= i; j++) { // Loop for columns in each row
            printf("%c ", ch);
            ch++; // Move to the next alphabet
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
