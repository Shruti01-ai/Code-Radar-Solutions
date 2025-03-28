#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);  // Read input

    num = num ^ (1 << n);  // Toggle the nth bit using XOR

    printf("%d\n", num);  // Print the updated number

    return 0;
}