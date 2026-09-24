#include <stdio.h>

int main() {
    double cp, sp;

    // Read Cost Price and Selling Price
    if (scanf("%lf %lf", &cp, &sp) != 2) {
        return 1;
    }

    if (sp > cp) {
        double profit = sp - cp;
        double profit_percent = (profit / cp) * 100.0;
        printf("Profit %.0f%%\n", profit_percent);
    } else if (cp > sp) {
        double loss = cp - sp;
        double loss_percent = (loss / cp) * 100.0;
        printf("Loss %.0f%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
