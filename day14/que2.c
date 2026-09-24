#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 2) {
        // If n < 2, there are no even numbers in the range [1, n]
        printf("0\n");
        return 0;
    }

    long long product = 1;

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}
