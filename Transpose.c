// WAP to convert a matrix into its transpose

#include <stdio.h>
int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int transpose[2][2];
    int i, j;
    printf("Original Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
        printf("\n");
    }
    printf("Transpose Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}