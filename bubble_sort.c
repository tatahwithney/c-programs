/*
 * Project:     Binary sorting 
 * Author:      Tatah Withney
 * GitHub:      github.com/tatahwithney
 * License:     MIT
 * Date:        04-03-26
 * Description: Arrange a list of numbers in ascending order using bubble sort algorithm
 *              generated number between 1 and 100
 *              best evealutaion time use binary search algorithm 
 *              The algorithm repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The process is repeated until the list is sorted.  
 */
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}