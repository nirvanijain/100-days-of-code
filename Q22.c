//Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, profitPercentage, lossPercentage;

    // Input Cost Price
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);

    // Input Selling Price
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Check for Profit or Loss
    if (sellingPrice > costPrice) {
        // Calculate Profit amount
        profit = sellingPrice - costPrice;
        // Calculate Profit Percentage
        profitPercentage = (profit / costPrice) * 100;
        printf("\nProfit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (costPrice > sellingPrice) {
        // Calculate Loss amount
        loss = costPrice - sellingPrice;
        // Calculate Loss Percentage
        lossPercentage = (loss / costPrice) * 100;
        printf("\nLoss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        // No profit and no loss
        printf("\nNo Profit, No Loss.\n");
    }

    return 0;
}
