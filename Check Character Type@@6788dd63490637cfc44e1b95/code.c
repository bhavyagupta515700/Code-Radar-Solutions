#include <stdio.h>
#include <ctype.h> // for isdigit() and isalpha()

int main() {
    char ch;
  
    scanf("%c", &ch);
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Check if the character is a vowel
    else if (isalpha(ch)) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // Check if the character is a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
