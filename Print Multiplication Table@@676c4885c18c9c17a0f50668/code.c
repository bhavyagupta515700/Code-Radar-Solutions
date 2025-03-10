// Your code here...
#include <stdio.h>

int main() {
    int num, range;
    scanf("%d", &num);
    scanf("%d", &range);

    for (int i = 1; i <=11; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
