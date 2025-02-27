#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the input N

    for (int i = 1; i <= N; i++) {
        printf("%d ", i); // Print the current number followed by a space
    }

    printf("\n"); // Move to the next line after printing all numbers

    return 0;
}