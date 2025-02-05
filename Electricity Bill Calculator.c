#include <stdio.h>

int main() {
int n;
    double bill;
    scanf("%d", &n);
    if (n<0){
        printf("Invalid Input!");
    }
    else if (n<=100){
        bill=n*5;       
        if (bill<=1200){
        bill= bill-0.1*bill;
        printf("The electricity bill is: %.2f.", bill);
            }
        else {
        printf("The electricity bill is: %.2f.", bill);
        }
    }
    else if (n>100 && n<=300){
        bill= 500+(n-100)*7;
        if (bill<=1200){
            bill= bill-bill*0.1;
            printf("The electricity bill is: %.2f.", bill);
            }
        else {
            printf("The electricity bill is: %.2f.", bill);
        }
        }
    else if (n>300){
        bill= 500+1400+ (n-300)*10;
        printf("The electricity bill is: %.2f." ,bill);
}
    
    return 0;
}
