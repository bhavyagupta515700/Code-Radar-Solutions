#include <stdio.h>

int main() {
    int i, j, N;

    scanf("%d", &N);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
