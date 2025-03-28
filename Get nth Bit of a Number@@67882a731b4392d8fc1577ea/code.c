#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n); // Read the number and bit position

    // Extract the nth bit using bitwise AND
    int bit_value = (num >> n) & 1;

    // Print input and output format
    printf("Input\n%d %d\n\n", num, n);
    printf("Output\n%d\n", bit_value);

    return 0;
}