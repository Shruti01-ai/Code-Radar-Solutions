#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid array element.\n");
            free(arr);
            return 1;
        }
    }

    int largestEven = INT_MIN;
    int foundEven = 0; // Flag to check if any even number exists

    // Iterate through the array to find the largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            foundEven = 1;
            if (arr[i] > largestEven) {
                largestEven = arr[i];
            }
        }
    }

    // Output the result
    if (foundEven) {
        printf("%d\n", largestEven);
    } else {
        printf("-1\n");
    }

    // Free the allocated memory
    free(arr);
    return 0;
}