#include <stdio.h>

int main() {
int a,b,c;
    scanf("%d %d %d", &a , &b , &c);
    printf("Lengths: [%d, %d, %d]\n", a ,b,c);
    if ((a==b && b==c && c==a) && (a+b>c && b+c>a && c+a>b)) {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.");
    }
    else if ((a==b || b==c || c==a) && (a+b>c && b+c>a && c+a>b)){
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.");
    }
    else if ((a!=b && b!=c && c!=a) && (a+b>c && b+c>a && c+a>b))
    {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.");
    }
    else {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    return 0;
}
