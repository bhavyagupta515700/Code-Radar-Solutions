#include<stdio.h>
void isprime();
int main(){
    #include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

}
void isprime() {
    printf("prime");
}
