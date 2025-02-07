#include <stdio.h>

int main() {
    int N;

    
    
    scanf("%d", &N);

    
    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID\n", N);
    } else {
        
        if (N > 10 && N % 2 == 0) { 
            if (N > 15 && N % 3 == 0) { 
                if (N % 7 == 0) { 
                    printf("The verdict for the number %d is: SUPERNATURAL\n", N);
                } else {
                    printf("The verdict for the number %d is: MIRACULOUS\n", N);
                }
            } else if (N % 7 == 0) { 
                printf("The verdict for the number %d is: MIRACULOUS\n", N);
            } else {
                printf("The verdict for the number %d is: MAGICAL\n", N);
            }
        } else if (N > 15 && N % 3 == 0) { 
            if (N % 7 == 0) { 
                printf("The verdict for the number %d is: MIRACULOUS\n", N);
            } else {
                printf("The verdict for the number %d is: MAGICAL\n", N);
            }
        } else if (N % 7 == 0) { 
            printf("The verdict for the number %d is: MAGICAL\n", N);
        } else {
            printf("The verdict for the number %d is: NORMAL\n", N);
        }
    }

    return 0;
}
