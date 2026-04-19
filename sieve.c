#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *arr = malloc((n + 1) * sizeof(int));

    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i * i <= n; i++) {
        if (arr[i] != 0) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }

    printf("Prime numbers from 1 to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
    return 0;
}