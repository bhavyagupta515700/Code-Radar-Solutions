#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;
    
    scanf("%f", &costPrice);
   
    scanf("%f", &sellingPrice);
    
    // Calculating profit or loss
    profitOrLoss = sellingPrice - costPrice;
    
    if (profitOrLoss > 0) {
        printf("Profit", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss", -profitOrLoss);
    } else {
        printf("No Profit, No Loss\n");
    }
    
    return 0;
}
