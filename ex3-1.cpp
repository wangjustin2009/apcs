#include <stdio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter an operator: ");
    scanf("%lf %lf", &first, &second);
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first +second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first -second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first *second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first /second);
        break;
    return 0;
}
}
