#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n); // Read the number and bit position

    // Extract the nth bit using bitwise AND
    int bit_value = (num >> n) & 1;

    // Print input and output format
    printf("%d\n", num, n);
    printf("%d\n", bit_value);

    return 0;
}