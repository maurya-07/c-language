// WAP to represent column matrix using array

#include <stdio.h>
int main() {
    int arr[5][1] = {{1}, {2}, {3}, {4}, {5}};
    int i;
    printf("Column matrix:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", arr[i][0]);
    }
    return 0;
}