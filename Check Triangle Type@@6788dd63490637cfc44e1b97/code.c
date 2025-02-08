#include <stdio.h>

int main() {
    float side1, side2, side3;
    
    scanf("%f %f %f", &side1, &side2, &side3);
    
    // Check if all sides are equal
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    // Check if any two sides are equal
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    }
    // If no sides are equal
    else {
        printf("Scalene\n");
    }
    
    return 0;
}
