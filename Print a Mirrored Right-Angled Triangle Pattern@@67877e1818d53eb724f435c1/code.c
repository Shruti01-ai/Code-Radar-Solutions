#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Take input for number of rows
    
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }
    
    return 0;
}