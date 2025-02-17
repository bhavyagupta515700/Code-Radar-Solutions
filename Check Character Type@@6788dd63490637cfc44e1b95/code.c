#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n", ch);
    }
    // Check if the character is a consonant
    else if (isalpha(ch)) {
        printf("Consonant\n", ch);
    }
    // If not a digit, vowel, or consonant, it must be a special character
    else {
        printf("Special Character\n", ch);
    }

    return 0;
}
