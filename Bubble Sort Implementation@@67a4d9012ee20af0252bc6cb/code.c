#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

// Function to implement Bubble Sort
void bubbleSort(int arr[n], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the sorted array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); // Read number of elements

    int *arr = (int*)malloc(n * sizeof(int)); // Allocate memory dynamically

    if (arr == NULL) { // check for memory allocation failure.
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    bubbleSort(arr, n); // Sort array
    printArray(arr, n); // Print sorted array

    free(arr); // Free allocated memory

    return 0;
}