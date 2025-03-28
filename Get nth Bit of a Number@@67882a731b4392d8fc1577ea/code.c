#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);  // Read input

    printf("%d\n", (num >> n) & 1); // Get nth bit and print

    return 0;
}