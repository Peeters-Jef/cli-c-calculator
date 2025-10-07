#include "calculator.h"
#include <stdio.h>


Operator calculator_operator_set() {
    char choosen_operator;
    char input[100];

    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, " %c", &choosen_operator) == 1) {
            switch (choosen_operator) {
                case '+':
                    return SUM;
                    break;
                case '-':
                    return DIFFERENCE;
                    break;
                case '*':
                    return PRODUCT;
                    break;
                case '/':
                    return QUOTIENT;
                    break;
                default:
                    printf("Default operator chosen: None");
                    break;
            }
        
        } else {
            printf("Invalid input");
        }
    }
}

double calculator_number_set() {
    double choosen_number;
    char input[100];


    while (fgets(input, sizeof(input), stdin)) {
        if (sscanf(input, "%lf", &choosen_number) == 1) {
            break;
        } else {
            printf("invalid input. Try again \n");
        }
    }

    return choosen_number;
}

bool calculator_calculate(double choosen_number_first, double choosen_number_second, Operator choosen_operator, double *result) {
    switch (choosen_operator) {
        case SUM:
            *result = choosen_number_first + choosen_number_second;
            return true;
        case DIFFERENCE:
            *result = choosen_number_first - choosen_number_second;
            return true;
        case PRODUCT:
            *result = choosen_number_first * choosen_number_second;
            return true;
        case QUOTIENT:
            if (choosen_number_second == 0) {
                printf("Error: Cannot divide by ZERO\n");
                return false;
            }
            *result = choosen_number_first / choosen_number_second;
        default:
            return false;
    }
}
