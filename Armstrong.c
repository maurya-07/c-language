// WAP to find whether the given number is Armstrong or not

#include <stdio.h>
#include <math.h>
int main() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(original != 0) {
        original /= 10;
        n++;
    }
    original = num;
    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    if(result == num)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    return 0;
}