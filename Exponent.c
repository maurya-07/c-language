// WAP to find (a)^b

#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("%d^%d = %.0f", a, b, pow(a, b));
    return 0;
}