#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);  // Read the number of rows

    for (int i = 1; i <= N; i++) {  // Loop for each row
        for (int j = 1; j <= i; j++) {  // Print i numbers in the i-th row
            printf("%d ", num);
            num++;  // Increment the number
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}