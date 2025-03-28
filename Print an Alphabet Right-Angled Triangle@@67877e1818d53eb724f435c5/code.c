#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Print alphabets from 'A' to 'A' + (i-1)
            printf("%c ", ch);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}