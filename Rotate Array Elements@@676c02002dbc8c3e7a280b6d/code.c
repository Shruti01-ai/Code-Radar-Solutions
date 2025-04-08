#include <stdio.h>
#include <stdlib.h>

void rotateArray(int arr[], int n, int k) {
    // Effective number of rotations
    k = k % n;
    if (k < 0) {
        k = k + n; // Handle negative rotations
    }

    // Optimization: If k is 0 or n, no rotation is needed
    if (k == 0 || k == n) {
        return;
    }

    // In-place rotation using the reversal algorithm
    // 1. Reverse the first n-k elements
    int start = 0;
    int end = n - k - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // 2. Reverse the last k elements
    start = n - k;
    end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // 3. Reverse the entire array
    start = 0;
    end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

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

    // Read the number of positions to rotate
    if (scanf("%d", &k) != 1) {
        fprintf(stderr, "Invalid rotation value.\n");
        free(arr);
        return 1;
    }

    // Rotate the array
    rotateArray(arr, n, k);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}