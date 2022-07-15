// Adds two fractions

#include <stdio.h>

int main (void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;
    printf("Enter two fractions separated by a +, -, *, or / sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

    if (sign == '+'){
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '-'){
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (sign == '*'){
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (sign == '/'){
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
    }
    else {
        printf("Operation not supported or non-existent");
        return 1;
    }

    printf("The resulting fraction is: %d/%d\n", result_num, result_denom);

    return 0;
}