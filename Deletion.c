// WAP to perform deletion in an array

#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, i;
    printf("Original array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter position to delete (0-%d): ", n-1);
    scanf("%d", &pos);
    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}