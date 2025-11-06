// WAP to find the percentage of a student

#include <stdio.h>
int main() {
    float m1, m2, m3, total, percentage;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = (total / 300) * 100;
    printf("Percentage = %f", percentage);
    return 0;
}