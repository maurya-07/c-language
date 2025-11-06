// WAP to find the sum of the digits of a number

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = num; i > 0; i /= 10) {
        sum += i % 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}