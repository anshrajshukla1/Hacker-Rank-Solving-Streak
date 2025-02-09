#include <stdio.h>

int main() {
  
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;

  
    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

 
    int totalFoodCost = foodCostPerGuest * numGuests;

    
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;


    int isBudgetValid = totalCost <= budget;
    int isGuestCountValid = numGuests > 5 && numGuests <= 50;
    int isDecorationCostValid = decorationCost < 0.3 * budget;
    int isFoodCostValid = totalFoodCost < 0.5 * budget;
    int isMusicRequired = (numGuests > 25) ? (musicCost > 0) : 1; 


    if (isBudgetValid && isGuestCountValid && 
        (isDecorationCostValid || isFoodCostValid) && 
        isMusicRequired) {
        printf("Celebration Approved\n");
    } else {
        printf("Celebration Denied\n");
    }

    return 0;
}
