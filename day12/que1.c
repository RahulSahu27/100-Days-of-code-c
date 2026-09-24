#include <stdio.h>

int main() {
    int days;

    if (scanf("%d", &days) != 1 || days < 0) {
        return 0;
    }

    if (days == 0) {
        printf("Fine ₹0\n");
    } else if (days <= 5) {
        // 1 to 5 days: ₹2/day
        int fine = days * 2;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 10) {
        // First 5 days at ₹2/day + remaining at ₹4/day
        int fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 30) {
        // First 5 days at ₹2 + next 5 days at ₹4 + remaining at ₹6/day
        int fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    } else {
        // More than 30 days
        printf("Membership Cancelled\n");
    }

    return 0;
}
