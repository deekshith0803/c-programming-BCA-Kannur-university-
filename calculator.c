#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;

    // Prompt the user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    // Use switch to perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = firstNumber + secondNumber;
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '-':
            result = firstNumber - secondNumber;
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '*':
            result = firstNumber * secondNumber;
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }

    return 0;
}
