#include <stdio.h>

int main() {
    int passcode[10];
    int index1, rotation1;
    int index2, rotation2;
    int index3, rotation3;

    
    scanf("%d %d %d %d %d %d %d %d %d %d", 
          &passcode[0], &passcode[1], &passcode[2], &passcode[3], 
          &passcode[4], &passcode[5], &passcode[6], &passcode[7], 
          &passcode[8], &passcode[9]);

    
    scanf("%d %d", &index1, &rotation1);
    if (index1 >= 0 && index1 < 10) {
        passcode[index1] += rotation1;
        if (passcode[index1] > 9) {
            passcode[index1] %= 10;
        }
    }

    
    scanf("%d %d", &index2, &rotation2);
    if (index2 >= 0 && index2 < 10) {
        passcode[index2] += rotation2;
        if (passcode[index2] > 9) {
            passcode[index2] %= 10;
        }
    }


    scanf("%d %d", &index3, &rotation3);
    if (index3 >= 0 && index3 < 10) {
        passcode[index3] += rotation3;
        if (passcode[index3] > 9) {
            passcode[index3] %= 10;
        }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", 
           passcode[0], passcode[1], passcode[2], passcode[3], 
           passcode[4], passcode[5], passcode[6], passcode[7], 
           passcode[8], passcode[9]);

    return 0;
}
