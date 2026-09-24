#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Note the space before %c to ignore any preceding whitespace/newline
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        return 0;
    }

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;

        case '-':
            printf("%d\n", num1 - num2);
            break;

        case '*':
            printf("%d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("%d\n", num1 % num2);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;

        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
