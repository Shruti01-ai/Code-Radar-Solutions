#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    if (num < 0) {
        return false; // Negative numbers are not palindromes
    }
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return originalNum == reversedNum;
}

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

    int palindromeCount = 0;
    // Iterate through the array and check for palindromic numbers
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            palindromeCount++;
        }
    }

    // Output the count of palindromic numbers
    printf("%d\n", palindromeCount);

    // Free the allocated memory
    free(arr);
    return 0;
}