#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = N; i >= 1; i--) {  // Loop for each row (reverse order)
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Print alphabets from 'A' to row number
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}