#include <stdio.h>

int main() {
    int i, j, N;
    
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    for (i = N; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
