#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for each row
        int num = i % 2;  // Start with 1 if row is odd, 0 if row is even
        for (int j = 1; j <= i; j++) {  // Loop to print numbers in the row
            printf("%d ", num);
            num = 1 - num;  // Toggle between 1 and 0
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}