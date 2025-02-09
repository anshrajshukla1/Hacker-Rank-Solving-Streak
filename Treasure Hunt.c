#include <stdio.h>

int main() {
    int pathChoice, actionChoice, bridgeChoice, puzzleAnswer, finalChestChoice;
    int canProceed = 1;

    scanf("%d", &pathChoice);
    
    if (pathChoice == 1) {
        printf("Player chooses the Left path.\n");
        
        scanf("%d", &actionChoice);
        if (actionChoice == 1) {
            printf("Poor choice, Game Over!\n");
            canProceed = 0;
        } else if (actionChoice == 2) {
            printf("Player found a bridge.\n");
            
            scanf("%d", &bridgeChoice);
            if (bridgeChoice == 1) {
                printf("Player crosses the bridge safely.\n");
            } else {
                printf("Poor luck, Game Over!\n");
                canProceed = 0;
            }
        }
    } else if (pathChoice == 2) {
        printf("Player chooses the Middle path.\n");
        scanf("%d", &puzzleAnswer);
        
        if (puzzleAnswer == 582) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            canProceed = 0;
        }
    } else if (pathChoice == 3) {
        printf("Player chooses the Right path.\n");
        scanf("%d", &puzzleAnswer);
        
        if (puzzleAnswer == 30) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            canProceed = 0;
        }
    } else {
        printf("Invalid path choice, Game Over!\n");
        return 0;
    }

    if (canProceed) {
        scanf("%d", &finalChestChoice);
        
        if (finalChestChoice == 1) {
            printf("All that glitters is not gold, Game Over!\n");
        } else if (finalChestChoice == 2) {
            printf("All your efforts were for nothing, Game Over!\n");
        } else if (finalChestChoice == 3) {
            printf("Congratulations!! You won the treasure.\n");
        } else {
            printf("Invalid chest choice, Game Over!\n");
        }
    }

    return 0;
}
