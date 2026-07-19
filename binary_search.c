#include <stdio.h>

int main() {
    int arr[100], n, key, i, left, right, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}