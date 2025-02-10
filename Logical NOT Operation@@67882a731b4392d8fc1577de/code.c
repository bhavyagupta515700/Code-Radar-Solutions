#include <stdio.h>

int main() {
    int num;
   
    scanf("%d", &num);

    if (!(num > 0)) {
        printf("The number is not greater than zero.\n");
    } else {
        printf("The number is greater than zero.\n");
    }

    return 0;
}
