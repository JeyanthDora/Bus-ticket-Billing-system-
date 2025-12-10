#include <stdio.h>

int main() {
    int baseFare = 50;        // Starting fare
    int stops;
    float finalFare;

    printf("===== BUS TICKET BILLING SYSTEM =====\n");
    printf("Enter number of stops you want to travel: ");
    scanf("%d", &stops);

    if (stops <= 0) {
        printf("Invalid number of stops!\n");
        return 0;
    }

    /* Fare logic:
       - More stops → fare decreases
       - Decrease 2% per stop but not below minimum fare of 10
    */
    float discountPercent = stops * 2;  // 2% discount per stop

    if (discountPercent > 80) {
        discountPercent = 80;  // Max discount = 80%
    }

    finalFare = baseFare - (baseFare * (discountPercent / 100));

    if (finalFare < 10)
        finalFare = 10; // Minimum fare

    printf("\n--------- BILL SUMMARY ---------\n");
    printf("Base Fare         : ₹%d\n", baseFare);
    printf("Stops             : %d\n", stops);
    printf("Discount Applied  : %.2f%%\n", discountPercent);
    printf("Final Ticket Fare : ₹%.2f\n", finalFare);

    printf("\nThank you! Have a safe journey.\n");

    return 0;
}