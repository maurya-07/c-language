// WAP to perform sorting in an array (Bubble Sort)

#include <stdio.h>
int main()
{
    int arr[5] = {50, 20, 40, 10, 30};
    int n = 5, i, j, temp;
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}