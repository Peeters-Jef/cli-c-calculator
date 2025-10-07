#include "src/calculator.h"
#include <stdio.h>

int main() {
    printf("Welcome to the CLI calculator\n");
    printf("Please select the operation you would like to do:\n");
    printf("+, -, *, /\n");
    Operator choosen_operator = calculator_operator_set();
    printf("Please type in a number\n");
    int first_number = calculator_number_set();
    printf("Please type in a second number\n");
    int second_number = calculator_number_set();
    int result;
    if (calculator_calculate(first_number, second_number, choosen_operator, &result)) {
        printf("The result is %d\n", result);
    }
}
