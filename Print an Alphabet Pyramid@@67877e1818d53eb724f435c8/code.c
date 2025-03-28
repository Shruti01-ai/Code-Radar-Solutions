#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for each row
        char letter = 'A';  // Start with 'A'
        
        // Print alphabets from 'A' to the ith letter
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;  // Move to the next letter
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}