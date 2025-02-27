#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = 1; i <= N; i++) { // Loop for rows
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}