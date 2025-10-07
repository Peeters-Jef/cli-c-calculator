#include "src/calculator.h"
#include <stdio.h>

int main() {
    printf("Welcome to the CLI calculator\n");
    double first_number = calculator_number_set();
    
    while (true) {
        Operator choosen_operator = calculator_operator_set();

        if (choosen_operator == NONE) {
            printf("exit calculator\n");
            break;
        }

        double second_number = calculator_number_set();

        if (calculator_calculate(first_number, second_number, choosen_operator, &first_number)) {
            printf("The result is %.2lf\n", first_number);
        }
    }
}
