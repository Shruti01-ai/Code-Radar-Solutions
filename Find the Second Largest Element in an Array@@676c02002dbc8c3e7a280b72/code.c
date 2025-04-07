#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Read the number of elements in the array
    scanf("%d", &n);

    // Handle the case where the array has less than 2 elements
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // Read the array elements from the user
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = -1; // Initialize to -1 as per the problem statement

    // Find the largest and second largest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // Output the second largest element
    printf("%d\n", secondLargest);

    // Free the allocated memory
    free(arr);

    return 0;
}