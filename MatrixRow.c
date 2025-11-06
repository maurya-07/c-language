// WAP to represent row matrix using array

#include <stdio.h>
int main() {
    int arr[1][5] = {{1, 2, 3, 4, 5}};
    int i;
    printf("Row matrix: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[0][i]);
    }
    printf("\n");
    return 0;
}