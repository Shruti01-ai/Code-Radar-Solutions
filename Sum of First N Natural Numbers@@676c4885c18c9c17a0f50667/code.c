#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the input N

    int sum = 0; // Variable to store the sum
    for (int i = 1; i <= N; i++) {
        sum += i; // Accumulate the sum
    }

    printf("%d\n", sum); // Print the result

    return 0;
}