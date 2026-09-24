#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", i);
        } else {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
