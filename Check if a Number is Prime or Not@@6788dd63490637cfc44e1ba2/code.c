#include <stdio.h>

int main() {
    int num, isPrime = 1;
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n", num);
    else
        printf("Not Prime\n", num);

    return 0;
}

