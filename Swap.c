// WAP to swap the value of two variables

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a=%d, b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a=%d, b=%d", a, b);
    return 0;
}