// WAP to find greatest out of two numbers

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("%d is greatest\n", a);
    else
        printf("%d is greatest\n", b);
    return 0;
}