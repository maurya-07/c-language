// WAP to print 2x2 matrix using array

#include <stdio.h>
int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int i, j;
    printf("2x2 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}