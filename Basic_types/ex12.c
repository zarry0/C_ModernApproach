// Evaluates an expression with operators +,-,*,/ and floating point numbers and no precedence
#include <stdio.h>

int main (void) {

    double n, result;
    char operator;
    printf("Enter an expression: ");
    scanf("%lf", &n);
    result = n;
    while ((operator = getchar())  != '\n'){
        scanf("%lf", &n);
        switch (operator) {
            case '+': result += n; break;
            case '-': result -= n; break;
            case '*': result *= n; break;
            case '/': result /= n; break;
        }
    }

    printf("Value of expression: %lf\n", result);

    return 0;
}
