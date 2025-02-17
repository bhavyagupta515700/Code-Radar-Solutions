#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

   
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n", num);
    } else {
        printf("Not Prime", num);
    }

    return 0;
}
