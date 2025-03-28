#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows for the top half

    // Top half of the diamond
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");  // Print spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Print stars
        }
        printf("\n");  // Move to next line
    }

    // Bottom half of the diamond (N-1 rows)
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");  // Print spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Print stars
        }
        printf("\n");  // Move to next line
    }

    return 0;
}