#include <stdio.h>

int main() {
    int units;

    if (scanf("%d", &units) != 1 || units < 0) {
        return 0;
    }

    int bill = 0;

    if (units <= 100) {
        // 0 to 100 units at ₹5/unit
        bill = units * 5;
    } else if (units <= 200) {
        // First 100 @ ₹5 + remaining @ ₹7
        bill = (100 * 5) + (units - 100) * 7;
    } else if (units <= 300) {
        // First 100 @ ₹5 + Next 100 @ ₹7 + remaining @ ₹10
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    } else {
        // First 100 @ ₹5 + Next 100 @ ₹7 + Next 100 @ ₹10 + remaining @ ₹12
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Bill: ₹%d\n", bill);

    return 0;
}

