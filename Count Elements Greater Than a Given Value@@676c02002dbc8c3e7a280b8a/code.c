#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;

    // Read the size of the array (N) and the value K
    if (scanf("%d %d", &n, &k) != 2 || n <= 0) {
        fprintf(stderr, "Invalid input for array size (N) or K.\n");
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

    int count = 0;
    // Iterate through the array and count elements greater than K
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    // Output the count
    printf("%d\n", count);

    // Free the allocated memory
    free(arr);
    return 0;
}