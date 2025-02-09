#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        printf("A\n");
    }
    else if (N > 20) {
        if ((N == 2 * 3) || (N == 2 * 5) || (N == 2 * 7) || (N == 2 * 11) ||
            (N == 3 * 5) || (N == 3 * 7) || (N == 3 * 11) ||
            (N == 5 * 7) || (N == 5 * 11) ||
            (N == 7 * 11)) {
            printf("B\n");
        }
        else if (N >= 10 && N < 100) {
            if ((N % 3 == 0) ^ (N % 7 == 0)) {
                printf("C\n");
            }
            else if (N < 200) {
                if (N == 1 || N == 4 || N == 9 || N == 16 || N == 25 ||
                    N == 36 || N == 49 || N == 64 || N == 81 || N == 100 ||
                    N == 121 || N == 144 || N == 169 || N == 196) {
                    printf("D\n");
                } else {
                    printf("E\n");
                }
            } else {
                printf("E\n");
            }
        }
        else if (N < 200) {
            if (N == 1 || N == 4 || N == 9 || N == 16 || N == 25 ||
                N == 36 || N == 49 || N == 64 || N == 81 || N == 100 ||
                N == 121 || N == 144 || N == 169 || N == 196) {
                printf("D\n");
            } else {
                printf("E\n");
            }
        } else {
            printf("E\n");
        }
    }
    else {
        if (N >= 10 && N < 100) {
            if ((N % 3 == 0) ^ (N % 7 == 0)) {
                printf("C\n");
            }
            else if (N < 200) {
                if (N == 1 || N == 4 || N == 9 || N == 16 || N == 25 ||
                    N == 36 || N == 49 || N == 64 || N == 81 || N == 100 ||
                    N == 121 || N == 144 || N == 169 || N == 196) {
                    printf("D\n");
                } else {
                    printf("E\n");
                }
            } else {
                printf("E\n");
            }
        }
        else if (N < 200) {
            if (N == 1 || N == 4 || N == 9 || N == 16 || N == 25 ||
                N == 36 || N == 49 || N == 64 || N == 81 || N == 100 ||
                N == 121 || N == 144 || N == 169 || N == 196) {
                printf("D\n");
            } else {
                printf("E\n");
            }
        } else {
            printf("E\n");
        }
    }

    return 0;
}
