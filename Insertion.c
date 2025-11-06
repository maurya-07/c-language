// WAP to perform insertion in an array

#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value, i;
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter position (0-%d) and value: ", n);
    scanf("%d %d", &pos, &value);
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}