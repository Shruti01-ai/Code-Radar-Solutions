#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the side length of the hollow square

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            // Print '*' if we are on the first row, last row, first column, or last column
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}