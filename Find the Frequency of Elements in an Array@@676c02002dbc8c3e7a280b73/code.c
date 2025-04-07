#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int counts[100] = {0}; // Assuming elements are within 0-99

    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }

    for (int i = 0; i < 100; i++) {
        if (counts[i] > 0) {
            printf("%d %d\n", i, counts[i]);
        }
    }

    return 0;
}