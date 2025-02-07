#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    // Checking if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("Not an Alphabet\n", ch);
    }

    return 0;
}
