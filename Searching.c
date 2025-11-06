// WAP to perform searching in an array

#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, search, i, found = 0;
    printf("Array: ");
    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");
    return 0;
}