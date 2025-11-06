// WAP to perform traversing in an array

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    printf("Traversing array:\n");
    for(i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}