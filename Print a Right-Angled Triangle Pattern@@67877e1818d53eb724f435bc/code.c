#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = N; i > 0; i--) { // Loop for rows
        for (int j = 0; j < i; j++) { // Loop for printing stars
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}