#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for each row
        // Print spaces for centering the pyramid
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}