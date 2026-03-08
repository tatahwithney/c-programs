/*
 * Project:     Swapping values
 * Author:      Tatah Withney
 * GitHub:      github.com/tatahwithney
 * License:     MIT
 * Date:        04-03-26
 * Description: Swapping values is a fundamental operation in programming that involves exchanging the values of two variables. This is often used in sorting algorithms, where elements need to be rearranged based on certain criteria. In this project, we will implement a simple swapping mechanism using a temporary variable to hold one of the values during the exchange process. The program will generate a random number between 1 and 100, and then sort an array of integers using the bubble sort algorithm, which relies heavily on swapping adjacent elements to sort the list. The bubble sort algorithm is efficient for small datasets and is easy to understand, making it a good choice for demonstrating the concept of swapping values.
 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);  
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}