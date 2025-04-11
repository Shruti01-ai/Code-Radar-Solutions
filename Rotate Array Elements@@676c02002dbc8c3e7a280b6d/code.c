#include <stdio.h>
#include <stdlib.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    if (k < 0) {
        k += n;
    }

    if (k == 0 || k == n) {
        return;
    }

    // Reversal algorithm
    int start = 0;
    int end = n - k - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    start = n - k;
    end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

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
    // Sample Test Case 1
    int n1 = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int k1 = 2;
    rotateArray(arr1, n1, k1);
    printf("Output for Sample Test Case 1:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d", arr1[i]);
    }
    printf("\n");

    // Sample Test Case 2
    int n2 = 4;
    int arr2[] = {-1, -2, -3, -4};
    int k2 = 1;
    rotateArray(arr2, n2, k2);
    printf("Output for Sample Test Case 2:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d\n", arr2[i]);
    }

    return 0;
}