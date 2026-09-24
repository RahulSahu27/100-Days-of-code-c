#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        int odd_num = 2 * i - 1; // Generates: 1, 3, 5, 7, ...
        sum += odd_num;
    }

    printf("%lld\n", sum);

    return 0;
}
