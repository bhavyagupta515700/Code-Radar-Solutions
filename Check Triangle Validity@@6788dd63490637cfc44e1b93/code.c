#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n", a, b, c);
    } else {
        printf("Invalid\n", a, b, c);
    }

    return 0;
}
